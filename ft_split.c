/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:29:32 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/15 14:33:18 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cnt += 1;
			while (s[i]&& s[i] != c)
			i++;
		}
		else
		i++;
	}
	return (cnt);
}

char	*ft_make_word(const char *s, char c)
{
	char	*rtn;
	int		i;
	int		len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	rtn = (char *)malloc(len + 1);
	i = 0;
	while (s[i] && s[i] != c)
	{
		rtn[i] = s[i];
		i++;
	}
	rtn[i] = 0;
	return (rtn);
}

char	**ft_split(char const *s, char c)
{
	char	**rtn;
	int		word_num;
	int		i;

	if (!s)
		return (0);
	word_num = ft_word_count(s, c);
	rtn = (char **)malloc(sizeof(char *) * (word_num + 1));
	if (!rtn)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			*rtn = ft_make_word(&s[i], c);
			while (s[i] && s[i] != c)
			i++;
			rtn++;
		}
		else
			i++;
	}
	*rtn = 0;
	return (rtn - word_num);
}

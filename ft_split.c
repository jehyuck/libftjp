/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:29:32 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/29 16:03:41 by jeyou            ###   ########.fr       */
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
			while (s[i] && s[i] != c)
			i++;
		}
		else
		i++;
	}
	return (cnt);
}

char	**ft_free_rtn(char **target, int *n)
{
	int		i;
	char	**rtn;

	rtn = malloc(sizeof(char *) * 1);
	if (!rtn)
		return (0);
	i = 0;
	while (i < *n)
		free(target[i++]);
	*n = 0;
	*rtn = 0;
	return (rtn);
}

char	*ft_make_word(const char *s, char c, int *err)
{
	char	*rtn;
	int		i;
	int		len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	rtn = (char *)malloc(len + 1);
	if (!rtn)
	{
		*err = 1;
		return (0);
	}
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
	int		err;
	int		j;

	err = 0;
	if (!s)
		return (0);
	rtn = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!rtn)
		return (0);
	j = 0;
	while (*s && !err)
	{
		while (!err && *s && *s == c)
			s++;
		if (*s && *s != c)
			rtn[j++] = ft_make_word(s, c, &err);
		while (!err && *s && (*s != c))
			s++;
	}
	if (err)
		rtn = ft_free_rtn(rtn, &j);
	rtn[j] = 0;
	return (rtn);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:59:15 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/15 15:20:28 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s_len;
	char	*rtn;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	rtn = (char *)malloc(sizeof(char) *(len + 1));
	if (!rtn)
		return (0);
	i = start;
	j = 0;
	while (i < s_len && s[i] && j < len)
	{
		rtn[j] = s[i];
		i++;
		j++;
	}
	rtn[j] = 0;
	return (rtn);
}

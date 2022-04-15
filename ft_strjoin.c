/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:23:05 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/15 14:26:58 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *rtn;
	size_t s1_len;
	size_t s2_len;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	rtn = (char *)malloc(s1_len + s2_len + 1);
	if (!rtn)
		return (0);
	ft_strlcpy(rtn ,(char *)s1, s1_len + 1);
	ft_strlcat(rtn ,(char *)s2, s1_len + s2_len + 1);
	return (rtn);
}

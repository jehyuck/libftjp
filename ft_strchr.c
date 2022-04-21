/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:29:11 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/19 19:55:50 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_temp;
	size_t	i;

	i = 0;
	s_temp = (char *)s;
	while (s_temp[i])
	{
		if (s_temp[i] == (unsigned char)c)
			return (s_temp + i);
		i++;
	}
	if (s_temp[i] == c)
		return (s_temp + i);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:15:15 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/11 15:55:04 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_temp;

	i = 0;
	s_temp = (unsigned char *)s;
	while (i < n)
	{
		if (s_temp[i] == (unsigned char)c)
			return ((void *)&s_temp[i]);
		i++;
	}
	return (NULL);
}

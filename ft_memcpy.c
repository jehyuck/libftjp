/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:17:51 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/11 13:19:02 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst_temp;
	char	*src_temp;

	i = 0;
	dst_temp = (char *)dest;
	src_temp = (char *)src;
	while (i < n)
	{
		dst_temp[i] = src_temp[i];
		i++;
	}
	return (dest);
}

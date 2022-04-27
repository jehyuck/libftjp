/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:19:15 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/27 22:33:46 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	if (dest == src || n == 0)
		return (dest);
	i = -1;
	if ((size_t)dest < (size_t)src)
		ft_memcpy(dest, src, n);
	else
	{
		while (++i < n)
			((unsigned char *)dest)[n - 1 - i]
				= ((unsigned char *) src)[n - 1 - i];
	}
	return (dest);
}

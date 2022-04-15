/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:16:13 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/11 16:53:12 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_temp;
	unsigned char	*s2_temp;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	s1_temp = (unsigned char *)s1;
	s2_temp = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_temp[i] != s2_temp[i])
			return (s1_temp[i] - s2_temp[i]);
		i++;
	}
	return (0);
}

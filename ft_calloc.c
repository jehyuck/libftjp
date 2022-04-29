/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:23:19 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/29 19:13:11 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*temp;
	size_t	mul_size;

	mul_size = nelem * elsize;
	if (mul_size < nelem && mul_size < elsize)
		return (0);
	temp = malloc(mul_size);
	if (!temp)
		return (0);
	ft_bzero(temp, mul_size);
	return (temp);
}

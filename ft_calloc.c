/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:23:19 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/27 18:49:50 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*temp;

	if (((size_t)(-1) / elsize) < nelem)
		return (0);
	temp = malloc(nelem * elsize);
	if (!temp)
		return (0);
	ft_bzero(temp, nelem * elsize);
	return (temp);
}

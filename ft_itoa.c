/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:26:29 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/22 17:12:54 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_get_len(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*rtn;
	size_t	i;
	size_t	len;

	len = ft_get_len(n);
	rtn = (char *)malloc(len + 1);
	if (!rtn)
		return (0);
	rtn[len] = 0;
	i = 0;
	if (n < 0)
		rtn[i++] = '-';
	while (len-- > i)
	{
		if (n < 0)
			rtn[len] = '0' + n % 10 * (-1);
		else
			rtn[len] = '0' + n % 10;
		n /= 10;
	}
	return (rtn);
}

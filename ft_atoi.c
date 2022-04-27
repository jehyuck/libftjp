/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:20:24 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/27 20:30:09 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
int	check_over_range(unsigned long long sum, int sign)
{
	if (sum > LONG_MAX - 1 && sign == -1)
		return (0);
	if (sum > LONG_MAX && sign == 1)
		return (-1);
	return (sum * sign);
}

int	ft_atoi(const char *s)
{
	int	i;
	int	minus;
	unsigned long long	rtn;

	minus = 1;
	i = 0;
	if (!s)
		return (0);
	while ((s[i] && s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	if (s[i] == '-')
		minus = -1;
	rtn = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9' && s[i])
	{
		rtn = rtn * 10 + s[i] - '0';
		i++;
	}
	return (check_over_range(rtn, minus));
}

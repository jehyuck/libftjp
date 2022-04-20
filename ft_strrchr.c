/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:40:49 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/19 20:21:48 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)(s + i));
	while (i > -1)
	{
		if (s[i] == (unsigned char)c)
			break ;
		i--;
	}
	if (i > -1 && s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (0);
}

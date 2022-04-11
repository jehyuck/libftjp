/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:29:11 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/11 13:29:51 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_temp;

	s_temp = (char *)s;
	while (1)
	{
		if (*s_temp == c)
			return (s_temp);
		if (*s_temp == '\0')
			break ;
		s_temp++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:40:49 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/11 14:08:41 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*rtn;
	int		i;

	rtn = (char *)s;
	i = ft_strlen(rtn);
	while (i > -1)
	{
		if (rtn[i] == c)
			break ;
		i--;
	}
	if (rtn[i] == c)
		return (&rtn[i]);
	return (0);
}

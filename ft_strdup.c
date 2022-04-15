/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:49:04 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/11 19:31:44 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*rtn;

	len = ft_strlen(src);
	rtn = (char *)malloc(len + 1);
	if (!rtn)
		return (NULL);
	i = 0;
	while (src[i])
	{
		rtn[i] = src[i];
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}

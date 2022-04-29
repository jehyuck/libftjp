/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:29:00 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/19 16:07:33 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	last;
	char	*str;

	str = NULL;
	if (s1 && set)
	{
		start = 0;
		last = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (last > 0 && ft_strchr(set, s1[last - 1]))
			last--;
		if (start > last)
			return (ft_strdup(""));
		str = (char *)malloc(sizeof(char) * (last - start + 1));
		if (str)
			ft_strlcpy(str, &s1[start], last - start + 1);
	}
	return (str);
}

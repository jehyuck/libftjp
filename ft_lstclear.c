/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:02:46 by jeyou             #+#    #+#             */
/*   Updated: 2022/04/11 13:06:44 by jeyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*crt;

	crt = *lst;
	*lst = 0;
	while (crt != 0)
	{
		temp = crt->next;
		ft_lstdelone(crt, del);
		crt = temp;
	}
}

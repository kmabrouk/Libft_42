/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:12:12 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/11/23 22:15:37 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cpt;

	cpt = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		cpt++;
	}
	return (cpt);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:08:12 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/11/23 22:36:10 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elt;

	new_elt = (t_list *)malloc(sizeof(*new_elt));
	if (!new_elt)
		return (NULL);
	new_elt->content = content;
	new_elt->next = NULL;
	return (new_elt);
}

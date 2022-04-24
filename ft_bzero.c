/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:37:49 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/11/11 18:12:04 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*t;

	i = 0;
	t = s;
	while (i < n)
	{
		*t++ = 0;
		i++;
	}
}
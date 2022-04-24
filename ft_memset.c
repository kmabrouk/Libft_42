/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:50:54 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/11/11 18:16:17 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*t;

	i = 0;
	if (len > 0)
	{
		t = b;
		while (i < len)
		{
			*t++ = (unsigned char)c;
			i++;
		}
	}
	return (b);
}

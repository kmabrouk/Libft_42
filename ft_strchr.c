/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:52:17 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/11/23 21:52:23 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		*str;
	size_t		i;

	i = 0;
	str = (char *) s;
	while (i < (ft_strlen(str) + 1))
	{
		if (str[i] == (char)c)
			return (str + i);
		i++;
	}
	return ((void *)0);
}

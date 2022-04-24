/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:59:24 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/11/24 13:50:28 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		n;
	char	*str;

	str = (char *)s;
	n = ft_strlen(str);
	while (n > 0 && s[n] != (char)c)
		n--;
	if (s[n] == (char)c)
		return ((char *)&s[n]);
	return (NULL);
}

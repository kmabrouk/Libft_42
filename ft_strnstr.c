/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:48:44 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/11/13 15:30:03 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while ((haystack[i + j] == needle[j])
			&& ((haystack[i + j]) && (needle[j])))
			j++;
		if ((needle[j] == '\0') && ((i + j) <= len))
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

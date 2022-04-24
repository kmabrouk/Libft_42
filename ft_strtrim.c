/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:17:36 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/11/11 18:31:38 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	start(char const *s1, const char *set, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

int	the_end(char const *s1, const char *set, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - 1 - i]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s11;
	int		end;
	char	*dest;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	s11 = start(s1, set, ft_strlen(s1));
	end = the_end(s1, set, ft_strlen(s1));
	if (s11 >= end)
		return (ft_strdup(""));
	dest = (char *)malloc(sizeof(char) * (end - s11 + 1));
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s1 + s11, end - s11 + 1);
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:15:01 by dalves-s          #+#    #+#             */
/*   Updated: 2021/06/01 18:17:09 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*point;

	i = 0;
	point = (char *)s;
	while (point[i] != '\0')
	{
		if (point[i] == c)
			return (&point[i]);
		i++;
	}
	if (c == '\0')
		return (&point[i]);
	return (NULL);
}

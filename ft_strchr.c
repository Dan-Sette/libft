/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:15:01 by dalves-s          #+#    #+#             */
/*   Updated: 2021/06/04 16:35:36 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*point;

	point = (unsigned char *)s;
	while (*point != '\0')
	{
		if (*point == c)
			return ((char *)point);
		point++;
	}
	if (c == '\0')
		return ((char *)point);
	return (NULL);
}

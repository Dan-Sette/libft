/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:36:09 by dalves-s          #+#    #+#             */
/*   Updated: 2021/05/31 22:36:09 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*des;
	const char	*s;

	s = (char *)src;
	des = (char *)dest;
	while (n > 0 && *s != c)
	{
		*des = *s;
		des++;
		s++;
		n--;
	}
	if (*s == c)
	{
		*des = *s;
		des++;
		return ((void *)des);
	}
	return (NULL);
}

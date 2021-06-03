/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:37:02 by dalves-s          #+#    #+#             */
/*   Updated: 2021/05/31 22:37:03 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*s;

	s = (char *)str;
	while (n > 0)
	{
		if (*s == c)
			return (s);
		n--;
		s++;
	}
	return (NULL);
}

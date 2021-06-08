/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:32:41 by dalves-s          #+#    #+#             */
/*   Updated: 2021/06/01 21:58:06 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;

	a = 0;
	while (s[a])
		a++;
	if (c == 0)
		return ((char *)s + a);
	a--;
	while (a >= 0)
	{
		if (s[a] == c)
			return ((char *)s + a);
		a--;
	}
	return (0);
}

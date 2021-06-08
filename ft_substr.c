/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:06:13 by dalves-s          #+#    #+#             */
/*   Updated: 2021/06/04 17:52:58 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	sub = (char *) malloc(len * sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (len > 0)
	{
		sub[i] = s[start];
		start++;
		len--;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

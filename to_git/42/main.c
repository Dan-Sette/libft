/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielsette <danielsette@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 13:35:51 by danielsette       #+#    #+#             */
/*   Updated: 2021/05/27 13:35:51 by danielsette      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int     main(void)
{
    /*char str[] = "Eu vejo você";

    printf("%s\n", str);
    ft_memset(str, 0, 3);
    printf("%s\n", str);
    ft_bzero(str,  5);
    printf("%s\n", str);

    char src[] = "Eu vejo você";
    char dest[12];

    ft_memcpy(dest, src, 5);
    printf("%s\n", dest);

    char src2[] = "Eu vejo voce";
    char dest2[12];

    ft_memccpy(dest2, src2, 'e', 8);
    printf("%s\n", dest2);*/

    const char source[] =  "Eu vejo voce";
    char dest[10];


    printf("%ld\n %s\n",ft_strlcpy(dest, source, 5), dest);
}
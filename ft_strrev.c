/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: an.dmitriy93 <an.dmitriy93@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:09:02 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/07/30 17:35:07 by an.dmitriy9      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
    int     i;
    int     b;
    char    temp;

    i = 0;
    while (str[i])
        i++;
    i--;
    b = 0;
    while (i > b)
    {
        temp = str[i];
        str[i] = str[b];
        str[b] = temp;
        i--;
        b++;
    }
    return (str);
}

int     main(void)
{
    char str[] = "Hello";
    printf("%s\n", ft_strrev(str));
    return (0);
}
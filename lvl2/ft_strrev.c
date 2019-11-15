/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:09:02 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/11/14 10:50:39 by dmian            ###   ########.fr       */
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
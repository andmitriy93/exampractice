/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: an.dmitriy93 <an.dmitriy93@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 11:34:23 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/07/29 19:17:07 by an.dmitriy9      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    pgcd(int a, int b)
{
    int i;
    int gcd;

    i = 1;
    gcd = 0;
    while (i < a && i < b)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
        i++;
    }
    printf("%d", gcd);
}   

int     main(int ac, char **av)
{
    if (ac == 3)
        pgcd(atoi(av[1]), atoi(av[2]));
    pritnf("\n");
    return (0);
}
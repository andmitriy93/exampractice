/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: an.dmitriy93 <an.dmitriy93@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:24:39 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/07/25 17:43:42 by an.dmitriy9      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     main(int ac, char **av)
{
    if (ac == 4)
    {
        if (av[2][0] == '-')
            printf("%d", (atoi(av[1]) - atoi(av[3])));
        if (av[2][0] == '+')
            printf("%d", (atoi(av[1]) + atoi(av[3])));
        if (av[2][0] == '*')
            printf("%d", (atoi(av[1]) * atoi(av[3])));
        if (av[2][0] == '%')
            printf("%d", (atoi(av[1]) % atoi(av[3])));
        if (av[2][0] == '/')
            printf("%d", (atoi(av[1]) / atoi(av[3])));
    }
    printf("\n");
    return (0);
}
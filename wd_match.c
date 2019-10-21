/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wd_match.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: an.dmitriy93 <an.dmitriy93@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:25:12 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/07/25 17:43:42 by an.dmitriy9      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        i++;
    }
    return (i);
}

int     main(int ac, char **av)
{
    int i;
    int j;
    int len;

    if (ac != 3)
        write(1, "\n", 1);
    i = 0;
    j = 0;
    len = 0;
    while (av[1][i] && av[2][j])
    {
        while (av[2][j])
        {
            if (av[1][i] == av[2][j])
            {
                j++;
                len++;
                break;
            }
            j++;
        }
        i++;
    }
    if (len == ft_strlen(av[1]))
    {
        write(1, av[1], len);
    }
    write(1, "\n", 1);
    return (0);
}
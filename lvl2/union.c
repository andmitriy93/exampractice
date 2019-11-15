/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:24:56 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/11/14 12:51:04 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	int j;
	int ascii[127] = {0};												// ? массив печатаемых символов по ASCII

	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			if (ascii[(int)av[1][i]] == 0)								// * Если встречаем символ, заполняем нулем
			{
				write(1, &av[1][i], 1);
				ascii[(int)av[1][i]] = 1;
			}
			i++;
		}
		j = 0;
		while (av[2][j])
		{
			if (ascii[(int)av[2][j]] == 0)								// * Если еще раз встерчаем символ (уже стоит 0) заполняем 1
			{
				write(1, &av[2][j], 1);
				ascii[(int)av[2][j]] = 1;
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


/*
int     check_doubles2(char *str, char c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

int     check_doubles1(char *str, char c, int pos)
{
    int i;

    i = 0;
    while (i < pos)
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

int     main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac != 3)
        write(1, "\n", 1);
    while (av[1][i])
    {
        if (check_doubles1(av[1], av[1][i], i))
            write(1, &av[1][i], 1);
        i++;
    }
    i = 0;
    while (av[2][i])
    {
        if (check_doubles2(av[1], av[2][i]))
        {
            if (check_doubles1(av[2], av[2][i], i))
                write(1, &av[2][i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
*/
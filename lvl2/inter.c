/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:24:52 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/11/23 16:13:58 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	solve(char *str1, char *str2)
{
	int i;
	int ascii[127] = {0};

	i = 0;
	while (str2[i])
	{
		if (ascii[(int)str2[i]] == 0)
			ascii[(int)str2[i]] = 1;
		i++;
	}
	i = 0;
	while (str1[i])
	{
		if (ascii[(int)str1[i]] == 1)
		{
			ascii[(int)str1[i]] = 2;
			write(1, &str1[i], 1);
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		solve(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}


/* 
int     search(char *str, int c)
{
    int i;
    i = 0;
    while (i < c)
    {
        if (str[i] == str[c])
            return (1);
        i++;
    }
    return (0);
}
int     main(int ac, char **av)
{
    int i;
    int j;
    i = 0;
    if (ac != 3)
        write(1, "\n", 1);
    while (av[1][i])
    {
        j = 0;
        while (av[2][j])
        {
            if (av[1][i] == av[2][j])
            {
                if (search(av[1], i) == 0)
                    write(1, &av[1][i], 1);
                    break;
            }
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
*/
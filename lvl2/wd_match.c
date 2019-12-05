/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wd_match.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:25:12 by an.dmitriy9       #+#    #+#             */
/*   Updated: 2019/11/25 13:18:17 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *str, char *charset)
{
	int i = 0;
	while (str[i] != '\0')
	{
		while (*charset != str[i] && *charset != '\0')
			++charset;
		if (*charset == '\0')
			return;
		++i;
		++charset;
	}
	write(1, str, i);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);

	write(1, "\n", 1);
	return (0);
}

// второй вариант
#include <unistd.h>

void ft_putstr(char const *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	main(int argc, char const *argv[])
{
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		while (argv[2][j])
			if (argv[2][j++] == argv[1][i])
				i += 1;
		if (argv[1][i] == '\0')
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}

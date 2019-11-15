/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 16:06:37 by dmian             #+#    #+#             */
/*   Updated: 2019/11/14 16:11:16 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_char(const char c, const char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char *ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (find_char(*s1, s2) == 1)
			return ((char*)s1);
		s1++;
	}
	return (0);
}
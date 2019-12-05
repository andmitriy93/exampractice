/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:01:09 by dmian             #+#    #+#             */
/*   Updated: 2019/11/25 12:59:10 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t		ft_strcspn(const char *s, const char *charset)
{
	size_t i - 0;
	size_t j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (charset[j] != '\0')
		{
			if (s[i] == charset[j])
				return (i);
			j++;
		}
		i++;
	}
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int main ()
{
	char s1[] = "This is a testing string";
	char s2[] = "tga";

	printf("%zu\n", ft_strcspn(s1, s2));
	return (0);
}

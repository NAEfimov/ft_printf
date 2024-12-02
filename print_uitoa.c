/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uitoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:35:35 by nefimov           #+#    #+#             */
/*   Updated: 2024/12/02 16:57:00 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

static int	char_count(unsigned int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num > 0)
	{
		i++;
		num = num / 10;
	}
	return (i);
}

/* static void	add_digits(int n, char **s)
{
	if (n != 0)
	{
		add_digits(n / 10, s);
		**s = (n % 10) + '0';
		printf("n: %u | s: %c\n", n, **s);
		*s = *s + 1;
	}
} */

char	*ft_uitoa(unsigned int n)
{
	int		len;
	char	*str;
	char	*s;

	len = char_count(n) + 1;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_bzero(str, len);
	s = str;
	if (n == 0)
		*s = '0';
	else
		while (--len > 0)
		{
			s[len - 1] = n % 10 + '0';
			n /= 10;
		}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:30:09 by nefimov           #+#    #+#             */
/*   Updated: 2024/11/28 11:54:02 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	print_int(int num)
{
	char	*s;

	s = ft_itoa(num);
	ft_putstr_fd(s, 1);
	return(ft_strlen(s));
}

int	print_uint(unsigned int num)
{
	char	*s;

	s = ft_itoa(num);
	ft_putstr_fd(s, 1);
	return(ft_strlen(s));
}
int	print_hex(int num, char c)
{
	char	s[9];
	char	*hex_base;
	int		i;

	if (c == 'x')
		hex_base = "0123456789abcdef";
	else
		hex_base = "0123456789ABCDEF";
	i = 0;
	while (num != 0)
	{
		s[i] = hex_base[num % 16];
		num /= 16;
		i++;
	}
	s[i] = '\0';
	ft_putstr_fd(s, 1);
	return(ft_strlen(s));
}

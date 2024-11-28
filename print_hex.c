/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:27:42 by nefimov           #+#    #+#             */
/*   Updated: 2024/11/28 14:42:25 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static int	get_hex_len(unsigned int num)
{
	int	i;

	i = 0;
	if (num == 0)
		i = 1;
	while (num > 0)
	{
		num /= 16;
		i++;
	}
	return (i);
}
int	print_hex(int n, char c)
{
	char			s[9];
	unsigned int	num;
	int				hex_len;
	char			*hex_base;

	if (c == 'x')
		hex_base = "0123456789abcdef";
	else
		hex_base = "0123456789ABCDEF";
	num = (unsigned int) n;
	hex_len = get_hex_len(num);
	s[hex_len--] = '\0';
	while (hex_len >= 0)
	{
		s[hex_len--] = hex_base[num % 16];
		num /= 16;	
	}
	ft_putstr_fd(s, 1);
	return(ft_strlen(s));
}

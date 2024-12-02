/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:10:32 by nefimov           #+#    #+#             */
/*   Updated: 2024/12/02 16:37:53 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	char			*str;
	int				i;
	unsigned int	num;
	void			*p;

	str = "num: %u\n";
	num = -8;
	p = &num;
	i = ft_printf(str, num);
	printf("ft_printf: %i\n", i);
	i = printf(str, num);
	printf("printf: %i\n", i);
	i = printf("num pointer: %p\n", &num);
	printf("printf: %i\n", i);
}

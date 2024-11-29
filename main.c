/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:10:32 by nefimov           #+#    #+#             */
/*   Updated: 2024/11/29 16:50:36 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"
#include "libft.h"

int	main(void)
{
	char	*str;
	int		i;
	unsigned int		num;
	void	*p;

	str = "num hex: %p\n";
	num = UINT_MAX;
	// p = NULL;
	i = ft_printf(str, p);
	printf("ft_printf: %i\n", i);
	i = printf(str, p);
	printf("printf: %i\n", i);
	i = printf("num pointer: %p\n", &num);
	printf("printf: %i\n", i);
}
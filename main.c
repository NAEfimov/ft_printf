/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:10:32 by nefimov           #+#    #+#             */
/*   Updated: 2024/11/28 11:29:48 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft.h"

int	main(void)
{
	char	*str;
	int		i;

	str = "num hex: %X\n";
	i = ft_printf(str, -255);
	printf("ft_printf: %i\n", i);
	i = printf(str, -255);
	printf("printf: %i\n", i);
}
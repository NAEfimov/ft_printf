/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:10:32 by nefimov           #+#    #+#             */
/*   Updated: 2024/11/28 14:42:42 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft.h"

int	main(void)
{
	char	*str;
	int		i;
	int		num;

	str = "num hex: %X\n";
	num = 0;
	i = ft_printf(str, num);
	printf("ft_printf: %i\n", i);
	i = printf(str, num);
	printf("printf: %i\n", i);
}
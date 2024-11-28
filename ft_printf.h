/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:27:04 by nefimov           #+#    #+#             */
/*   Updated: 2024/11/28 14:36:02 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

// ft_printf.c
int ft_printf(const char *, ...);

// print_num.c
int	print_int(int num);
int	print_uint(unsigned int num);

// print_str.c
int	print_char(char c);
int	print_string(char *s);

// print_hex.c
int	print_hex(int num, char c);
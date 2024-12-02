/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:27:04 by nefimov           #+#    #+#             */
/*   Updated: 2024/12/02 16:39:45 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stddef.h>
// # include "libft.h"

// ft_printf.c
int		ft_printf(const char *str, ...);

// print_num.c
int		print_int(int num);
int		print_uint(int num);

// print_str.c
int		print_char(char c);
int		print_string(char *s);

// print_hex.c
int		print_hex(int num, char c);

// print_p.c
int		print_pointer(void *p);

// print_utils
void	ft_bzero(void *s, size_t n);
char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);
size_t	ft_strlen(const char *s);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);

#endif

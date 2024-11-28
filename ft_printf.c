/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:27:12 by nefimov           #+#    #+#             */
/*   Updated: 2024/11/28 11:53:29 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"
#include "libft.h"

// Set2 = "-0."
// Set3 = "# +"

static int	in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

// Print formatted construct
// Return pointer to a char after the construct or NULL if error 
static char	*print_var(char *str, va_list args, int *count)
{
	const char	*set1;

	set1 = "cspdiuxX%";
	if (!in_set(*str, set1) && *str)
	{
		ft_putstr_fd("NULL\n", 1);
		return (NULL);
	}
	if (*str == 'c')
		*count += print_char(va_arg(args, int));
	else if (*str == 's')
		*count += print_string(va_arg(args, char *));
	// else if (*str == 'p')
	//  	*count += print_pointer(va_arg(args, void *)); // not ready
	else if (*str == 'd' || *str == 'i')
		*count += print_int(va_arg(args, int));
	else if (*str == 'u')
		*count += print_uint(va_arg(args, unsigned int)); // not ready
	else if (*str == 'x' || *str == 'X')
		*count += print_hex(va_arg(args, int), *str); // print only positive
	else if (*str == '%')
		*count += print_char('%');	
	return (str + 1);
}

int	ft_printf(const char *str, ...)
{
	// const char	*orig;
	char		*next;
	va_list		args;
	int			count;

	va_start(args, str);
	// orig = str;
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			next = print_var((char *)str, args, &count);
			if (!next)
				return (count);
			str = next;
		}
		else
			count += write(1, str++, 1);
	}
	va_end(args);
	return (count);
}

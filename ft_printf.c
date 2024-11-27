/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:27:12 by nefimov           #+#    #+#             */
/*   Updated: 2024/11/27 22:00:12 by nefimov          ###   ########.fr       */
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
static char	*print_var(char *str, va_list args)
{
	const char	*set1;

	set1 = "cspdiuxX%";
	while (!in_set(str, set1))
	{
		str++;
	}
	return (str);
}

int	ft_printf(const char *str, ...)
{
	char	*orig;
	char	*next;
	va_list	args;
	
	va_start(args, str);
	orig = str;
	while (*str)
	{
		if (*str == '%')
		{
			next = print_var(str + 1, args);
			if (!next)
				return (orig - str);
			str = next;
		}
		else
		{
			write(1, str, 1);
			str++;
		}
	}
	va_end(args);
	return (orig - str);
}

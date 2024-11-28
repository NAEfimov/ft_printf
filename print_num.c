/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:30:09 by nefimov           #+#    #+#             */
/*   Updated: 2024/11/28 14:28:07 by nefimov          ###   ########.fr       */
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

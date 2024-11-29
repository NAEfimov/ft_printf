/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:30:09 by nefimov           #+#    #+#             */
/*   Updated: 2024/11/29 16:28:17 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

int	print_int(int num)
{
	char	*s;
	size_t	len;

	s = ft_itoa(num);
	if (!s)
		return(0);
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	free(s);
	return(len);
}

int	print_uint(unsigned int num)
{
	char	*s;
	size_t	len;

	s = ft_uitoa(num);
	if (!s)
		return(0);
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	free(s);
	return(len);
}

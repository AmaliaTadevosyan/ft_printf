/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtadevo <amtadevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:08:47 by amtadevo          #+#    #+#             */
/*   Updated: 2022/11/26 16:08:49 by amtadevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_printptr(void *adress)
{
	uintptr_t	ptr;
	int			count;

	count = 0;
	ptr = (uintptr_t) adress;
	write (1, "0x", 2);
	count += 2;
	count += ft_printnum(ptr, 16, 0);
	return (count);
}

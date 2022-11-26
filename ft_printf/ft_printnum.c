/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtadevo <amtadevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:08:33 by amtadevo          #+#    #+#             */
/*   Updated: 2022/11/26 16:08:36 by amtadevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnum(unsigned long int n1, int n2, int n3)
{
	int		i;
	int		count;
	char	*hex;
	char	*hexxl;

	hex = "0123456789abcdef";
	hexxl = "0123456789ABCDEF";
	count = 0;
	if (n1 / n2 != 0)
		count += ft_printnum(n1 / n2, n2, n3);
	i = n1 % n2;
	if (n2 == 10)
		count += write(1, &hex[i], 1);
	else if (n2 == 16)
	{
		if (n3 == 1)
			count += write(1, &hexxl[i], 1);
		else
			count += write(1, &hex[i], 1);
	}
	return (count);
}

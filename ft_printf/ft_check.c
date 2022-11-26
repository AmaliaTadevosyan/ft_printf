/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtadevo <amtadevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:07:59 by amtadevo          #+#    #+#             */
/*   Updated: 2022/11/26 16:08:02 by amtadevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(int nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		count += write (1, "-", 1);
	}
	if (nbr != -2147483648)
		count += ft_printnum(nbr, 10, 0);
	else
		count += write (1, "2147483648", 10);
	return (count);
}

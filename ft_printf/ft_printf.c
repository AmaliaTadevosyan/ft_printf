/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtadevo <amtadevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:07:48 by amtadevo          #+#    #+#             */
/*   Updated: 2022/11/26 16:07:54 by amtadevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_cases(char g, va_list args, int count)
{
	if (g == 'c')
		count += ft_printchar(va_arg(args, int));
	else if (g == 's')
		count += ft_printstr(va_arg(args, char *));
	else if (g == 'p')
		count += ft_printptr(va_arg(args, void *));
	else if (g == 'd' || g == 'i')
		count += ft_check(va_arg(args, int));
	else if (g == 'u')
		count += ft_printnum(va_arg(args, unsigned int), 10, 0);
	else if (g == 'x')
		count += ft_printnum(va_arg(args, unsigned int), 16, 0);
	else if (g == 'X')
		count += ft_printnum(va_arg(args, unsigned int), 16, 1);
	else if (g == '%')
		count += ft_printpercent();
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			count = ft_cases(str[i], args, count);
		}
		else
			count += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}

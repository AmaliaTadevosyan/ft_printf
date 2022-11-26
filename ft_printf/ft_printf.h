/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtadevo <amtadevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:08:19 by amtadevo          #+#    #+#             */
/*   Updated: 2022/11/26 16:08:23 by amtadevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdint.h>
# include <limits.h>
# include <stdlib.h>

int	ft_printchar(int c);
int	ft_printf(const char *str, ...);
int	ft_printnum(unsigned long int n1, int n2, int n3);
int	ft_printpercent(void);
int	ft_printptr(void *adress);
int	ft_printstr(char *str);
int	ft_check(int nbr);

#endif

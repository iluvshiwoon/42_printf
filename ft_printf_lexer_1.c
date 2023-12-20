/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lexer_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:33:34 by kgriset           #+#    #+#             */
/*   Updated: 2023/12/20 22:25:51 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

	 void lexer_type2(char ** format, t_lexer_status * lexer_status,
	 va_list ap)
	 {
        char current_char;

		current_char = peek(*format, lexer_status->lexer_flags.i);
		if (lexer_status->lexer_state == TYPE /* && !isEOF(*format,
			lexer_status->lexer_flags.i)*/)
		{
			if (current_char == 'd' || current_char == 'i')
				process_type(format, lexer_status, &((int){(va_arg(ap, int))}),
					lexer_integer);
			else if (current_char == 'c')
				process_type(format, lexer_status, &((int){(va_arg(ap, int))}),
					lexer_putchar);
			else if (current_char == 's')
				process_type(format, lexer_status, va_arg(ap, char *),
					lexer_putstr);
			else if (current_char == 'p')
				process_type(format, lexer_status, va_arg(ap, void *),
					lexer_pointer);
			else
			{
				printf_putchar(lexer_status, &((char){'%'}));
				consume(format, 0);
			}
		}
	 }

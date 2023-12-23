/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 22:32:01 by kgriset           #+#    #+#             */
/*   Updated: 2023/12/23 17:06:03 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

	void lexer_lhex(t_lexer_status *lexer_status, void *arg)
{
    size_t l_hex_len;
    char *l_hex_str;

    l_hex_len = 0;
    lexer_status->_case_ = LOWERCASE;
    if (lexer_status->lexer_flags.plus
                || lexer_status->lexer_flags.space)
        lexer_status->return_value = -1;
    if (*((unsigned int *)arg) == 0 && ++l_hex_len) 
        l_hex_str = "0";
    else
    {
        printf_hex_size((*((unsigned int *)arg)), &l_hex_len); 
        l_hex_str = malloc(sizeof(char) * (l_hex_len));
        if (!l_hex_str)
            return;
        printf_convert_hexa((*((unsigned int *)arg)), lexer_status, l_hex_str, l_hex_len);
    }
    lexer_lhex2(lexer_status, l_hex_str, l_hex_len, arg);
}

	void lexer_lhex2(t_lexer_status *lexer_status, char *l_hex_str,
		size_t l_hex_len, void *arg)
	{
		size_t prefix;

		prefix = hex_get_preffix_size(lexer_status, l_hex_len);
		if (lexer_status->width)
		{
			if (lexer_status->lexer_flags.minus)
        {
				printf_hex_write(lexer_status, l_hex_str, l_hex_len);
                printf_width(lexer_status, lexer_status->width - l_hex_len - prefix,
				' ');
        }
			if (!lexer_status->lexer_flags.minus)
        {
                printf_hex_prefix(lexer_status);
	            printf_width(lexer_status, lexer_status->width - l_hex_len - prefix,
				lexer_status->width_char);
				printf_hex_write(lexer_status, l_hex_str, l_hex_len);
        }
		}
		else
			printf_hex_write(lexer_status, l_hex_str, l_hex_len);
        lexer_lhex3(l_hex_str, arg);
	}

void lexer_lhex3(char * l_hex_str, void * arg)
{
    if (*((unsigned int *)arg))
        free(l_hex_str);
}

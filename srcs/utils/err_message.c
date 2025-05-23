/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_message.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:40:58 by agruet            #+#    #+#             */
/*   Updated: 2025/04/29 12:07:10 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/miniRT.h"

int	print_err(char *msg, int line)
{
	if (line == 0)
		ft_fprintf(2, "\e[1;31mError\n%s\e[0m\n", msg);
	else
		ft_fprintf(2, "\e[1;31mError\nLine %d: %s\e[0m\n", line, msg);
	return (false);
}

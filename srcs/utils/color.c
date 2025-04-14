/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:31:23 by agruet            #+#    #+#             */
/*   Updated: 2025/04/14 16:16:47 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/miniRT.h"

uint32_t	rgb_to_hex(uint8_t r, uint8_t g, uint8_t b)
{
	uint32_t	hex;

	hex = r;
	hex <<= 8;
	hex += g;
	hex <<= 8;
	hex += b;
	return (hex);
}

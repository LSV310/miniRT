/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3op.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgallet <tgallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:33:36 by tgallet           #+#    #+#             */
/*   Updated: 2025/04/09 18:26:29 by tgallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"

double	dot(t_vec a, t_vec b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}

t_vec	vmul(t_vec a, double scalar)
{
	a.x *= scalar;
	a.y *= scalar;
	a.z *= scalar;
	return (a);
}

t_vec	vadd(t_vec a, t_vec b)
{
	a.x += b.x;
	a.y += b.y;
	a.z += b.z;
	return (a);
}

double	magn(t_vec a)
{
	return (sqrt(dot(a, a)));
}

t_vec	norm(t_vec a)
{
	return (vmul(a, 1/magn(a)));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   settings.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgallet <tgallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:31:15 by tgallet           #+#    #+#             */
/*   Updated: 2025/04/10 17:37:25 by tgallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"

t_display	init_display(double fov, t_point cam)
{
	t_display	ret;

	fov *= PI / 180;
	ret.width = WIDTH;
	ret.height = (int) (WIDTH / ASPECT_RATIO);
	ret.vp_width = 2 * tan(fov / 2);
	ret.vp_height = ret.vp_width * (ret.height / ret.width);
	ret.camera = cam;
	return (ret);
}

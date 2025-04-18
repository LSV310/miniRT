/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miniRT.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 23:03:39 by agruet            #+#    #+#             */
/*   Updated: 2025/04/14 15:12:16 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

# include "libft.h"
# include "vec3.h"
# include "elements.h"
# include "../mlx/mlx.h"
# include <math.h>
# include <stdint.h>
# include <fcntl.h>

# define PI 3.14159265358979323846264338
# define WIDTH 500
# define ASPECT_RATIO 1

typedef struct s_ray
{
	t_point	p;
	t_vec	dir;
}	t_ray;

typedef struct s_circle
{
	t_point	p;
	double	rad;
}	t_circle;

typedef struct s_display
{
	int		width;
	int		height;
	double	vp_width;
	double	vp_height;
	t_point	camera;
}	t_display;

typedef struct s_mlx
{
	void	*mlx;
	void	*mlx_win;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		width;
	int		height;
}	t_mlx;

typedef struct s_miniRT
{
	t_mlx	*mlx;
}	t_miniRT;

// mlx
void		mlx_start(t_mlx *mlx, int width, int height);
void		kill_mlx(t_mlx *data, int exit_code);

// tristan
void		print_color(unsigned int col);
t_display	init_display(double fov, t_point cam);

// utils
uint32_t	rgb_to_hex(uint8_t r, uint8_t g, uint8_t b);

#endif

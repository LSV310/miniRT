/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elements.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 23:32:46 by agruet            #+#    #+#             */
/*   Updated: 2025/04/13 19:14:42 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ELEMENTS_H
# define ELEMENTS_H

# include "miniRT.h"

typedef struct s_elem_lst
{
	t_arena		*arena;
	size_t		capacity;
	size_t		count;
	uintptr_t	*elem_lst;
}	t_elem_lst;

typedef enum elem_type
{
	INVALID_ELEM,
	AMBIANT_LIGHTING,
	CAMERA,
	LIGHT,
	SPHERE,
	PLANE,
	CYLINDER
}	t_elem_type;

typedef struct s_ambient
{
	t_elem_type	type;
	float		ratio;
	uint32_t	color;
}	t_ambient;

typedef struct s_camera
{
	t_elem_type	type;
	uint32_t	fov;
	t_point		pos;
	t_vec		axis;
}	t_camera;

typedef struct s_light
{
	t_elem_type	type;
	float		ratio;
	t_point		pos;
	uint32_t	color;
}	t_light;

typedef struct s_sphere
{
	t_elem_type	type;
	float		diameter;
	t_point		pos;
	uint32_t	color;
}	t_sphere;

typedef struct s_plane
{
	t_elem_type	type;
	uint32_t	color;
	t_point		pos;
	t_vec		axis;
}	t_plane;

typedef struct s_cylinder
{
	t_elem_type	type;
	uint32_t	color;
	t_point		pos;
	t_vec		axis;
	float		diameter;
	float		height;
}	t_cylinder;

// element list
t_elem_lst	*new_elem_list(t_elem_lst *elements);
t_elem_lst	*add_element(t_elem_lst *elements, void *new_elem, size_t size);
t_elem_type	get_elem_type(void *elem);
size_t		get_elem_size(void *elem);
void		*get_next_elem(t_elem_lst *elements);

// add element functions
t_ambient	*add_ambient_lighting(t_elem_lst *elements, float ratio,
				uint32_t color);
t_camera	*add_camera(t_elem_lst *elements, t_point pos, t_vec axis,
				uint32_t fov);
t_light		*add_light(t_elem_lst *elements, t_point pos, float ratio,
				uint32_t color);
t_sphere	*add_sphere(t_elem_lst *elements, t_point pos, float diameter,
				uint32_t color);
t_plane		*add_plane(t_elem_lst *elements, t_point pos, t_vec axis,
				uint32_t color);
t_cylinder	*add_cylinder(t_elem_lst *elements, t_point pos, t_vec axis,
				float diameter, float height, uint32_t color);

#endif

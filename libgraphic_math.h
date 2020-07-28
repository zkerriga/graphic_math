/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgraphic_math.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 09:15:18 by zkerriga          #+#    #+#             */
/*   Updated: 2020/07/25 09:15:20 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGRAPHIC_MATH_H
# define LIBGRAPHIC_MATH_H

# include "math.h"

typedef char	t_bool;

typedef struct	s_vec3
{
	float		x;
	float		y;
	float		z;
}				t_vec3;

typedef struct s_vec3	t_point;

typedef struct	s_matrix
{
	t_vec3		x_r;
	t_vec3		y_u;
	t_vec3		z_f;
}				t_matrix;

typedef struct	s_rgbvec
{
	float		r;
	float		g;
	float		b;
}				t_rgbvec;

int				color_to_int(t_rgbvec *color);
t_rgbvec		*color_sum(t_rgbvec *dest, t_rgbvec *col1, t_rgbvec *col2);
t_rgbvec		*color_multi(t_rgbvec *dest, t_rgbvec *col1, t_rgbvec *col2);

t_bool			fbetween(float nbr, float down, float up);
float			maxf(float one, float two);
float			rad_to_deg(float radians);

float			module(t_vec3 *vec);
float			module_sqr(t_vec3 *vec);
float			modulep(t_point *a, t_point *b);
float			modulep_sqr(t_point *a, t_point *b);
t_vec3			*normalize(t_vec3 *vector);

void			vset(t_vec3 *dest, float x, float y, float z);
void			vget(t_vec3 *dest, t_point *to, t_point *from);
float			vdot(t_vec3 *vec1, t_vec3 *vec2);
t_vec3			*vprod(t_vec3 *dest, t_vec3 *a, t_vec3 *b);
t_vec3			*vmulti(t_vec3 *dest, t_vec3 *vec, float multiplier);
t_vec3			*vaddition(t_vec3 *dest, t_vec3 *vec1, t_vec3 *vec2);
t_vec3			*vsubtract(t_vec3 *dest, t_vec3 *vec1, t_vec3 *vec2);
t_vec3			*vreverse(t_vec3 *dest, t_vec3 *vector);
t_vec3			*reverse_vec(t_vec3 *vector);

void			set_lookat(t_matrix *lookat, t_vec3 *norm);
t_vec3			*rotate_ray(t_vec3 *ray, t_matrix *lookat);

#endif

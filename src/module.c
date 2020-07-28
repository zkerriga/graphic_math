/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   module.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:07:37 by zkerriga          #+#    #+#             */
/*   Updated: 2020/07/07 10:07:40 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic_math.h"

/*
** Calculates the length of the vector.
*/

float	module(t_vec3 *vec)
{
	return (sqrt(vec->x * vec->x +
					vec->y * vec->y +
					vec->z * vec->z));
}

/*
** Calculates the length between two points.
*/

float	modulep(t_point *a, t_point *b)
{
	return (sqrt((a->x - b->x) * (a->x - b->x) +
					(a->y - b->y) * (a->y - b->y) +
					(a->z - b->z) * (a->z - b->z)));
}

/*
** Calculates the length square between two points.
*/

float	modulep_sqr(t_point *a, t_point *b)
{
	return ((a->x - b->x) * (a->x - b->x) +
			(a->y - b->y) * (a->y - b->y) +
			(a->z - b->z) * (a->z - b->z));
}

/*
** Calculates the length square of the vector.
*/

float	module_sqr(t_vec3 *vec)
{
	return (vec->x * vec->x +
			vec->y * vec->y +
			vec->z * vec->z);
}

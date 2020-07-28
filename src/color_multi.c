/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_multi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:51:09 by zkerriga          #+#    #+#             */
/*   Updated: 2020/07/07 16:52:42 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic_math.h"

/*
** The function multiply the values for all channels from two vectors.
** The Function returns a pointer to `dest` without changes.
*/

t_rgbvec	*color_multi(t_rgbvec *dest, t_rgbvec *col1, t_rgbvec *col2)
{
	dest->r = col1->r * col2->r;
	dest->g = col1->g * col2->g;
	dest->b = col1->b * col2->b;
	return (dest);
}

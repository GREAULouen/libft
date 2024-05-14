/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_v3_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgreau <lgreau@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:11:24 by lgreau            #+#    #+#             */
/*   Updated: 2024/05/14 18:14:17 by lgreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector3.h"

/**
 * @brief Allocates & returns the vector (0, 0, 0)
 *
 * @return t_vector3*
 */
t_vector3	*ft_v3_zero(void)
{
	t_vector3	*res;

	res = malloc(sizeof(t_vector3));
	if (!res)
		return (set_error((char *)__func__, ALLOC), NULL);
	res->x = 0;
	res->y = 0;
	res->z = 0;
	return (res);
}

/**
 * @brief Allocates & returns the vector (x, y, z)
 *
 * @return t_vector3*
 */
t_vector3	*ft_v3_new(double x, double y, double z)
{
	t_vector3	*res;

	res = malloc(sizeof(t_vector3));
	if (!res)
		return (set_error((char *)__func__, ALLOC), NULL);
	res->x = x;
	res->y = y;
	res->z = z;
	return (res);
}

/**
 * @brief Allocates & returns the vector (x, y, z)
 *
 * @return t_vector3*
 */
t_vector3	*ft_v3_cpy(t_vector3 *v)
{
	t_vector3	*res;

	res = malloc(sizeof(t_vector3));
	if (!res)
		return (set_error((char *)__func__, ALLOC), NULL);
	res->x = v->x;
	res->y = v->y;
	res->z = v->z;
	return (res);
}

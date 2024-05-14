/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgreau <lgreau@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:30:28 by lgreau            #+#    #+#             */
/*   Updated: 2024/05/14 11:47:52 by lgreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR3_H
# define FT_VECTOR3_H

# include "../ft_error/ft_error.h"

typedef struct s_vector3
{
	double	x;
	double	y;
	double	z;
}				t_vector3;

double			ft_dot_product(t_vector3 *v1, t_vector3 *v2);

#endif

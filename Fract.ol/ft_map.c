/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:11:18 by bgoron            #+#    #+#             */
/*   Updated: 2023/12/11 19:27:53 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fract_ol.h"

double	map_fract_x(double a, double min, double max)
{
	return (a * ((max - min) / W) + min);
}

double	map_fract_y(double a, double min, double max)
{
	return (a * ((max - min) / H) + min);
}

double	map_color(int i, double min, double max)
{
	int	iter;
	int	mod;

	iter = 100;
	mod = 50;
	if (i % iter > mod - 1)
		return (min + (max - min) * ((double)(mod - (i % mod)) / mod));
	return (min + (max - min) * ((double)(i % mod) / mod));
}

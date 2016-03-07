/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/06 06:43:46 by udelorme          #+#    #+#             */
/*   Updated: 2016/03/06 08:12:40 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# define WIDTH 1920
# define HEIGHT 1080
# define ABSOL(x) ((x) < 0 ? - (x) : (x))

#include "t_map.h"

typedef struct	s_img_prop
{
	void	*img_ptr;
	char	*img_addr;
	int		bits_per_pixel;
	int		size_line;
	int		endian;
}				t_img_prop;

typedef struct	s_meta
{
	void		*mlx;
	void		*wnd;
	t_img_prop	img;
}				t_meta;

typedef struct	s_global
{
	t_meta	env;
	t_map	*map;
}				t_global;

#endif

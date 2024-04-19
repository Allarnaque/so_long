/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 03:29:58 by allan             #+#    #+#             */
/*   Updated: 2024/04/19 17:37:56 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	try_display(t_map *map, char *path)
{
	int width;
	int height;
	map->textures[0] = mlx_xpm_file_to_image(map->connection, path, &map->img_size, &map->img_size);

	height = -1;
	while (++height < map->height)
	{
		width = -1;
		while (++width < map->width)
		{
			mlx_put_image_to_window(map->connection, map->window, map->textures[0], height * 64, width * 64);
		}
	}
}
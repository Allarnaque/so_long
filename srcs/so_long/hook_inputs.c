/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_inputs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:24:38 by allan             #+#    #+#             */
/*   Updated: 2024/04/19 02:25:24 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int		handle_inputs(int keysym, t_map *map)
{
	if (keysym == XK_Escape || (keysym == XK_Control_L && keysym == XK_c))
	{
		printf("(ESC) END PROGRAM\n");
		free_mlx(map, 1);
		free_map(map);
		exit (1);
	}
	printf("The %d key has been pressed\n\n", keysym);
	return (0);
}


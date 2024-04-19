/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:25:25 by adebert           #+#    #+#             */
/*   Updated: 2024/04/19 04:29:11 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>
# include <X11/keysym.h>
# include "../libft/inc/libft.h"
# include "../libft/inc/ft_printf.h"
# include "../libft/inc/get_next_line.h"
# include "../minilibx-linux/mlx.h"

# define WALL_PATH "srcs/textures/test.xpm"
/* # define GROUND_PATH
# define CHAR_PATH
# define COIN_PATH
# define EXIT_PATH */

typedef struct s_map
{
	void	*connection;
	void	*window;
	char	**data;
	void	*textures[1];
	int		height;
	int		width;
	bool	character;
	bool	exit;
	int		coin;
	int		img_size;
	
}	t_map;

int		main(int argc, char **argv);

//init
t_map	init_map(char	*argv);
bool	init_mlx(t_map *map);

//check map
bool	check_map(t_map *map);
bool	check_oblong(char *line, int width);
bool	check_doubles(char *line, t_map *map);
bool	check_wall(t_map *map);

//inputs
int		handle_inputs(int keysym, t_map *map);

//free
void	free_map(t_map *map);
void	free_mlx(t_map *map, bool type);

//utils
void	print_map(t_map *map);

//display
void	try_display(t_map *map, char *path);

#endif

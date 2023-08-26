/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:43:14 by iwozniak          #+#    #+#             */
/*   Updated: 2023/08/26 18:15:15 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd1;
	int		fd2;
	char	*line;
	int		n_lines;
	int		i;
	int		j;

	fd1 = open("file1.txt", O_RDONLY);
	fd2 = open("file2.txt", O_RDONLY);
	n_lines = 5;
	i = 1;
	j = 1;
	while (n_lines--)
	{
		line = get_next_line(fd1);
		printf("fd1 line %d: %s\n", i, line);
		free(line);
		i++;
		line = get_next_line(fd2);
		printf("fd2 line %d: %s\n", j, line);
		free(line);
		j++;
	}
	close(fd1);
	close(fd2);
	return (0);
}

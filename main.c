/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:34:42 by iwozniak          #+#    #+#             */
/*   Updated: 2023/08/26 18:12:43 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* Reading from a file */

int	main(void)
{
	int		fd;
	char	*line;
	int		i;

	fd = open("sometxt.txt", O_RDONLY);
	i = 1;
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("line %d: %s\n", i, line);
		free(line);
		i++;
	}
	close(fd);
	return (0);
}

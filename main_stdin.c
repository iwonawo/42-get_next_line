/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:27:01 by iwozniak          #+#    #+#             */
/*   Updated: 2023/08/26 18:13:18 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* Reading from a standard input */

int	main(void)
{
	char	*line;
	int		fd;

	fd = fileno(stdin);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("line: %s\n", line);
		free(line);
	}
	close(fd);
	return (0);
}

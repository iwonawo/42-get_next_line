/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwozniak <iwozniak@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:27:01 by iwozniak          #+#    #+#             */
/*   Updated: 2023/09/11 13:10:38 by iwozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* Reading from a standard input */

int	main(void)
{
	char	*line;

	line = get_next_line(0);
	printf("line: %s\n", line);
	free(line);
	return (0);
}

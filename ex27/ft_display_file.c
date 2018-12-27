/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:10:21 by tmann             #+#    #+#             */
/*   Updated: 2018/11/23 16:12:10 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUFS 4096

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUFS + 1];

	fd = open(argv[1], O_RDONLY);
	if (argc >= 3)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	else if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (fd == -1)
		return (1);
	while ((ret = read(fd, buf, BUFS)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}

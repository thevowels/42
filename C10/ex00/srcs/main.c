/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 09:26:36 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/07/26 11:00:44 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// I want to output the result to stdoutput
// then error to stderror. But I will just
// output only to stdout for now
void	ft_putstr(char *str, int fd)
{
	while (*str)
		write(fd, str++, 1);
}

int	ft_display_file(char *filename)
{
	int		fd;
	int		n_chars;
	char	chunk[50];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n", 1);
		return (1);
	}

	n_chars = read(fd,chunk,50);
	while(n_chars >1)
	{
		write(1,chunk,n_chars);
		n_chars = read(fd,chunk,50);
	}

	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.\n", 1);
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n", 1);
		return (1);
	}
	return (ft_display_file(argv[1]));
}

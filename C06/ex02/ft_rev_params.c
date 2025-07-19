/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:17:39 by aphyo-ht          #+#    #+#             */
/*   Updated: 2025/07/18 16:22:06 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	wordcount(char *str)
{
	int	wc;

	wc = 0;
	while (str[wc])
		wc++;
	return (wc);
}

int	main(int argc, char **argv)
{
	int	wc;
	int	i;

	i = argc - 1;
	if (i > 0)
	{
		while (i > 0)
		{
			wc = wordcount(argv[i]);
			write(1, argv[i], wc);
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}

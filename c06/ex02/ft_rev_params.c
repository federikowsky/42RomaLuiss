/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefilipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:40:05 by fefilipp          #+#    #+#             */
/*   Updated: 2021/10/13 11:47:12 by fefilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int j;

	j = argc - 1;
	while (j > 0)
	{
		i = 0;
		while (argv[j][i])
			write(1, &argv[j][i++], 1);
		j--;
		write(1, "\n", 1);
	}
	return (0);
}

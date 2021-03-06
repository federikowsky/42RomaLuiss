/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefilipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:46:48 by fefilipp          #+#    #+#             */
/*   Updated: 2021/09/30 16:49:14 by fefilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	ris;

	ris = 0;
	while (*str != '\0')
	{
		ris++;
		str++;
	}
	return (ris);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefilipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:11:34 by fefilipp          #+#    #+#             */
/*   Updated: 2021/09/30 19:13:01 by fefilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	if (*str == NULL)
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str <= 'A' || *str >= 'Z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

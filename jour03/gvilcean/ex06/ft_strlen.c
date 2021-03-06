/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 22:11:55 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/16 00:30:11 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int counter;

	counter = 1;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 20:29:56 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/28 21:11:45 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if ((i <= j && i >= k) || (i <= k && i >= j))
		return (i);
	if ((j <= i && j >= k) || (j <= k && j >= i))
		return (j);
	return (k);
}

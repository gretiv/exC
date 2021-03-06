/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 20:46:11 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/20 20:46:19 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		i++;
	}
	if ((*(s1 + i) == '\0') && (*(s2 + i) != '\0'))
		return (-*(s2 + i));
	if ((*(s2 + i) == '\0') && (*s1 + i) != '\0')
		return (*(s1 + i));
	if (*(s1 + i) > *(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	if (*(s1 + i) < *(s2 + i))
		return (-(*(s2 + i) - *(s1 + i)));
	return (0);
}

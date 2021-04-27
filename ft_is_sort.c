/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:39:29 by adenhez           #+#    #+#             */
/*   Updated: 2020/07/20 15:25:57 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sens;

	i = 0;
	if (length <= 1)
		return (1);
	while (tab[i] == tab[i + 1] && tab[i + 1])
		i++;
	if (!tab[i + 1])
		return (1);
	sens = (*f)(tab[i], tab[i + 1]) > 0 ? 1 : 0;
	while (i + 1 < length)
	{
		if (sens && (*f)(tab[i], tab[i + 1]) < 0)
			return (0);
		if (!sens && (*f)(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

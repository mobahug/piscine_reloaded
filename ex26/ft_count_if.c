/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 08:38:55 by ghorvath          #+#    #+#             */
/*   Updated: 2021/10/31 08:58:36 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int	(*f)(char*))
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			num++;
		i++;
	}
	return (num);
}
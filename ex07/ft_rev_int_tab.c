/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhmajee <muhmajee@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 16:37:48 by muhmajee          #+#    #+#             */
/*   Updated: 2025/08/17 16:38:32 by muhmajee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	flag;

	i = 0;
	flag = 1;
	while (flag)
	{
		if (i >= size / 2)
			flag = 0;
		else
		{
			temp = tab[i];
			tab[i] = tab[size - i - 1];
			tab[size - i - 1] = temp;
			i++;
		}
	}
}

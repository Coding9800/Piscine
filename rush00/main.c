/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:30:03 by josmacha          #+#    #+#             */
/*   Updated: 2023/03/12 13:47:31 by josmacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	main(void)
{
	rush(0, 0);
	rush(0, 1);
	rush(1, 0);
	rush(1, 1);
	rush(1, 2);
	rush(2, 1);
	rush(2, 2);
	rush(2, 3);
	rush(3, 2);
	rush(3, 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:05:52 by bmuni             #+#    #+#             */
/*   Updated: 2023/03/24 17:31:38 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int		i;
	int		x;
	char	c;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 0;
		while (av[++i])
		{
			x = -1;
			while (av[i][++x])
			{
				c = toupper(av[i][x]);
				std::cout << c;
			}
			if (av[i + 1] != NULL)
				std::cout << ' ';
		}
	}
	std::cout << '\n';
	return (0);
}
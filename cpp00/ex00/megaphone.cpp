/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <lucmansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:56:35 by lucmansa          #+#    #+#             */
/*   Updated: 2025/09/23 16:27:26 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int main(int argc, char **argv)
{
	int	i;
	int j = 1;
	
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (1);
	}
	while (j < argc)
	{
		i = 0;
		while (i < (int)std::string(argv[j]).length())
		{
			std::cout << (char)std::toupper(argv[j][i]);
			i++;
		}
		j++;
	}
	return (0);
}

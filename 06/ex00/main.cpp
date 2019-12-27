/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 17:28:09 by ncolomer          #+#    #+#             */
/*   Updated: 2019/12/27 17:49:07 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Interpreter.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 1)
	{
		std::cout << "convert: error: bad arguments\n"
				<< "         usage: value" << std::endl;
	}
	else
	{
		Interpreter p(argv[1]);
		std::cout << p << std::endl;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 15:57:39 by ncolomer          #+#    #+#             */
/*   Updated: 2019/12/15 19:44:55 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

int main(void)
{
	Human bob;

	std::cout << "Bob identify: " << bob.identify() << std::endl;
	std::cout << "Brain identify: " << bob.getBrain().identify() << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 18:20:26 by ncolomer          #+#    #+#             */
/*   Updated: 2019/12/18 20:03:05 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
protected:
	static const int nbrChalls = 5;
	static std::string challenges[ScavTrap::nbrChalls];
public:
	ScavTrap(std::string const &name);
	virtual ~ScavTrap();

	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void challengeNewcomer(void);
};

#endif
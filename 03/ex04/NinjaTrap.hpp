/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 19:11:39 by ncolomer          #+#    #+#             */
/*   Updated: 2019/12/18 20:02:32 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
public:
	NinjaTrap(std::string const &name);
	virtual ~NinjaTrap();

	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void ninjaShoebox(FragTrap &trap);
	void ninjaShoebox(ScavTrap &trap);
	void ninjaShoebox(ClapTrap &trap);
	void ninjaShoebox(NinjaTrap &trap);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 19:41:16 by ncolomer          #+#    #+#             */
/*   Updated: 2019/12/23 14:56:46 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	RobotomyRequestForm();

	std::string const target;
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &other);
	virtual ~RobotomyRequestForm();

	static std::string const &name;

	RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

	void execute(Bureaucrat const &executor) const;
};

#endif

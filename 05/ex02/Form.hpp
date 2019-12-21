/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 19:07:41 by ncolomer          #+#    #+#             */
/*   Updated: 2019/12/21 19:36:11 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
class Form;
# include "Bureaucrat.hpp"

class Form
{
private:
	Form();

	std::string const &name;
	bool _signed;
	int const signGrade;
	int const executeGrade;
public:
	Form(std::string const &name, int const signGrade, int const executeGrade);
	Form(Form const &other);
	~Form();

	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw() {
			return "FormException: Grade too High";
		}
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw() {
			return "FormException: Grade too Low";
		}
	};

	Form &operator=(Form const &other);

	std::string const &getName(void) const;
	bool isSigned(void) const;
	int getSignGrade(void) const;
	int getExecuteGrade(void) const;

	void beSigned(Bureaucrat const &bureaucrat);
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif

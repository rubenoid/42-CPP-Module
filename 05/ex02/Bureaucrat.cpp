/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 17:29:08 by ncolomer          #+#    #+#             */
/*   Updated: 2019/12/22 17:50:07 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade):
	name(name), grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &other):
	name(other.name), grade(other.grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	this->grade = other.grade;
	return (*this);
}

std::string const &Bureaucrat::getName(void) const
{
	return (this->name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade(void)
{
	this->grade--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(void)
{
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

bool Bureaucrat::signForm(Form &form)
{
	if (form.isSigned())
	{
		std::cout << this->name << " cannot sign " << form.getName()
				<< " because the form is already signed." << std::endl;
		return (false);
	}
	else if (form.getSignGrade() < this->grade)
	{
		std::cout << this->name << " cannot sign " << form.getName()
				<< " because it's grade is too low." << std::endl;
		return (false);
	}
	form.beSigned(*this);
	std::cout << this->name << " signs " << form.getName() << std::endl;
	return (true);
}

bool Bureaucrat::executeForm(Form const &form)
{
	if (!form.isSigned())
	{
		std::cout << this->name << " cannot execute " << form.getName()
				<< " because the form is unsigned." << std::endl;
		return (false);
	}
	else if (form.getExecuteGrade() < this->grade)
	{
		std::cout << this->name << " cannot execute " << form.getName()
				<< " because it's grade is too low." << std::endl;
		return (false);
	}
	std::cout << this->name << " executes " << form.getName() << std::endl;
	form.execute(*this);
	return (true);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}
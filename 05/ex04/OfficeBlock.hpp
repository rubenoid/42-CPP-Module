/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 18:46:28 by ncolomer          #+#    #+#             */
/*   Updated: 2019/12/22 20:02:23 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include "Intern.hpp"
# include "Bureaucrat.hpp"

class OfficeBlock
{
private:
	Intern const *intern;
	Bureaucrat const *signer;
	Bureaucrat const *executor;
public:
	OfficeBlock();
	OfficeBlock(Intern const &intern, Bureaucrat const &signer, Bureaucrat const &executor);
	virtual ~OfficeBlock();

	class BureaucratAlreadyAssignedException: public std::exception {
		virtual const char* what() const throw() {
			return "OfficeBlockException: Bureaucrat already assigned to another position";
		}
	};

	void setIntern(Intern const &intern);
	void setSigner(Bureaucrat const &signer);
	void setExecutor(Bureaucrat const &executor);

	void doBureaucracy(std::string const &formName, std::string const &target);
};

#endif

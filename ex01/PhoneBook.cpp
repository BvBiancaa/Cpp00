/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bianca <bianca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:49:36 by bmuni             #+#    #+#             */
/*   Updated: 2023/06/16 14:44:49 by bianca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::getFname(void)
{
	return (this->_firstName);
}

std::string Contact::getLname(void)
{
	return (this->_lastName);
}

std::string Contact::getNick(void)
{
	return (this->_nickname);
}

std::string Contact::getNb(void)
{
	return (this->_phoneNumber);
}

std::string Contact::getDsecret(void)
{
	return (this->_darkestSecret);
}

void	Contact::setFname(std::string n)
{
	this->_firstName = n;
	return ;
}

void	Contact::setLname(std::string n)
{
	this->_lastName = n;
	return ;
}

void	Contact::setNick(std::string n)
{
	this->_nickname = n;
	return ;
}

void	Contact::setPhone(std::string n)
{
	this->_phoneNumber= n;
	return ;
}

void	Contact::setDsecret(std::string n)
{
	this->_darkestSecret = n;
	return ;
}


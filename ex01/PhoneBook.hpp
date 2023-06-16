/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bianca <bianca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:49:47 by bmuni             #+#    #+#             */
/*   Updated: 2023/06/16 14:27:53 by bianca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
	public:
		std::string getFname(void);
		std::string getLname(void);
		std::string getNick(void);
		std::string getNb(void);
		std::string getDsecret(void);
		void	setFname(std::string n);
		void	setLname(std::string n);
		void	setNick(std::string n);
		void	setPhone(std::string n);
		void	setDsecret(std::string n);
};

class	PhoneBook
{
	public:
		Contact contact[8];
};

#endif
#include "PhoneBook.hpp"

void	AddFunction(PhoneBook *p, int num)
{
	char	GetData[200];
	int	i;
	int	check;

	i = -1;
	check = 0;
	std::cout << "Insert the contact's name\n";
	std::cin >> GetData;
	p->contact[num].setFname(GetData);
	std::cout << "Insert the contact's surame\n";
	std::cin >> GetData;
	p->contact[num].setLname(GetData);
	std::cout << "Insert the contact's nickname\n";
	std::cin >> GetData;
	p->contact[num].setNick(GetData);
	std::cout << "Insert the contact's phone number\n";
	std::cin >> GetData;
	while (GetData[++i])
	{
		if (isdigit(GetData[i]) == 0)
		{
			std::cout << "Insert a valid phone number!\n\n";
			check = 2;
			break ;
		}
	}
	while (check == 2)
	{
		std::cout << "Insert the contact's phone number\n";
		std::cin >> GetData;
		check = 0;
		while (GetData[++i])
		{
			if (isdigit(GetData[i]) == 0)
			{
				std::cout << "Insert a valid phone number!\n\n";
				check = 2;
				break ;
			}
		}
	}
	p->contact[num].setPhone(GetData);
	std::cout << "Insert the contact's darkest secret\n";
	std::cin >> GetData;
	p->contact[num].setDsecret(GetData);
	std::cin.clear();
	std::cin.ignore();
}

void	showUtils(std::string s)
{
	int	len;
	int	x;

	len = s.length();
	if (len > 10)
	{
		x = -1;
		while (++x < 9)
			std::cout << s[x];
		std::cout << ".|";
	}
	else
	{
		x = 10 - len;
		while (--x > -1)
			std::cout << " ";
		std::cout << s << "|";
	}
}

void	ShowFunction(PhoneBook *p, int num)
{
	int	i;

	i = 0;
	while (i < num)
	{
		std::cout << "         " << i << "|";
		showUtils(p->contact[i].getFname());
		showUtils(p->contact[i].getLname());
		showUtils(p->contact->getNick());
		std::cout << "\n";
		i++;
	}
	while (i <= 7)
	{
		std::cout << "         " << i << "|          |          |          |\n";
		i++;
	}
}

void	ShowChosenContact(PhoneBook *p, int n, std::string getInput)
{
	int	num;
	char	copy[getInput.length()];
	strcpy(copy, getInput.c_str());
	if (strncmp(copy, "SEARCH", 5) == 0 && strlen(copy) > 6)
	{
		num = atoi(copy + 6);
		std::cout << num << std::endl;
		if (num >= 0 && num < n && num <= 7)
			std::cout << p->contact[num].getFname() << "\n" << p->contact[num].getLname() << "\n" << p->contact[num].getNick() << "\n" << p->contact[num].getNb() << "\n" << p->contact[num].getDsecret() << "\n";
		else if (num <= 7 && num >= 0)
			std::cout << "\n" << "Not an existing contact\n";
		else
			std::cout << "\n" << num << " is a invalid number!\n";
	}
	return ;
}

int	main()
{
	std::string data = "a";
	PhoneBook p;
	int	num;
	int	check;
	bool	alShown;

	num = 0;
	alShown = false;
	check = 0;
	while (data != "EXIT")
	{
		std::cout << "\nADD: new contact, SEARCH: show saved contacts, EXIT: close the program.\n\n";
		if (alShown == true)
			std::cout << "Type SEARCH followed by a number to show all the informations of the selected contact\n\n";
		std::getline(std::cin, data);
		if (data == "ADD")
		{
			if (num > 7)
			{
				num = 0;
				check = 1;
			}
			AddFunction(&p, num);
			num++;
			alShown = false;
		}
		else if (data == "SEARCH" || data.find("SEARCH") != std::string::npos)
		{
			if (alShown == true && data.length() > 6)
				ShowChosenContact(&p, num, data);
			else if (check == 1)
				ShowFunction(&p, 8);
			else
				ShowFunction(&p, num);
			alShown = true;
		}
		else if (data == "EXIT")
			break ;
		else
			std::cout << "Command not found\n";
	}
}
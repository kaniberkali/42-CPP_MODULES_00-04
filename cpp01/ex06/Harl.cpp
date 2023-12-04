#include "Harl.hpp"

Harl::Harl()
{
	
}

Harl::~Harl()
{

}

void    Harl::debug(void) const
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void    Harl::info(void) const
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}

void    Harl::warning(void) const
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I've been coming foryears whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void    Harl::error(void) const
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void    Harl::complain(std::string level) const
{
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	i = 0;
	while (levels[i] != level && i < 4)
		i++;
	switch(i)
	{
		case    0:
			this->debug();
		case    1:
			this->info();
		case    2:
			this->warning();
		case    3:
			this->error();
			break;
		default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}   
}
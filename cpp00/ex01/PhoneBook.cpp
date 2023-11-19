#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
}

PhoneBook::~PhoneBook()
{
}

std::string PhoneBook::input(std::string text) const
{
    std::string input = "";
    std::cout << text << std::flush;
    std::getline(std::cin, input);
    if (std::cin.bad() && input.empty())
    {
        std::cin.clear();
        std::cout << "Invalid input; please try again." << std::endl;
        return (this->input(text));
    }
    return (input);
}

void    PhoneBook::add(void)
{
    this->contacts[this->index].init();
    this->index++;
    if (this->index == 8)
        this->index = 0;
}

void    PhoneBook::view(void) const
{
    std::cout << "|        ID|      NAME|   SURNAME|  USERNAME|" << std::endl;
    for (int i=0;i<8;i++)
        this->contacts[i].view(i);
    std::cout << std::endl;
}

void    PhoneBook::search(void) const
{
    std::string id = this->input("Search ID: ");
    if (id.length() == 1 && id[0] >= '0' && id[0] <= '7')
        this->contacts[std::stoi(id)].display(std::stoi(id));
    else
    {
        std::cout << "Invalid index" << std::endl;
        this->search();
    }
}

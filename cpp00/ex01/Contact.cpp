#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

std::string Contact::input(std::string text)
{
    std::string input = "";
    std::cout << text << std::flush;
    std::getline(std::cin, input);
    if (std::cin.bad() || input.empty())
    {
        std::cin.clear();
        std::cout << "Invalid input; please try again." << std::endl;
        input = this->input(text);
    }
    return (input);
}

std::string Contact::format(std::string text) const
{
    if (text.length() >= 10)
        text = text.substr(0, 9) + ".";
    else
        text.insert(0, (10 - text.length()), ' ');
    return text;
}

void    Contact::init(void)
{
    this->name = this->input("name: ");
    this->surname = this->input("surname: ");
    this->username = this->input("username: ");
    this->phone = this->input("phone: ");
    this->secret = this->input("secret: ");
    std::cout << std::endl;
}

void    Contact::view(int index) const
{
     if (this->name.empty() || this->surname.empty() || this->username.empty() || this->phone.empty() || this->secret.empty())
        return ;
    std::cout << "|" << this->format(std::to_string(index)) << std::flush;
    std::cout << "|" << this->format(this->name)  << std::flush;
    std::cout << "|" << this->format(this->surname)  << std::flush;
    std::cout << "|" << this->format(this->username)  << std::flush;
    std::cout << "|" << std::endl;
}

void    Contact::display(int index) const
{
     if (this->name.empty() || this->surname.empty() || this->username.empty() || this->phone.empty() || this->secret.empty())
        return ;
    std::cout << std::endl;
    std::cout << "CONTACT #" << index << std::endl;
    std::cout << "    name:\t" << this->name << std::endl;
    std::cout << " surname:\t" << this->surname << std::endl;
    std::cout << "username:\t" << this->username << std::endl;
    std::cout << "   phone:\t" << this->phone << std::endl;
    std::cout << "  secret:\t" << this->secret << std::endl;
    std::cout << std::endl;
}

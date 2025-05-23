#include "Harl.hpp"

void    Harl::debug( void )
{
    std::cout << DEBUG << std::endl;
}

void    Harl::info( void )
{
    std::cout << INFO << std::endl;
}

void    Harl::warning( void )
{
    std::cout << WARNING << std::endl;
}

void    Harl::error( void )
{
    std::cout << ERROR << std::endl;
}

int    Harl::get_numeric_level( std::string level )
{
    if (level == "DEBUG")
        return (0);
    else if (level == "INFO")
        return (1);
    else if (level == "WARNING")
        return (2);
    else if (level == "ERROR")
        return (3);
    return (-1);
}

void    Harl::complain( std::string level )
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int         numeric_level;

    void        (Harl::*function[])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    numeric_level = get_numeric_level( level );
    switch (numeric_level)
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            (this->*function[0])();
            // [[fallthrough]];
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            (this->*function[1])();
            // [[fallthrough]];
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            (this->*function[2])();
            // [[fallthrough]];
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            (this->*function[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}
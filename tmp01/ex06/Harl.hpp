#pragma once

#include <iostream>
#include <string>

# define USER_MESSAGE   "Please enter a complaint level (DEBUG, INFO, WARNING, ERROR):"
# define DEBUG          " love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n"
# define INFO           "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n"
# define WARNING        "think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.\n"
# define ERROR          "This is unacceptable! I want to speak to the manager now.\n"
# define WRONG_LEVEL    "Invalid level: Please enter one of the following: DEBUG, INFO, WARNING, or ERROR."

typedef enum e_level
{
    debug,
    info,
    warning,
    error
} t_level;

class Harl {
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
        int     get_numeric_level( std::string level );
    public:
        void    complain( std::string level );
};

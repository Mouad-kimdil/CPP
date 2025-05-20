#include "sed.hpp"

std::string replace_line(std::string line, std::string s1, std::string s2)
{
    std::string result;
    size_t      i;

    i = 0;
    while (i < line.size())
    {
        if (line.substr(i, s1.size()) == s1)
        {
            result += s2;
            i += s1.size();
        }
        else
        {
            result += line[i];
            i++;
        }
    }
    return (result);
}

bool    process_line(std::ofstream &file2, std::string line, std::string s1, std::string s2)
{
    std::string     result;

    result = replace_line(line, s1, s2);
    file2 << result;
    return (true);
}

bool    read_file(std::ifstream &file, std::ofstream &file2, std::string s1, std::string s2)
{
    std::string line;

    while (std::getline(file, line))
    {
        if (!file.eof())
            line += '\n';
        if (!process_line(file2, line, s1, s2))
            return (false);
    }
    return (true);
}

int main(int ac, char **av)
{
    std::ifstream   file;

    if (ac != 4)
        return (std::cout << BAD_ARGS << std::endl, 1);
    file.open(av[1]);
    if (!file.is_open())
        return (std::cout << FILE_ERR << std::endl, 1);
    {
        std::ofstream file2(std::string(av[1]) + ".replace", std::ios::out | std::ios::trunc);
        file2.close();
    }
    std::ofstream   file2(std::string(av[1]) + ".replace", std::ios::app);
    if (!file2.is_open())
        return (file.close(), std::cout << FILE_ERR << std::endl, false);
    if (!read_file(file, file2, std::string(av[2]), std::string(av[3])))
        return (file.close(), file2.close(), 1);
    return (file.close(), file2.close(), 0);
}

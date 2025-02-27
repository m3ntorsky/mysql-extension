#include "utils.h"

std::vector<std::string> explode(std::string s, std::string delimiter)
{
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    std::string token;
    std::vector<std::string> res;

    while ((pos_end = s.find(delimiter, pos_start)) != std::string::npos)
    {
        token = s.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back(token);
    }

    res.push_back(s.substr(pos_start));
    return res;
}

std::string implode(std::vector<std::string> elements, std::string delimiter)
{
    std::string s;
    for(size_t i = 0; i < elements.size(); i++) {
        if(i != 0)
            s.append(delimiter);
        s.append(elements[i]);
    }
    return s;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:17:34 by ziloughm          #+#    #+#             */
/*   Updated: 2023/01/28 21:36:29 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

Replace::Replace()
{
    
}
Replace::~Replace()
{
    delete(inputfile);
}
Replace::Replace(std::string file) : file_in(file)
{
    this->inputfile = new std::ifstream (file, std::ifstream::binary);
    this->outputfile = new std::ofstream (file + ".replace", std::ios::binary);
}

std::ifstream* Replace::getInputfile(void)
{
    return (this->inputfile);
}

std::ofstream* Replace::getOutputfile(void)
{
    return (this->outputfile);
}

void    Replace::read_file(std::string s1, std::string s2)
{
    std::stringstream   f_str;
    std::string         str;
    std::string         str1;
    std::size_t         found = 0;
    
    f_str << this->inputfile->rdbuf();
    str = f_str.str();
    found = str.find(s1);
    while (found != std::string::npos)
    {
        str1 = str.substr(0, found);
        str = str.substr(found + s1.length());
        *(this->outputfile) << str1 + s2;
        found = str.find(s1);
    }
    str1 = str.substr(0);
    *(this->outputfile) << str1;
    this->inputfile->close();
    this->outputfile->close();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:12:59 by ziloughm          #+#    #+#             */
/*   Updated: 2023/01/28 20:56:54 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef REPLACE_H
# define REPLACE_H

class Replace
{
    private:
        std::string file_in;
        std::ifstream *inputfile;
        std::ofstream *outputfile;
    public:
        Replace();
        Replace(std::string file);
        ~Replace();
        std::ifstream* getInputfile(void);
        std::ofstream* getOutputfile(void);
        void    read_file(std::string s1, std::string s2);
};
#   endif
//
//  Movie.hpp
//  lab4ds
//
//  Created by Ian Schweitzer on 2/11/22.
//

#ifndef Movie_hpp
#define Movie_hpp

#include <stdio.h>
#include "Show.h"


class movie: public Show{
private:
    std::string openingCredits;
public:
    movie();
    movie(std::string, std::string, std::string);
    
    
    std::string getOpeningCredits();
    void setOpeningCredits(std::string credits);
    void play();
};

#endif /* Movie_hpp */

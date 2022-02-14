//
//  Movie.cpp
//  lab4ds
//
//  Created by Ian Schweitzer on 2/11/22.
//

#include "Movie.hpp"

std::string movie::getOpeningCredits(){
    return openingCredits;
}
void movie::setOpeningCredits(std::string credits){
    openingCredits = credits;
}
void movie::play(){
    std::cout << "OpeningCredits: \n" << openingCredits << "\n";
}
movie::movie() : Show::Show(){
    openingCredits = "";
    setTitle("Default Movie Title");
    setDescription("Default Movie Description");
}
movie::movie(std::string creditsContent, std::string titleContents, std::string descriptionContents) : Show::Show(titleContents, descriptionContents){
    openingCredits = creditsContent;
}

//
//  tvShow.cpp
//  lab4ds
//
//  Created by Ian Schweitzer on 2/11/22.
//

#include "tvShow.hpp"
void tvShow::play(){ //Overridden virtual function
    int season;
    int episode;
    std::cout << "What Season?" << "\n";
    std::cin >> season;
    std::cout << "What episode?" << "\n";
    std::cin >> episode;
    std::cout << seasons[season-1][episode-1] << "\n";
}
void tvShow::details(){
    std::cout<< "Title: " << getTitle() << "\n";
    std::cout<< "Description: " << getDescription() << "\n";
    std::cout << "There are 3 seasons" << "\n";
}
tvShow::tvShow() : Show::Show(){
    
}
tvShow::tvShow(std::string title, std::string description) : Show::Show(title, description){
    
}

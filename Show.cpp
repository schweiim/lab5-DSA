//
//  Show.cpp
//  lab4ds
//
//  Created by Ian Schweitzer on 2/10/22.
//

#include <stdio.h>
#include "Show.h"
std::string Show::getTitle(){
    return Title;
}
std::string Show::getDescription(){
    return Description;
}
void Show::setTitle(std::string x){
    Title = x;
}
void Show::setDescription(std::string y){
    Description = y;
}
void Show::details(){ //Available if not overridden
    std::cout<< "Title: " << Title << "\n";
    std::cout<< "Description: " << Description << "\n";
}


Show::Show(){
    Title = "Default Title";
    Description = "Default Description";
}
Show::Show(std::string titleContents, std::string descriptionContents){
    Title = titleContents;
    Description = descriptionContents;
}
void Show::play(){ //This will not be available if not overridden
    
}

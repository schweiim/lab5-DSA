//
//  main.cpp
//  lab4ds
//
//  Created by Ian Schweitzer on 2/10/22.
//

#include <iostream>
#include "Show.h"
#include "tvShow.hpp"
#include "Movie.hpp"
void callShow(Show *showname);
int main() {
    
   
    
    int instanceChoice;
    std::string title;
    std::string description;
    std::string openingCredits;
    
    
    
    int i = 0;
    while (i != 2){ //continue looping until i is set to 2
        while (i == 0){
            std::cout<< "Press 1 for an instance of Show. \n" << "Press 2 for an instance of Movie. \n" << "Press 3 for an instance of TV Show. \n" << "Press 4 for an instance of Movie declared as a show. \n" << "Press 5 for an instance of TV Show declared as a show. \n";
            std::cin>> instanceChoice;
            if (instanceChoice == 1){ //Instance of a show
                    std::cout<< "Please type in the title" << "\n";
                    std::cin>>title;
                    std::cout << "Please type in the description" << "\n";
                    std::cin >> description;
                    Show *show1 = new Show();
                    show1->setTitle(title); //Set user defined values;
                    show1->setDescription(description);
                    show1->play();
                    show1->details();
                    callShow(show1);
                    i++;
            }
            else if (instanceChoice == 2){ //Instance of a Movie
                    std::cout<< "Please type in the opening credits" << "\n";
                    std::cin>>openingCredits;
                    movie *movie1 = new movie();
                    movie1->setOpeningCredits(openingCredits);
                    movie1->play();
                    movie1->details(); //uses base details function
                    callShow(movie1);
                    i++;
            }
            else if (instanceChoice == 3){ //Instance of a TV Show
                    tvShow *tvshow1 = new tvShow();
                    tvshow1->play();
                    tvshow1->details(); //Uses overridden details function
                    callShow(tvshow1); //Uses base details function
                    i++;
            }
    //When declared as a Show, the derived classes can only use the base classes functions, unless they are virtual
            
            else if (instanceChoice == 4){ //Instance of a Movie declared as a Show
                    std::cout<< "Please type in the opening credits" << "\n";
                    std::cin>>openingCredits;
                    std::cout<< "\n" << "Please type in the title" << "\n";
                    std::cin>>title;
                    std::cout<< "\n" << "Please type in the description" << "\n";
                    std::cin >> description;
                    Show *movieAsShow = new movie(openingCredits, title, description);
                    
                    movieAsShow->play(); //This will use movie's play function as it is virtual
                    movieAsShow->details(); //This will use the base details function
                    callShow(movieAsShow);
                    i++;
            }
            else if (instanceChoice == 5){ //Instance of a TV Show declared as a Show
                    std::cout<< "\n" << "Please type in the title" << "\n";
                    std::cin>>title;
                    std::cout<< "\n" << "Please type in the description" << "\n";
                    std::cin >> description;
                    Show *tvShowAsShow = new tvShow(title, description);
                    tvShowAsShow->play(); //This will use the tv show's play function as it is virtual
                    tvShowAsShow->details(); //This will NOT show the overridden details function as it is not virtual. It will use the base function.
                    callShow(tvShowAsShow);
                    i++;
            }
            if (i == 1){ //once a choice is made and completed, ask to continue
                std::string response;
                std::cout << "Would you like to continue? Type y or n";
                std::cin >> response;
                if (response == "y"){
                    i--; // Set i to 0 to loop again
                }else{
                    i = 2; //End the loop
                }
            }
        }
    }
   
}
void callShow(Show *showName){
    std::cout << "\n" << "Using the call show function now " << "\n";
    
    showName->play(); 
    showName->details(); // uses the base class's details member
    
    std::cout << "\n";

}

/*
Task 1.3
-----------------------------------------------------------------------------------------
The details member of the base class will be available if not overridden. It is overridden only by TV Show.
 
The play member of the base class will be available if overridden.
 
The getters and setters will always be available.

-----------------------------------------------------------------------------------------

 
*/
// END OF TASK 1.3


/*
Task 2.4
-----------------------------------------------------------------------------------------
In instances of the derived class, the base members will be available as well as the derived members.
 
 If a base member is overloaded in the derived class, the overloaded member will be used.
 
-----------------------------------------------------------------------------------------
                *****************************************************
-----------------------------------------------------------------------------------------
 In instances of the derived class declared as the base class type, only the base members will be available unless the member is virtual.
 
 This impacts TV Show declared as a base class, as one of the base members is overridden however it is unavailable since it is not virtual.
 
-----------------------------------------------------------------------------------------
 */
//END OF TASK 2.4

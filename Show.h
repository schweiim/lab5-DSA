//
//  Show.h
//  lab4ds
//
//  Created by Ian Schweitzer on 2/10/22.
//

#ifndef Show_h
#define Show_h
#include <iostream>
#include <string>
class Show{
private:
    std::string Title;
    std::string Description;
public:
    Show();
    Show(std::string, std::string);
    std::string getTitle();
    std::string getDescription();
    void setTitle(std::string x); //Set the title to x
    void setDescription(std::string y); // Set the description to y
    virtual void play();
    void details();
    
};









#endif /* Show_h */

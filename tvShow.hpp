//
//  tvShow.hpp
//  lab4ds
//
//  Created by Ian Schweitzer on 2/11/22.
//

#ifndef tvShow_hpp
#define tvShow_hpp

#include <stdio.h>
#include "Show.h"


class tvShow: public Show{
private:
    std::string seasons[3][3] = { {"S1E1: Pilot","S1E2: Lakes", "S1E3:Canyons"}, {"S2E1: Jungles", "S2E2: Rivers", "S2E3: Caves"}, {"S3E1: Forests", "S3E2: Deserts", "S3E3: Mountains"}};
public:
    void play();
    void details();
    tvShow(std::string, std::string);
    tvShow();
};
#endif /* tvShow_hpp */

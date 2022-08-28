#include <iostream>
#include "series.h"
#ifndef episode_H
#define episode_H

class episode : public series{
    public:
        episode();
        episode(int, std::string, int, std::string, float, int, int);

        float getEpRating();
        void setEpRating(int);

        void showrating();

    protected:
        int EpRating;
};

episode::episode(){
    EpRating = 0;
}

episode::episode(int _id, std::string _name, int _length, std::string _genre, float _rating, int _epnum, int _eprating) : series(_id, _name, _length, _genre, _rating, _epnum){
}

float episode::getEpRating(){
    return EpRating;
}

void episode::setEpRating(int rate){
    EpRating = rate;
}

void episode::showrating(){
    std::cout << name <<" has been rated " << EpRating << "stars out of 5." << std::endl;
}


#endif
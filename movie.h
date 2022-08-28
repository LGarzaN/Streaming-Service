#include <iostream>
#include "video.h"
#ifndef movie_H
#define movie_h

class movie : public video{
    public:
        movie();
        movie(int, std::string, int, std::string, int);

        float getRating();
        void setRating(int);
        void showrating();
    protected:
        int rating;
}; 

movie::movie(){
    rating = 0;
}

movie::movie(int _id, std::string _name, int _length, std::string _genre, int _rating) : video(_id, _name, _length, _genre), rating(_rating){

}

float movie::getRating(){
    return rating;
}

void movie::setRating(int rate){
    rating = rate;
}

void movie::showrating(){
    std::cout << name <<" has been rated " << rating << " stars out of 5." << std::endl;
}


#endif
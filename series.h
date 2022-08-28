#include <iostream>
#include "video.h"
#ifndef series_H
#define series_H

class series : public video{
    public:
        series();
        series(int, std::string, int, std::string, int, int);

        int getEpNum();
        void setEpNum(int);

        float getRating();
        void setRating(int);

        void showrating();

    protected:
        int EpNum;
        int rating;
};

series::series(){
    EpNum = 0;
    rating = 0;
}

series::series(int _id, std::string _name, int _length, std::string _genre, int _rating, int _epnum) : video(_id, _name, _length, _genre), rating(_rating), EpNum(_epnum){
}

int series::getEpNum(){
    return EpNum;
}

float series::getRating(){
    return rating;
}

void series::setEpNum(int num){
    EpNum = num;
}

void series::setRating(int rate){
    rating = rate;
}

void series::showrating(){
    std::cout << name <<" has been rated " << rating << " stars out of 5." << std::endl;
}




#endif
#include <iostream>
#ifndef video_H
#define video_H

class video{
    public:
        video();
        video(int, std::string, int, std::string);

        int getID();
        std::string getName();
        int getLength();
        std::string getGenre();

        void setID(int);
        void setName(std::string);
        void setLength(int);
        void setGenre(std::string);

        void showVids();

    protected:
        int ID;
        std::string name;
        int length;
        std::string genre;

};

video::video(){
    ID = 0;
    name = "Undefined";
    length = 0;
    genre = "Undefined";
}

video::video(int _id, std::string _name, int _length, std::string _genre){
    ID = _id;
    name = _name;
    length = _length;
    genre = _genre;

}

int video::getID(){
    return ID;
}

std::string video::getName(){
    return name;
}

int video::getLength(){
    return length;
}

std::string video::getGenre(){
    return genre;
}

void video::setID(int id){
    ID = id;
}

void video::setName(std::string _name){
    name = _name;
}

void video::setLength(int _length){
    length = _length;
}

void video::setGenre(std::string _genre){
    genre = _genre;
}

void video::showVids(){

}


#endif 
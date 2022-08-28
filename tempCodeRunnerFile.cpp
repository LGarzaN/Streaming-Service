#include <iostream>
#include "video.h"
#include "movie.h"
#include "series.h"
#include "episode.h"
#include <fstream>
#include <vector>

int main(){

    //Creating different movie objects and adding them to an array

    movie LordOfTheRings(0, "Lord of the Rings", 155, "Adventure", 5);
    movie StarWars(1, "Star Wars", 132, "SciFi", 5);
    movie Inception(2, "Inception", 143, "Action", 4);
    movie Interstellar(3, "Interstellar", 153, "SciFi", 5);
    movie Tenet(4, "Tenet", 135, "Action", 3);

    std::cout << LordOfTheRings.getRating();}
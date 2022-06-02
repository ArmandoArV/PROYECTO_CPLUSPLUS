#include <iostream>
#include "Serie.h"
#include "Video.h"
using namespace std;


Serie::Serie(int id, string length, string genre, string seasons, string episodes, int rating, Video* video)
{
    this->id = id;
    this->length = length;
    this->genre = genre;
    this->seasons = seasons;
    this->episodes = episodes;
    this->rating = rating;
    this ->video = video;
}

Serie::~Serie()
{
    //dtor
}

int Serie::getId()
{
    return this->id;
}

string Serie::getLength()
{
    return this->length;
}

string Serie::getGenre()
{
    return this->genre;
}

string Serie::getSeasons()
{
    return this->seasons;
}

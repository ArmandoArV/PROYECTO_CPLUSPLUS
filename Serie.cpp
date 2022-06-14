#include <iostream>
#include "Serie.h"
#include "Video.h"
using namespace std;


Serie::Serie(int id, string name, string length, string genre, string seasons, string episodes, int rating):Video::Video(id, rating , name, length, genre)
{
    
}

Serie::~Serie()
{
    //dtor
}

string Serie::getSeasons()
{
    return this->seasons;
}

string Serie::getEpisodes()
{
    return this->episodes;
}


void Serie::setSeasons(string seasons)
{
    this->seasons = seasons;
}

void Serie::setEpisodes(string episodes)
{
    this->episodes = episodes;
}



void Serie::print()
{
    cout << "Serie: " << getName() << "\n" << " Id: " << getId() << "\n" << " Length: " << getLength() << "\n" << " Genre: " << getGenre() << "\n" << " Seasons: " << getSeasons() << "\n" << " Episodes: " << getEpisodes() << "\n" << " Rating: " << getRating() << "\n";
}
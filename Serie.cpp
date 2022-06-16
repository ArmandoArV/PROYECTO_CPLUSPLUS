/*
    Name: Armando Arredondo Valle
    Date: 12/06/2022
    Matricula: A01424709
*/

#include <iostream>
#include <vector>
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
    cout << "Serie: " << getName() << "\n" << " Id: " << getId() << "\n" << " Seasons: " << getLength() << "\n" << " Genre: " << getGenre() << "\n" << " Rating: " << getRating() << "\n";
}

// Overloading the operator << to print the information of the object
ostream& operator << (ostream& out, Serie& serie)
{
    out << "Serie: " << serie.getName() << " " << serie.getLength() << " " << serie.getGenre() << " " << serie.getSeasons() << " " << serie.getEpisodes() << " " << serie.getRating() << endl;
    return out;
}

#include "Episodes.h"
#include "Video.h"
#include <iostream>

Episodes::Episodes(int id, string name, string length, string genre, int rating):Video::Video(id, rating , name, length, genre)
{
    //ctor
}

Episodes::~Episodes()
{
    //dtor
}



void Episodes::viewSeason()
{
    // here will display the name of the season and the number of episodes
    cout << "Season: " << getId() << "\n" << " Rating: " << getRating() << "\n";
}

void Episodes::print()
{
    cout << "\n";
    cout << " Id: " << getId() << "\n" << "Name:" << getName() << "\n" << "Length: " << getLength() << "\n" <<"Rating: " << getRating() << "\n";
    cout << "\n";
}
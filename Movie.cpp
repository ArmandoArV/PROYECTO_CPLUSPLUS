#include <iostream>
#include "Video.h"
#include "Movie.h"
using namespace std;

Movie::Movie(int id, string name ,string length, string genre, int rating):Video::Video(id, rating , name, length, genre)
{
    //ctor
}

Movie::~Movie()
{
    //dtor
}



void Movie::print()
{ // prints the movie
    cout << "Movie: " << getName() << "\n" <<" Id: " << getId() << "\n" << " Length " << getLength() << "\n" << " Genre: " << getLength() << "\n" << " Rating: " << getRating() << "\n";
}
/*
    Name: Armando Arredondo Valle
    Date: 12/06/2022
    Matricula: A01424709
*/

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


ostream& operator<<(ostream& output, Movie* movie){
    output << "Pelicula";
    output << "Movie: " << movie->getName() << "Id: " << movie->getId();
    return output;
}

void Movie::print()
{ // prints the movie
    cout << "Movie: " << getName() << "\n" <<" Id: " << getId() << "\n" << " Length " << getLength() << "\n" << " Genre: " << getLength() << "\n" << " Rating: " << getRating() << "\n";
}
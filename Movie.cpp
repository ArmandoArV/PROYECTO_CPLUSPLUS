#include <iostream>
#include "Video.h"
#include "Movie.h"
using namespace std;

Movie::Movie(int id, string name ,string length, string genre, int rating)
{
    this -> name = name; // name of the movie
    this->id = id; // id of the movie
    this->length = length; // length of the movie
    this->genre = genre; // genre of the movie
    this->rating = rating; // rating of the movie
}
Movie::~Movie()
{
    //dtor
}

int Movie::getId() // gets the id of the movie
{
    return this->id;
}

int Movie::getRating()
{
    return this->rating; // gets the rating of the movie
}

string Movie::getName()
{
    return this->name; // gets the name of the movie
}

string Movie::getLength()
{
    return this->length; // gets the length of the movie
}   

string Movie::getGenre()
{
    return this->genre; // gets the genre of the movie
}   


void Movie::setId(int id) 
{
    this->id = id; // sets the id of the movie
}   

void Movie::setName(string name)
{
    this->name = name; // sets the name of the movie
}

void Movie::setLength(string length)
{
    this->length = length; // sets the length of the movie
}       
void Movie::setGenre(string genre)
{
    this->genre = genre; // sets the genre of the movie
}       
void Movie::setRating(int rating)
{
    this->rating = rating; // sets the rating of the movie
}   



void Movie::print()
{ // prints the movie
    cout << "Movie: " << this->name << "\n" <<" Id: " << this->id<< "\n" << " Length " << this->length << "\n" << " Genre: " << this->genre << "\n" << " Rating: " << this->rating << "\n";
}
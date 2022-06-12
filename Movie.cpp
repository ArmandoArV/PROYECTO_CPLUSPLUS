#include <iostream>
#include "Video.h"
#include "Movie.h"
using namespace std;

Movie::Movie(int id, string name ,string length, string genre, int rating)
{
    this -> name = name;
    this->id = id;
    this->length = length;
    this->genre = genre;
    this->rating = rating;
}
Movie::~Movie()
{
    //dtor
}

int Movie::getId()
{
    return this->id;
}

int Movie::getRating()
{
    return this->rating;
}

string Movie::getName()
{
    return this->name;
}

string Movie::getLength()
{
    return this->length;
}   

string Movie::getGenre()
{
    return this->genre;
}   


void Movie::setId(int id)
{
    this->id = id;
}   

void Movie::setName(string name)
{
    this->name = name;
}

void Movie::setLength(string length)
{
    this->length = length;
}       
void Movie::setGenre(string genre)
{
    this->genre = genre;
}       
void Movie::setRating(int rating)
{
    this->rating = rating;
}   



void Movie::print()
{
    cout << "Movie: " << this->name << "\n" <<" Id: " << this->id<< "\n" << " Length " << this->length << "\n" << " Genre: " << this->genre << "\n" << " Rating: " << this->rating << "\n";
}
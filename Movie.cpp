#include <iostream>
#include "Video.h"
#include "Movie.h"
using namespace std;

Movie::Movie(int id, string length, string genre, int rating)
{
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
    cout << "Movie: " << this->id << " " << this->length << " " << this->genre << " " << this->rating << endl;
}       
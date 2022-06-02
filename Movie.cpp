#include <iostream>
#include "Video.h"
#include "Movie.h"
using namespace std;

Movie::Movie(int id, string length, string genre)
{
    this->id = id;
    this->length = length;
    this->genre = genre;
}

Movie::~Movie()
{
    //dtor
}

int Movie::getId()
{
    return this->id;
}

string Movie::getLength()
{
    return this->length;
}

string Movie::getGenre()
{
    return this->genre;
}

void Movie::setVideo(Video* video)
{
    this->id = video->getId();
    this->length = video->getLength();
    this->genre = video->getGenre();
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

void Movie::print()
{
    cout << "ID: " << this->id << endl;
    cout << "Length: " << this->length << endl;
    cout << "Genre: " << this->genre << endl;
}
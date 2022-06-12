#include <iostream>
#include "Video.h"

Video::Video(int id, int rating ,string name,string length, string genre)
{
    this->id = id;
    this->length = length;
    this->genre = genre;
    this->name = name;
    this->rating = rating;
}
Video::Video()
{
    //ctor
}
Video::~Video()
{
    //dtor
}

int Video::getId()
{
    return this->id;
}

string Video::getLength()
{
    return this->length;
}

string Video::getGenre()
{
    return this->genre;
}

string Video::getName()
{
    return this->name;
    cout << name;
}

int Video::getPrice()
{
    return this->price;
}

int Video::getRating()
{
    return this->rating;
}

void Video::setId(int id)
{
    this->id = id;
}

void Video::setLength(string length)
{
    this->length = length;
}

void Video::setGenre(string genre)
{
    this->genre = genre;
}

void Video::setName(string name)
{
    this->name = name;
}


void Video::setRating(int rating)
{
    this->rating = rating;
}



void Video::print()
{
    cout << "Movie rating list: " << endl;
    cout << "Id: " << this->id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Length: " << this->length << endl;
    cout << "Genre: " << this->genre << endl;

}
/*
    Name: Armando Arredondo Valle
    Date: 12/06/2022
    Matricula: A01424709
*/

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
    return id;
}

string Video::getLength()
{
    return length;
}

string Video::getGenre()
{
    return genre;
}

string Video::getName()
{
    return name;
}


int Video::getRating()
{
    return rating;
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
    cout << "Id: " << getId() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Length: " << getLength() << endl;
    cout << "Genre: " << getGenre() << endl;

}


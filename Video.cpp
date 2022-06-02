#include <iostream>
#include "Video.h"

Video::Video(int id, string length, string genre)
{
    this->id = id;
    this->length = length;
    this->genre = genre;
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

void Video::setVideo(Video* video)
{
    this->id = video->getId();
    this->length = video->getLength();
    this->genre = video->getGenre();
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

void Video::print()
{
    cout << "Id: " << this->id << endl;
    cout << "Length: " << this->length << endl;
    cout << "Genre: " << this->genre << endl;
}
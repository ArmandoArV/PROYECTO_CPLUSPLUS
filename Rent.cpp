#include <iostream>
#include "Rent.h"
#include "Video.h"
using namespace std;

Rent::Rent(int id, int rating ,string name ,string length, string genre, int price)
{
    this->id = id;
    this->rating = rating;
    this->price = price;
    this->name = name;
    this->length = length;
    this->genre = genre;
}

Rent::~Rent()
{
    //dtor
}

int Rent::getId()
{
    return this->id;
}

int Rent::getRating()
{
    return this->rating;
}


string Rent::getName()
{
    return this->name;
}

string Rent::getLength()
{
    return this->length;
}   

string Rent::getGenre()
{
    return this->genre;
}   

void Rent::setId(int id)
{
    this->id = id;
}   

void Rent::setPrice(int price)
{
    this->price = price;
}   

void Rent::setName(string name)
{
    this->name = name;
}   

void Rent::setLength(string length)
{
    this->length = length;
}   

void Rent::setGenre(string genre)
{
    this->genre = genre;
}   

void Rent::setRating(int rating)
{
    this->rating = rating;
}   

void Rent::print()
{
    cout << "Id: " << this->id << endl;
    cout << "Name: " << this->name << endl;
    cout << "Rating: " << this->rating << endl;
    cout << "Length: " << this->length << endl;
    cout << "Genre: " << this->genre << endl;
    cout << "Price: " << "$ " << this->price << endl;
}

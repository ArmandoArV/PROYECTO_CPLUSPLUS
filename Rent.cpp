#include <iostream>
#include "Rent.h"
#include "Video.h"
using namespace std;

Rent::Rent(int id, int rating ,string name ,string length, string genre, int price):Video::Video(id, rating , name, length, genre)
{

}

Rent::~Rent()
{
    //dtor
}

int Rent::getPrice()
{
    return this->price;
}

void Rent::setPrice(int price)
{
    this->price = price;
}   


void Rent::print()
{
    cout << "Id: " << getId() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Rating: " << getRating() << endl;
    cout << "Length: " << getLength() << endl;
    cout << "Genre: " << getGenre() << endl;
    cout << "Price: " << "$ " << getPrice() << endl;
}

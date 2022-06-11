#include <iostream>
#include "Serie.h"
#include "Video.h"
using namespace std;


Serie::Serie(int id, string name, string length, string genre, string seasons, string episodes, int rating)
{
    this->id = id;
    this->name = name;
    this->length = length;
    this->genre = genre;
    this->seasons = seasons;
    this->episodes = episodes;
    this->rating = rating;
}

Serie::~Serie()
{
    //dtor
}

int Serie::getId()
{
    return this->id;
}

string Serie::getLength()
{
    return this->length;
}

string Serie::getGenre()
{
    return this->genre;
}

string Serie::getSeasons()
{
    return this->seasons;
}

string Serie::getEpisodes()
{
    return this->episodes;
}

int Serie::getRating()
{
    return this->rating;
}

void Serie::setId(int id)
{
    this->id = id;
}

void Serie::setName(string name)
{
    this->name = name;
}

void Serie::setLength(string length)
{
    this->length = length;
}

void Serie::setGenre(string genre)
{
    this->genre = genre;
}

void Serie::setSeasons(string seasons)
{
    this->seasons = seasons;
}

void Serie::setEpisodes(string episodes)
{
    this->episodes = episodes;
}

void Serie::setRating(int rating)
{
    this->rating = rating;
}

void Serie::print()
{
    cout << "Serie: " << this->name << "\n";
    cout << "Id: " << this->id << "\n";
    cout << "Length: " << this->length << "\n";
    cout << "Genre: " << this->genre << "\n";
    cout << "Seasons: " << this->seasons << "\n";
    cout << "Episodes: " << this->episodes << "\n";
    cout << "Rating: " << this->rating << "\n";
}
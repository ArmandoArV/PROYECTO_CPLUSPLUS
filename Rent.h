#pragma once
#include <string>
#include "Video.h"
using namespace std;
class Rent: public Video // inherits from Video class
{
    private: // 
    int id; // id of the movie
    int rating; // rating of the movie
    int price; // price of the movie
    string name; // name of the movie
    string length; // length of the movie
    string genre;  // genre of the movie
    public: // 
    Rent(); // default constructor
    Rent(int id, int rating ,string name ,string length, string genre, int price); // constructor
    ~Rent(); // destructor
    int getId(); // gets the id of the movie
    int getRating(); // gets the rating of the movie
    //Getters
    string getName(); // gets the name of the movie
    string getLength(); // gets the length of the movie
    string getGenre(); // gets the genre of the movie
    int getPrice(); // gets the price of the movie
    //Setters 
    void setId(int id);
    void setPrice(int price);
    void setVideo(Video* video);
    void setName(string name);
    void setLength(string length);
    void setGenre(string genre);
    void setRating(int rating);
    void print();
};
#pragma once
#include <string>
#include "Video.h"
using namespace std;
class Rent: public Video // inherits from Video class
{
    private: // 
    int price; // price of the movie

    public: // 
    Rent(); // default constructor
    Rent(int id, int rating ,string name ,string length, string genre, int price); // constructor
    ~Rent(); // destructor
    //Getters
    int getPrice(); // gets the price of the movie
    //Setters 
    void setPrice(int price); // sets the price of the movie
    void print();
};
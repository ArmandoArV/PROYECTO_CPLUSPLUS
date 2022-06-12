#pragma once
#include <string>
#include "Video.h"
using namespace std;
class Rent: public Video
{
    private:
    int id;
    int rating;
    int price;
    string name;
    string length;
    string genre;
    public:
    Rent();
    Rent(int id, int rating ,string name ,string length, string genre, int price);
    ~Rent();
    int getId();
    int getRating();
    //Getters
    string getName();
    string getLength();
    string getGenre();
    int getPrice();
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
#pragma once
#include <string>
#include "Video.h"
using namespace std;
class Movie : public Video
{
private:
    string name;
    int id;
    string length;
    string genre;
    int rating;
public:
    Movie();
    Movie(int id, string name ,string length, string genre, int rating);
    ~Movie();
    int getId();
    //Getters
    string getLength();
    string getGenre();
    string getName();
    int getRating();
    //Setters
    void setVideo(Video* video);
    void setName(string name);
    void setId(int id);
    void setLength(string length);
    void setGenre(string genre);
    void setRating(int rating);
    void print();
};
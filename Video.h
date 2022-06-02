#pragma once
#include <string>
using namespace std;
class Video
{
private:
    int id;
    string length;
    string genre;
public:
    Video();
    Video(int id, string length, string genre);
    ~Video();
    int getId();
    //Getters
    string getLength();
    string getGenre();
    //Setters
    void setVideo(Video* video);
    void setId(int id);
    void setLength(string length);
    void setGenre(string genre);
    virtual void print();
};
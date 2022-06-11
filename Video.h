#pragma once
#include <string>
using namespace std;
class Video
{
private:
    string name;
    int id;
    string length;
    string genre;
public:
    Video();
    Video(int id,string name ,string length, string genre);
    ~Video();
    int getId();
    //Getters
    string getName();
    string getLength();
    string getGenre();
    //Setters
    void setName(string name);
    void setVideo(Video* video);
    void setId(int id);
    void setLength(string length);
    void setGenre(string genre);
    virtual void print();
};
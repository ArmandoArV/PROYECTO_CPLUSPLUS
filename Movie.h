#pragma once
#include <string>
#include "Video.h"
using namespace std;
class Movie : public Video
{
private:

public:
    Movie();
    Movie(int id, string name ,string length, string genre, int rating);
    ~Movie();

    void print();
};
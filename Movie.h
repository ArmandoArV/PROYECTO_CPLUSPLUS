/*
    Name: Armando Arredondo Valle
    Date: 12/06/2022
    Matricula: A01424709
*/
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
    friend ostream& operator<<(ostream& , Movie );
    void print();
};
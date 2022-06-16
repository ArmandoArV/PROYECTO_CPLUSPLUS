/*
    Name: Armando Arredondo Valle
    Date: 12/06/2022
    Matricula: A01424709
*/
#pragma once
#include "Video.h"
#include <string>
using namespace std;

class Episodes : public Video{
    private:

    
    public:
        Episodes();
        Episodes(int id, string name, string length, string genre, int rating);
        ~Episodes();

        
        void viewSeason();
        void print();
};
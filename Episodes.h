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
#include "Video.h"
#include "Movie.h"
#include "Serie.h"
#include <iostream>
using namespace std;

int main(){
    Video* video = new Movie(36, "2h", "Comedy", 5);
    Serie* serie = new Serie(2, "1h", "Action", "1", "1", 1, video);
    //serie->print();
    video ->print();
    return 0;
}
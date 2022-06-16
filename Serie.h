/*
    Name: Armando Arredondo Valle
    Date: 12/06/2022
    Matricula: A01424709
*/
#pragma once
#include <string>
#include "Video.h"
using namespace std;
class Serie : public Video
{
private:
    string seasons;
    string episodes;
    
public:
    Serie();
    Serie(int id, string name, string length, string genre, string seasons, string episodes, int rating);
    ~Serie();
    //Getters

    string getSeasons();
    string getEpisodes();
    //Setters
    void setSeasons(string seasons);
    void setEpisodes(string episodes);
    void print();
};
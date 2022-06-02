#pragma once
#include <string>
#include "Video.h"
using namespace std;
class Serie : public Video
{
private:
    int id;
    int rating;
    string length;
    string genre;
    string seasons;
    string episodes;
    Video* video;
public:
    Serie();
    Serie(int id, string length, string genre, string seasons, string episodes, int rating, Video* video);
    ~Serie();
    int getId();
    //Getters
    string getLength();
    string getGenre();
    string getSeasons();
    string getEpisodes();
    int getRating();
    //Setters
    void setVideo(Video* video);
    void setId(int id);
    void setLength(string length);
    void setGenre(string genre);
    void setSeasons(string seasons);
    void setEpisodes(string episodes);
    void setRating(int rating);
};
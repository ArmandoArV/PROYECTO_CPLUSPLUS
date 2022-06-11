#include "Video.h"
#include "Movie.h"
#include "Serie.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;


int main(){
int option=5;
   // Movies objects
    vector <Video*> movies(5);
    vector <Video*> series;
    
    movies[0] = new Movie(1, "The Matrix", "2h", "Sci-Fi", 8);
    movies[1] = new Movie(2, "Inception", "2h", "Action", 10);
    movies[2] = new Movie(3, "The Dark Knight", "2h", "Action", 9);
    movies[3] = new Movie(4, "Interestellar", "2h", "Sci-Fi", 8);
    movies[4] = new Movie(5, "Minions", "2h", "Animation", 7);
    // Series Objects
    Video* GameOfThrones = new Serie(1001,"Game of Thrones","3h","Fantasy","5","10",10);
    Video* TheBigBangTheory = new Serie(1002,"The Big Bang Theory","2h","Comedy","5","10",10);
    Video* BreakingBad = new Serie(1003,"Breaking Bad","2h","Drama","5","10",10);
    Video* TheWalkingDead = new Serie(1004,"The Walking Dead","2h","Horror","5","10",10);
    Video* TheSimpsons = new Serie(1005,"The Simpsons","2h","Animation","5","10",10);
do{
    // Menu
    cout << "\n";
    cout << "-------------------------------------------" << "\n";
    cout << "|                                         |" << "\n";
    cout << "|                                         |" << "\n";
     cout <<"|                                         |" << "\n";
    cout << "|       Welcome to the Video Library!     |" << "\n";
    cout << "|                                         |" << "\n";
    cout << "|                                         |" << "\n";
    cout << "-------------------------------------------" << "\n";
    cout << "Please select one of the following options:" << "\n";
    cout << "   [1] View all the catalogue" << "\n";
    cout << "   [2] Watch a movie" << "\n";
    cout << "   [3] Watch a serie" << "\n";
    cout << "   [4] Show movies based on grade" << "\n";
    cout << "   [5] Exit" << "\n";
    //Operations
    cout << "\n";
    cout << "Please enter an option: "; 
    cin >> option;
    cout << "\n";
    if(option == 1){
        cout << "\nThese are all the movies and series which are available on the platform: \n" << endl;
        ifstream myFile;    
        myFile.open("DB.txt");
        string str;
        if(myFile) {
            ostringstream ss;
            ss << myFile.rdbuf(); // reading data
            str = ss.str();
        }
        cout<<str;
        myFile.close();
    }
    else if(option == 2){
        ifstream myFile;    
        myFile.open("DB.txt");
        string str;
        if(myFile) {
            ostringstream ss;
            ss << myFile.rdbuf(); // reading data
            str = ss.str();
        }
        cout<<str;
        myFile.close();
        int movieOption;
        cout << "Please choose a movie to watch: ";
        cin >> movieOption;
        cout << "\n";
        if(movieOption==1){
            movies[0]->print();
        }else if(movieOption==2){
            movies[1]->print();
        }else if(movieOption==3){
            movies[2]->print();
        }else if(movieOption==4){
            movies[3]->print();
        }else if(movieOption==5){
            movies[4]->print();
        }else{
            cout << "Invalid option" << endl;
            return 0;
        }
    }
    else if(option == 3){
        int serieOption;
        cout << "Please choose a serie to watch: ";
        cin >> serieOption;
        cout << "\n";
        if(serieOption==1001){
            GameOfThrones->print();
        }else if(serieOption==1002){
            TheBigBangTheory->print();
        }else if(serieOption==1003){
            BreakingBad->print();
        }else if(serieOption==1004){
            TheWalkingDead->print();
        }else if(serieOption==1005){
            TheSimpsons->print();
        }else{
            cout << "Invalid option" << endl;
            return 0;
        }
    }    
}
while(option !=0);
return 0;
}
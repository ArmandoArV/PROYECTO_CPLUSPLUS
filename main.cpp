#include "Video.h"
#include "Movie.h"
#include "Serie.h"
#include "Rent.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;


int main(){
int option=5;
   // Movies objects
    vector <Video*> movies(5);
    vector <Video*> series(5);
    vector <Video*> rents(5);
    
    movies[0] = new Movie(1, "The Matrix", "2h", "Sci-Fi", 3);
    movies[1] = new Movie(2, "Inception", "2h", "Action", 4);
    movies[2] = new Movie(3, "The Dark Knight", "2h", "Action", 5);
    movies[3] = new Movie(4, "Interestellar", "2h", "Sci-Fi", 2);
    movies[4] = new Movie(5, "Minions", "2h", "Animation", 5);
    // Series Objects
    series[0] = new Serie(1001,"Game of Thrones","3h","Fantasy","5","10",1);
    series[1] = new Serie(1002,"The Big Bang Theory","2h","Comedy","5","10",5);
    series[2] = new Serie(1003,"Breaking Bad","2h","Drama","5","10",4);
    series[3] = new Serie(1004,"The Walking Dead","2h","Horror","5","10",3);
    series[4] = new Serie(1005,"The Simpsons","2h","Animation","5","10",2);
    // Rent Objects
    rents[0] = new Rent(501,3,"Joker","2h","Action",50);
    rents[1] = new Rent(502,4,"Mad Max","2h","Action",70);
    rents[2] = new Rent(503,5,"Coco","2h","Animation",80);
    rents[3] = new Rent(504,2,"The Exorcist","2h","Horror",90);
    rents[4] = new Rent(505,1,"The Lion King","2h","Animation",100);
    // Menu

do{
    // Menu
    cout << "\n";
    cout << "-------------------------------------------" << "\n";
    cout << "|                                         |" << "\n";
    cout << "|                                         |" << "\n";
    cout << "|                                         |" << "\n";
    cout << "|       Welcome to the Video Library!     |" << "\n";
    cout << "|                                         |" << "\n";
    cout << "|                                         |" << "\n";
    cout << "-------------------------------------------" << "\n";
    cout << "Please select one of the following options:" << "\n";
    cout << "   [1] View all the catalogue" << "\n";
    cout << "   [2] Watch a movie" << "\n";
    cout << "   [3] Watch a serie" << "\n";
    cout << "   [4] Show movies based on rating" << "\n";
    cout << "   [5] Show series based on rating" << "\n";
    cout << "   [6] Rent a movie" << "\n";
    cout << "   [0] Exit" << "\n";
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
            series[0]->print();
        }else if(serieOption==1002){
            series[1]->print();
        }else if(serieOption==1003){
            series[2]->print();
        }else if(serieOption==1004){
            series[3]->print();
        }else if(serieOption==1005){
            series[4]->print();
        }else{
            cout << "Invalid option" << endl;
            return 0;
        }
    }
    else if(option == 4){
        int rating;
        cout << "Please enter a rating: ";
        cin >> rating;
        cout << "\n";
        // user will request movies with an specific rating and will be shown on the screen if they exist in the catalogue
        for(int i=0; i<5; i++){
            if(movies[i]->getRating()==rating){
                // cout << "Movie: " << movies[i]->getName() << "Rating" << movies[i]->getRating() << endl;
                // print all the movies with the specific rating
                movies[i]->print();
            }
        }
    }
    else if(option == 5){
        int rt;
        cout << "Please enter a rating: ";
        cin >> rt;
        cout << "\n";
        // user will request series with an specific rating and will be shown on the screen if they exist in the catalogue
        for(int i=0; i<5; i++){
            if(series[i]->getRating()==rt){
                cout << "Serie: " << series[i]->getName() << "Rating" << series[i]->getRating() << endl;
            }
        }
    }
    else if(option == 6){
        
    }
}
while(option !=0);
return 0;
}
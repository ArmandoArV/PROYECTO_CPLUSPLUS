/*
    Name: Armando Arredondo Valle
    Date: 12/06/2022
    Matricula: A01424709
    Finalizado:
    15/06/2022 - Completo el programa 11:50pm
*/
// Here we include the libraries we need
#include "Video.h"
#include "Movie.h"
#include "Serie.h"
#include "Episodes.h"
#include "Usuario.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include<windows.h>
#include <limits>

using namespace std;

int wt = 5000;
void wait(){
        cout << "Please wait while we return to the menu..." << "\n"; // Print a message
        Sleep(wt);
        system("CLS"); // Clear the screen
};


int main(){
    int option=0;
    

   // Vector to store movies, series and seasons
    vector <Video*> movies(5);
    vector <Video*> series(5);
    // vector <series>
    // Movie objects
    Usuario user1("Armando", "Premium");

    movies[0] = new Movie(1, "The Matrix", "2h", "Sci-Fi", 3); // Movie object 1
    movies[1] = new Movie(2, "Inception", "2h", "Action", 4);
    movies[2] = new Movie(3, "The Dark Knight", "2h", "Action", 1);
    movies[3] = new Movie(4, "Interestellar", "2h", "Sci-Fi", 2);
    movies[4] = new Movie(5, "Minions", "2h", "Animation", 5);

    // Series Objects

    // Game of Thrones Seasons 
    series[0] = new Serie(1,"Game of Thrones","1 season","Fantasy","5","10",1);
    vector <Episodes*> GoTS1(2);
    GoTS1[0] = new Episodes(1,"The tomb of the Dragon","1h","Fantasy",1);
    GoTS1[1] = new Episodes(2,"The last of the Night King","1h","Fantasy",4);

    // The big bang theory Seasons
    series[1] = new Serie(2,"The Big Bang Theory","1 season","Comedy","5","10",5);
    vector <Episodes*> TBTS1(2);
    TBTS1[0] = new Episodes(1,"Sheldon","1h","Fantasy",3);
    TBTS1[1] = new Episodes(2,"The Big Bran","1h","Comedy",4);
    // Breaking bad Seasons
    series[2] = new Serie(3,"Breaking Bad","1 season","Drama","5","10",4);
    vector <Episodes*> BB1(2);
    BB1[0] = new Episodes(1,"Walter White","1h","Drama",5);
    BB1[1] = new Episodes(2,"Catcher in the Rye","1h","Drama",4);
    // The walking dead Seasons
    series[3] = new Serie(4,"The Walking Dead","1 season","Horror","5","10",3);
    vector <Episodes*> TWD1(2);
    TWD1[0] = new Episodes(1,"Epilogue","1h","Horror",3);
    TWD1[1] = new Episodes(2,"The Governor","1h","Horror",2);
    // The Simpsons Seasons
    series[4] = new Serie(5,"The Simpsons","1 season","Animation","5","10",2);
    vector <Episodes*> TS1(2);
    TS1[0] = new Episodes(1,"Pilot","1h","Animation",2);
    TS1[1] = new Episodes(2,"The Simpsons","1h","Animation",5);



do{
    cout << user1 << "\n";
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
    cout << "   [6] Rate a movie or a serie" << "\n";
    cout << "   [0] Exit" << "\n";
    //Operations
    cout << "\n";
    cout << "Please enter an option: ";  // Ask the user to enter an option
    cin >> option; // Get the option from the user
    /*
    while(!(cin >> option || option!=0)){
        cout << "Please enter a valid option: ";
        cin.clear();
        cin.ignore(123, '\n');
    }*/
    cout << "\n"; // Print a new line
    if(option == 1){ // If the option is 1
        system("CLS"); // Clear the screen
        cout << "\n These are all the movies and series which are available on the platform: \n" << endl; // Print a message
        ifstream myFile;    // Create a file stream object
        myFile.open("txts/DB.txt"); // Open the file
        string str; // Create a string variable
        if(myFile) { // If the file is open
            ostringstream ss; // Create a string stream object
            ss << myFile.rdbuf(); // reading data
            str = ss.str(); // Get the string from the string stream object
        }
        cout<<str; // Print the string
        myFile.close(); // Close the file
        wait();
    } // 
    else if(option == 2){ // If the option is 2
        system("CLS"); // Clear the screen
        ifstream myFile;    // Create a file stream object
        myFile.open("txts/Movies.txt"); // Open the file
        string str; // Create a string variable
        if(myFile) { // If the file is open
            ostringstream ss;
            ss << myFile.rdbuf(); // reading data
            str = ss.str();
        }
        cout<<str;
        myFile.close();
        int movieOption; // Create an integer variable
        cout << "Please choose a movie to watch: "; // Ask the user to choose a movie
        cin >> movieOption; // Get the movie from the user
        cout << "\n";
        if(movieOption==1){ // If the movie is 1
            system("CLS"); // Clear the screen
            movies[0]->print();
            wait();
        }else if(movieOption==2){ // If the movie is 2
            system("CLS"); // Clear the screen
            movies[1]->print(); // Print the movie "Inception"
            wait();
        }else if(movieOption==3){ // If the movie is 3
            system("CLS"); // Clear the screen
            movies[2]->print(); // Print the movie "The Dark Knight"
            wait();
        }else if(movieOption==4){ // If the movie is 4
            system("CLS"); // Clear the screen
            movies[3]->print(); // Print the movie "Interestellar"
        }else if(movieOption==5){ // if the movie is 5
            system("CLS"); // Clear the screen
            movies[4]->print(); // Print the movie "Minions"
            wait();
        }else{ // If the movie is not 1, 2, 3, 4 or 5
            cout << "Invalid option" << endl; // Print an error message
            return 0;// Exit the program
        }// End of if-else statement
    } // 
    else if(option == 3){ // If the option is 3
        int serieOption; // Create an integer variable
        int seasonOption; // Create an integer variable
        int episodeOption; // Create an integer variable
        system("CLS"); // Clear the screen
        ifstream myFile;    // Create a file stream object
        myFile.open("txts/Series.txt"); // Open the file
        string str; // Create a string variable
        if(myFile) { // If the file is open
            ostringstream ss;
            ss << myFile.rdbuf(); // reading data
            str = ss.str();
        }
        cout<<str;
        myFile.close();
        cout << "Please choose a serie to watch: "; // Ask the user to choose a serie
        cin >> serieOption; // Get the serie from the user
        cout << "\n"; // Print a new line

        if(serieOption==1){ // If the serie is 1
            series[0]->print(); // Print the serie "Game of Thrones"
            cout << "Please choose a season: "; // Ask the user to choose a season
            cin >> seasonOption; // Get the season from the user
            cout << "\n"; // Print a new line
            if(seasonOption==1){ // If the season is 1
                for (int i = 0; i < GoTS1.size(); i++) {
                    if(seasonOption==i+1){
                        GoTS1[i]->viewSeason();
                        cout << "\n";
                        cout << "Number of episodes: " <<GoTS1.size();
                    }
                }
                system("CLS"); // Clear the screen
                cout << "\n";
                cout << "List of episodes: ";
                cout << "\n";
                for (int i=0; i<GoTS1.size(); i++){
                    GoTS1[i]->print();
                }
                cout << "\n";
                cout << "Please choose an episode: "; // Ask the user to choose an episode
                cin >> episodeOption; // Get the episode from the user
                cout << "\n"; // Print a new line
                // here will display all the episodes of the season 1 vector (GOTS1) of the serie 1 (Game of Thrones)
                if(episodeOption==1){ // If the episode is 1
                        system("CLS"); // Clear the screen
                        GoTS1[0]->print();
                        wait();
                }else if(episodeOption==2){ // If the episode is 2
                        system("CLS"); // Clear the screen
                        GoTS1[1]->print();
                        wait(); // Wait for the user to press a key
                }else{ // If the episode is not 1 or 2
                    cout << "Invalid option" << endl; // Print an error message
                    return 0;// Exit the program
                }// End of if-else statement
                system("CLS"); // Clear the screen
            }
        }else if(serieOption==2){ // If the serie is 2
            series[1]->print(); // Print the serie "The Big Bang Theory"
            cout << "Please choose a season: "; // Ask the user to choose a season
            cin >> seasonOption; // Get the season from the user
            cout << "\n"; // Print a new line
            if(seasonOption==1){ // If the season is 1
                for (int i = 0; i < TBTS1.size(); i++) {
                    if(seasonOption==i+1){
                        TBTS1[i]->viewSeason();
                        cout << "\n";
                        cout << "Number of episodes: " <<TBTS1.size();
                        cout << "\n";
                    }
                }
                cout << "\n";
                cout << "List of episodes: ";
                cout << "\n";
                for (int i=0; i<TBTS1.size(); i++){
                    TBTS1[i]->print();
                }
                system("CLS"); // Clear the screen
                cout << "\n";
                cout << "Please choose an episode: "; // Ask the user to choose an episode
                cin >> episodeOption; // Get the episode from the user
                cout << "\n"; // Print a new line
                // here will display all the episodes of the season 1 vector (TBS1) of the serie 2 (The Big Bang Theory)
                if(episodeOption==1){ // If the episode is 1
                        system("CLS"); // Clear the screen
                        TBTS1[0]->print();
                        wait(); // Wait for the user to press a key
                }else if(episodeOption==2){ // If the episode is 2
                        system("CLS"); // Clear the screen
                        TBTS1[1]->print();
                        wait(); // Wait for the user to press a key
                }else{ // If the episode is not 1, 2, 3, 4 or 5
                    cout << "Invalid option" << endl; // Print an error message
                    return 0;// Exit the program
                }// End of if-else statement
                system("CLS"); // Clear the screen
            }
        }else if(serieOption==3){ // If the serie is 3
            series[2]->print(); // Print the serie "Breaking Bad"
            cout << "Please choose a season: "; // Ask the user to choose a season
            cin >> seasonOption; // Get the season from the user
            cout << "\n"; // Print a new line
            if(seasonOption==1){ // If the season is 1
                for (int i = 0; i < BB1.size(); i++) {
                    if(seasonOption==i+1){
                        BB1[i]->viewSeason();
                        cout << "\n";
                        cout << "Number of episodes: " <<BB1.size();
                        cout << "\n";
                    }
                }
                system("CLS"); // Clear the screen
                cout << "\n";
                cout << "List of episodes: ";
                cout << "\n";
                for (int i=0; i<BB1.size(); i++){
                    BB1[i]->print();
                }
                cout << "\n";
                cout << "Please choose an episode: "; // Ask the user to choose an episode
                cin >> episodeOption; // Get the episode from the user
                cout << "\n"; // Print a new line
                // here will display all the episodes of the season 1 vector (BB1) of the serie 3 (Breaking Bad)
                if(episodeOption==1){ // If the episode is 1
                        system("CLS"); // Clear the screen
                        BB1[0]->print();
                        wait();
                }else if(episodeOption==2){ // If the episode is 2
                    BB1[1]->print(); // Print the episode "Pilot"
                }else{ // If the episode is not 1, 2, 3, 4 or 5
                    cout << "Invalid option" << endl; // Print an error message
                    return 0;// Exit the program
                }// End of if-else statement
                system("CLS"); // Clear the screen
            }
        }else if(serieOption==4){ // If the serie is 4
            series[3]->print(); // Print the serie "The Walking Dead"
            cout << "Please choose a season: "; // Ask the user to choose a season
            cin >> seasonOption; // Get the season from the user
            cout << "\n"; // Print a new line
            if(seasonOption==1){ // If the season is 1
                for (int i = 0; i < TWD1.size(); i++) {
                    if(seasonOption==i+1){
                        TWD1[i]->viewSeason();
                        cout << "\n";
                        cout << "Number of episodes: " <<TWD1.size();
                        cout << "\n";
                    }
                }
                system("CLS"); // Clear the screen
                cout << "\n";
                cout << "List of episodes: ";
                cout << "\n";
                for (int i=0; i<TWD1.size(); i++){
                    TWD1[i]->print();
                }
                cout << "\n";

                cout << "Please choose an episode: "; // Ask the user to choose an episode
                cin >> episodeOption; // Get the episode from the user
                cout << "\n"; // Print a new line
                // here will display all the episodes of the season 1 vector (TWD1) of the serie 4 (The Walking Dead)
                if(episodeOption==1){ // If the episode is 1
                        system("CLS"); // Clear the screen
                        TWD1[0]->print();
                        wait();
                }else if(episodeOption==2){ // If the episode is 2
                        system("CLS"); // Clear the screen
                        TWD1[1]->print();
                        wait();

                }else{ // If the episode is not 1, 2, 3, 4 or 5
                    cout << "Invalid option" << endl; // Print an error message
                    return 0;// Exit the program
                }// End of if-else statement
                system("CLS"); // Clear the screen
            }
        }else if(serieOption==5){ // If the serie is 5
            series[4]->print(); // Print the serie "The Simpsons"
            cout << "Please choose a season: "; // Ask the user to choose a season
            cin >> seasonOption; // Get the season from the user
            cout << "\n"; // Print a new line
            if(seasonOption==1){ // If the season is 1
                for (int i = 0; i < TS1.size(); i++) { // Loop through the vector of seasons
                    if(seasonOption==i+1){ // If the season is the same as the user's input
                        TS1[i]->viewSeason(); // Print the season
                        cout << "\n"; // Print a new line
                        cout << "Number of episodes: " <<TS1.size(); // Print the number of episodes of the season
                        cout << "\n"; // Print a new line
                    } // End of if statement
                } // End of for loop
                system("CLS"); // Clear the screen
                cout << "\n";
                cout << "List of episodes: ";
                cout << "\n";
                for (int i=0; i<TS1.size(); i++){ // Loop through the vector of seasons
                    TS1[i]->print(); // Print the episodes of the season
                }// End of for loop
                cout << "\n";
                cout << "Please choose an episode: "; // Ask the user to choose an episode
                cin >> episodeOption; // Get the episode from the user
                cout << "\n"; // Print a new line
                // here will display all the episodes of the season 1 vector (TS1) of the serie 5 (The Simpsons)
                if(episodeOption==1){ // If the episode is 1
                        system("CLS"); // Clear the screen
                        TS1[0]->print();
                        wait();
                }else if(episodeOption==2){ // If the episode is 2
                        system("CLS"); // Clear the screen
                        TS1[1]->print();
                        wait();
                }else{ // If the episode is not 1, 2, 3, 4 or 5
                    cout << "Invalid option" << endl; // Print an error message
                    return 0;// Exit the program
                }// End of if-else statement
            }
        }else{ // If the serie is not 1, 2, 3, 4 or 5
            cout << "Invalid option" << endl; // Print an error message
            return 0; // Exit the program
        } // End of if-else statement
        system("CLS"); // Clear the screen
    } // 
    else if(option == 4){ // If the option is 4
        system("CLS"); // Clear the screen
        int rating; // Create an integer variable
        cout << "Please enter a rating: "; // Ask the user to enter a rating
        cin >> rating; // Get the rating from the user
        cout << "\n"; // Print a new line
        // user will request movies with an specific rating and will be shown on the screen if they exist in the catalogue
        for(int i=0; i<movies.size(); i++){ // For each movie in the catalogue
            if(movies[i]->getRating()==rating){ // If the movie has the same rating as the user's input
                //cout << "Movie: " << movies[i].getName() << "Rating" << movies[i].getRating() << endl;
                // print all the movies with the specific rating
                movies[i]->print(); // Print the movie
            } // End of if statement
        } // End of for loop
        wait(); // Wait for the user to press a key
    } //
    else if(option == 5){ // If the option is 5
        int rt; // Create an integer variable
        system("CLS"); // Clear the screen
        cout << "Please enter a rating: "; // Ask the user to enter a rating
        cin >> rt; // Get the rating from the user
        cout << "\n"; // Print a new line
        // user will request series with an specific rating and will be shown on the screen if they exist in the catalogue
        for(int i=0; i<5; i++){ // For each serie in the catalogue
            if(series[i]->getRating()==rt){ // If the serie has the same rating as the user's input
                series[i]->print(); // Print the serie
                //cout << "Serie: " << series[i]->getName() << "Rating" << series[i]->getRating() << endl; // Print the serie
            } // End of if statement
        } // End of for loop
        wait(); // Wait for the user to press a key
    }
    else if(option == 6){
        // user will rate a a serie
        int rating; // Create an integer variable
        int optionToRate;

        cout << "[1] for rating a movie, [2] for rating a serie" << "\n";
        cout << "Enter an option: ";
        cin >> optionToRate;
        cout << "\n";
        if(optionToRate==1){
            system("CLS"); // Clear the screen
            cout << "\n These are all the movies and series which are available on the platform: \n" << endl; // Print a message
            ifstream myFile;    // Create a file stream object
            myFile.open("txts/Movies.txt"); // Open the file
            string str; // Create a string variable
            if(myFile) { // If the file is open
                ostringstream ss; // Create a string stream object
                ss << myFile.rdbuf(); // reading data
                str = ss.str(); // Get the string from the string stream object
            }
            cout<<str; // Print the string
            myFile.close(); // Close the file
            cout << "\n"; // Print a new line
            int movieOption;
            cout << "Please choose a movie to rate: ";
            cin >> movieOption;
            cout << "\n";
            cout << "Please enter a rating: ";
            cin >> rating;
            cout << "\n";
            if(movieOption==1){
                movies[0]->setRating(rating);
            }
            else if(movieOption==2){
                movies[1]->setRating(rating);
            }
            else if(movieOption==3){
                movies[2]->setRating(rating);
            }
            else if(movieOption==4){
                movies[3]->setRating(rating);
            }
            else if(movieOption==5){
                movies[4]->setRating(rating);
            }
            wait();
        }
        else if(optionToRate == 2){
            int serieOption; // Create an integer variable
            cout << "Please choose a serie to rate: "; // Ask the user to choose a serie
            cin >> serieOption; // Get the serie from the user
            cout << "\n"; // Print a new line
            cout << "Please enter a rating: "; // Ask the user to enter a rating
            cin >> rating; // Get the rating from the user
            cout << "\n"; // Print a new line
            if(serieOption==1){ // If the serie is 1
                series[0]->setRating(rating); // Set the rating of the serie "Game of Thrones"
            }else if(serieOption==2){ // If the serie is 2
                series[1]->setRating(rating); // Set the rating of the serie "The Big Bang Theory"
            }else if(serieOption==3){ // If the serie is 3
                series[2]->setRating(rating); // Set the rating of the serie "Breaking Bad"
            }else if(serieOption==4){ // If the serie is 4
                series[3]->setRating(rating); // Set the rating of the serie "The Walking Dead"
            }else if(serieOption==5){ // If the serie is 5
                series[4]->setRating(rating); // Set the rating of the serie "The Simpsons"
            }else{ // If the serie is not 1, 2, 3, 4 or 5
                cout << "Invalid option" << endl; // Print an error message
                return 0; // Exit the program
            } // End of if-else statement
        }
    }
    else if(option == 0){ // If the option is 0
        cout << "Thank you for using the catalogue!" << endl; // Print a message
        return 0; // Exit the program
    } // End of if-else statement
}


while(option !=0); // End of do-while loop
// while option is an integer between 0 and 6, the program will continue to run if not, the program will return to the main menu

/* Se suponia esto debia validar si no era una letra
while(!(cin >> option)){
        cout << "Please enter a valid option: ";
        cin.clear();
        cin.ignore(123, '\n');
};
*/

try {
    if(option < 0 || option > 6){
        throw "Invalid option";
    }
}
catch(const char* msg){
    cout << msg << endl;
}



try { if(!(cin >> option)){
        throw "Invalid option";
    }
}
catch(const char* msg){
    cout << msg << endl;
}

try {
    if(option == 1){
        if(movies.size() == 0){
            throw "There are no movies in the catalogue";
        }
    }
}
catch(const char* msg){
    cout << msg << endl;
}

try {
    if(option == 2){
        if(series.size() == 0){
            throw "There are no series in the catalogue";
        }
    }
}
catch(const char* msg){
    cout << msg << endl;
}

try {
    if(option == 3){
        if(movies.size() == 0){
            throw "There are no movies in the catalogue";
        }
    }
}
catch(const char* msg){
    cout << msg << endl;
}


return 0; // Exit the program
} // End of main function


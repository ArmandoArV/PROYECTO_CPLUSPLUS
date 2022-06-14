/*
    Name: Armando Arredondo Valle
    Date: 12/06/2022
    Matricula: A01424709
*/
// Here we include the libraries we need
#include "Video.h"
#include "Movie.h"
#include "Serie.h"
#include "Rent.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main(){
int option=0;
   // Vector to store movies, series and rents
    vector <Video*> movies(5); // 5 movies
    vector <Video*> series(5);
    vector <Video*> rents(5);
    // Movie objects
    movies[0] = new Movie(1, "The Matrix", "2h", "Sci-Fi", 3); // Movie object 1
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
    cout << "Please enter an option: ";  // Ask the user to enter an option
    cin >> option; // Get the option from the user
    cout << "\n"; // Print a new line
    if(option == 1){ // If the option is 1
        system("CLS"); // Clear the screen
        cout << "\nThese are all the movies and series which are available on the platform: \n" << endl; // Print a message
        ifstream myFile;    // Create a file stream object
        myFile.open("DB.txt"); // Open the file
        string str; // Create a string variable
        if(myFile) { // If the file is open
            ostringstream ss; // Create a string stream object
            ss << myFile.rdbuf(); // reading data
            str = ss.str(); // Get the string from the string stream object
        }
        cout<<str; // Print the string
        myFile.close(); // Close the file
    } // 
    else if(option == 2){ // If the option is 2
        ifstream myFile;    // Create a file stream object
        myFile.open("DB.txt"); // Open the file
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
            movies[0]->print(); // Print the movie "The Matrix"
        }else if(movieOption==2){ // If the movie is 2
            movies[1]->print(); // Print the movie "Inception"
        }else if(movieOption==3){ // If the movie is 3
            movies[2]->print(); // Print the movie "The Dark Knight"
        }else if(movieOption==4){ // If the movie is 4
            movies[3]->print(); // Print the movie "Interestellar"
        }else if(movieOption==5){ // if the movie is 5 
            movies[4]->print(); // Print the movie "Minions"
        }else{ // If the movie is not 1, 2, 3, 4 or 5
            cout << "Invalid option" << endl; // Print an error message
            return 0;// Exit the program
        }// End of if-else statement
    } // 
    else if(option == 3){ // If the option is 3
        int serieOption; // Create an integer variable
        cout << "Please choose a serie to watch: "; // Ask the user to choose a serie
        cin >> serieOption; // Get the serie from the user
        cout << "\n"; // Print a new line
        if(serieOption==1001){ // If the serie is 1
            series[0]->print(); // Print the serie "Game of Thrones"
        }else if(serieOption==1002){ // If the serie is 2
            series[1]->print(); // Print the serie "The Big Bang Theory"
        }else if(serieOption==1003){ // If the serie is 3
            series[2]->print(); // Print the serie "Breaking Bad"
        }else if(serieOption==1004){ // If the serie is 4
            series[3]->print(); // Print the serie "The Walking Dead"
        }else if(serieOption==1005){ // If the serie is 5
            series[4]->print(); // Print the serie "The Simpsons"
        }else{ // If the serie is not 1, 2, 3, 4 or 5
            cout << "Invalid option" << endl; // Print an error message
            return 0; // Exit the program
        } // End of if-else statement
    } // 
    else if(option == 4){ // If the option is 4
        int rating; // Create an integer variable
        cout << "Please enter a rating: "; // Ask the user to enter a rating
        cin >> rating; // Get the rating from the user
        cout << "\n"; // Print a new line
        // user will request movies with an specific rating and will be shown on the screen if they exist in the catalogue
        for(int i=0; i<5; i++){ // For each movie in the catalogue
            if(movies[i]->getRating()==rating){ // If the movie has the same rating as the user's input
                // cout << "Movie: " << movies[i]->getName() << "Rating" << movies[i]->getRating() << endl;
                // print all the movies with the specific rating
                movies[i]->print(); // Print the movie
            } // End of if statement
        } // End of for loop
    } //
    else if(option == 5){ // If the option is 5
        int rt; // Create an integer variable
        cout << "Please enter a rating: "; // Ask the user to enter a rating
        cin >> rt; // Get the rating from the user
        cout << "\n"; // Print a new line
        // user will request series with an specific rating and will be shown on the screen if they exist in the catalogue
        for(int i=0; i<5; i++){ // For each serie in the catalogue
            if(series[i]->getRating()==rt){ // If the serie has the same rating as the user's input
                cout << "Serie: " << series[i]->getName() << "Rating" << series[i]->getRating() << endl; // Print the serie
            } // End of if statement
        } // End of for loop
    } //
    else if(option == 6){
        // system will request the user how many movies he wants to rent and will be shown on the screen and will be stored in the rent array and will display the total price of the rent
        int numberOfMovies; // Create an integer variable
        cout << "Please enter the number of movies you want to rent: "; // Ask the user to enter the number of movies he wants to rent
        cin >> numberOfMovies; // Get the number of movies from the user
        cout << "\n"; // Print a new line
        int totalPrice = 0; // Create an integer variable
        for(int i=0; i<numberOfMovies; i++){ // For each movie in the rent array
            int movieOption; // Create an integer variable
            cout << "Please choose a movie to rent: "; // Ask the user to choose a movie
            cin >> movieOption; // Get the movie from the user
            cout << "\n"; // Print a new line
            if(movieOption==1){ // If the movie is 1
                totalPrice += rents[0]->getPrice(); // Add the price of the movie to the total price
                cout << "You have rented " << rents[0]->getName() << " for $ " << rents[0]->getPrice() << "\n"; // Print the movie and the price
            }else if(movieOption==2){ // If the movie is 2
                totalPrice += rents[1]->getPrice(); // Add the price of the movie to the total price
                cout << "You have rented " << rents[1]->getName() << " for $ " << rents[1]->getPrice() << "\n"; // Print the movie and the price
            }else if(movieOption==3){ // If the movie is 3
                totalPrice += rents[2]->getPrice(); // Add the price of the movie to the total price
                cout << "You have rented " << rents[2]->getName() << " for $ " << rents[2]->getPrice() << "\n"; // Print the movie and the price
            }else if(movieOption==4){ // If the movie is 4
                totalPrice += rents[3]->getPrice(); // Add the price of the movie to the total price
                cout << "You have rented " << rents[3]->getName() << " for $ " << rents[3]->getPrice() << "\n"; // Print the movie and the price
            }else if(movieOption==5){ // If the movie is 5
                totalPrice += rents[4]->getPrice(); // Add the price of the movie to the total price
                cout << "You have rented " << rents[4]->getName() << " for $ " << rents[4]->getPrice() << "\n"; // Print the movie and the price
            }else{ // If the movie is not 1, 2, 3, 4 or 5
                cout << "Invalid option" << endl; // Print an error message
                return 0; // Exit the program
            } // End of if-else statement
            // here will display the total price of the rent for all the movies the user has rented
            cout << "Total price: $ " << totalPrice << "\n"; // Print the total price
        } // End of for loop
    } //   
}
while(option !=0); // End of do-while loop
return 0; // Exit the program
} // End of main function

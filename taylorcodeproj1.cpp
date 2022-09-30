#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main () {

    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
    
    unsigned seed;
    seed = time(0);
    srand(seed);
    int roll_player1 = rand() % 20 + 1;
    int roll_player2 = rand() % 20 + 1;
    
    
    string player1,
        player2; 
    
    cout << "Enter a name for Player 1: \n";
    cin >> player1;
    cout << "Enter a name for Player 2: \n";
    cin >> player2;

    if (roll_player1 == 1) {
        SetConsoleTextAttribute (screen, 4);
        cout << player1 << " rolled a Critical Failure.\n";
    } else if (roll_player1 == 20) {
        SetConsoleTextAttribute (screen, 2); 
        cout << player1 << " rolled a Critical Success!\n";
    }

     if (roll_player2 == 1) {
         SetConsoleTextAttribute (screen, 4);
        cout << player2 << " rolled a Critical Failure.\n";
    } else if (roll_player2 == 20) {
        SetConsoleTextAttribute (screen, 2);
        cout << player2 << " rolled a Critical Success!\n";
    }

    SetConsoleTextAttribute (screen, 7); 

    cout << player1 << " rolled " << roll_player1 << ".\n";
    cout << player2 << " rolled " << roll_player2 << ".\n";

    if (roll_player1 > roll_player2) {
        cout << "\n" << player1 << " is the winner!\n";
    } else if (roll_player2 > roll_player1) {
        cout << "\n" << player2 << " is the winner!\n"; 
    } else {
        cout << "It's a tie! Both players were Evenly Matched.\n";
    }


    

}
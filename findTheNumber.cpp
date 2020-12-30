#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

// Little game where the user has to find the number randomly chosen by the computer - zero excluded.
// The user has three trials.
// Note that the upper bound is given by the value enter by the user.

int main(){

    int upperBound;
    int maxTrial;
    srand(time(0)); // Line that changes the random number chosen by the computer according to time.
    cout << "Please enter an upper bound for the range considered: " << endl;
    cin >> upperBound;
    cout << "Please enter the maximum amount of trials allowed: " << endl;
    cin >> maxTrial;
    int randomNumber = rand()%upperBound+1;
    int trials = 1;
    while(trials <= maxTrial){
        int number;
        cout << "Please enter a number: " << endl;
        cin >> number;
        if(number == randomNumber){
            cout << "You have won the game, congratulations!" << endl;
            break;
        }
        else{
            cout << "Try one more time." << endl;
            trials++;
        }
    }
    if(trials > maxTrial){
        cout << "You have lost the game and the computer has won!" << endl;
    }
    return 0;

}

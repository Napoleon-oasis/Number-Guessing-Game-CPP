#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    int user;
    int guess;
    int choice = 0;
    char input;
    bool again = false;
    bool running = false;

    cout << "----------------------------------------\n";
    cout << "--Welcome to The Number Guessing Game!--\n";
    cout << "----------------------------------------\n";
    do{
        srand(time(0));
        int random = rand() % 100 + 1;

    do{
        cout << "\nChoose a number between 1 and 100.\n";
        cout << "Please Select The Difficulty Level:\n";
        cout << "1. Easy (10 Chances)\n";
        cout << "2. Medium (5 Chances)\n";
        cout << "3. Hard (3 Chances)\n";
        cout << "Enter your choice: ";
        cin >> user;

        switch (user){
            case 1:
                cout << "\nGreat! You have selected the easy difficulty level.\n";
                cout << "You have 10 chances.\n";
                choice = 10;
                running = true;
                break;
            case 2:
                cout << "\nGreat! You have selected the medium difficulty level.\n";
                cout << "You have 5 chances.\n";
                choice = 5;
                running = true;
                break;
            case 3:
                cout << "\nGreat! You have selected the hard difficulty level.\n";
                cout << "You have 3 chances.\n";
                choice = 3;
                running = true;
                break;
            default:
                cout << "Invalid Choice!\n";
                break;
        }

    }while(running != true);

    while(choice != 0){
        cout << "\nAttempts remaining: " << choice << ".\n";
        cout << "Enter your guess: ";
        cin >> guess;
        choice--;
        if (guess == random){
            cout << "You Won!!\n";
            cout << "The Number is " << random << ".\n";
            break;
        }
        else if (guess > random){
            cout << "Incorrect! The number is less than " << guess << ".\n";
        }
        else{
            cout << "Incorrect! The number is greater than " << guess << ".\n";
        }
    }

    if (choice == 0){
        cout << "Game Over! You ran out of chances.\n";
        cout << "The correct number was " << random << ".\n";
    }

    cout << "Play Again? (Y/N): ";
    cin >> input;

    if(input == 'Y' || input == 'y'){
        again = true;
    }

    }while(again != false);

    return 0;
}
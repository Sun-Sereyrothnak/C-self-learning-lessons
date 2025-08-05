#include <iostream>

using namespace std;

int main()
{
    int secretNum =7;
    int guess;
    int guessCount =0;
    int guessLimit =3;
    int outOfGuess = false;

while(secretNum != guess && !outOfGuess){
    if(guessCount < guessLimit){
    cout << "Enter the guess: " ;
    cin >> guess;
    guessCount++;

    }else{
        outOfGuess = true;
    } 
}
    if(outOfGuess){
        cout << "You Lose!";
} else {
cout << "You Win!";
    }
    return 0;
}

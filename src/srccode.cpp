#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int guessNum(int num) {
    int guess;
    cout << "Hulaan mo yung number: ";
    cin >> guess;
    if(guess > num) cout << "Masyadong Mataas!\n";
    else if(guess < num) cout << "Masyadong Mababa!\n";
    return guess;
}

int main() {
    srand(time(0)); 
    int num = rand() % 100 + 1;
    int guess, tries = 0;
    do {
        guess = guessNum(num);
        tries++;
    } while(guess != num);
    cout << "Korek! Nahanap mo yung number " << tries << " ulit.\n";
    return 0;
}


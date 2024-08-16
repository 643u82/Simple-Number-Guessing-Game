#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1; // this line  Generates a random number between 1 and 100

    cout << "Number Guessing Game" << endl;

    do {
        cout << "Guess a number between 1-100: " << endl;
        cin >> guess;
        tries++;

        if (guess > num) {
            cout << "Guess Lower" << endl;
        } else if (guess < num) {
            cout << "Guess Higher" << endl;
        } else {
            cout << "CORRECT!! YOU WON: " << tries << " tries" << endl;
        }

    } while (guess != num);

    return 0;
}

#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

void Guess_gam(int gen) {
    int cnt = 0;  
    int guess;
    
    cout << "Guess a number between 1 and 100: ";
    cin >> guess;
    cnt++; 
    
    while (guess != gen) {
        if (guess > gen) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Too low! Try again." << endl;
        }
        cout << "Enter another guess: ";
        cin >> guess;
        cnt++;
    }
    
    cout << "CORRECT GUESS!" << endl;
    cout << "It took you " << cnt << " attempts." << endl;
}

int main() {
    
    srand(static_cast<unsigned int>(time(nullptr)));
    
    
    int gen_num = rand() % 100 + 1;
    

    Guess_gam(gen_num);

    return 0;
}

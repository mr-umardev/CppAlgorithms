#include <iostream>
#include <string>
using namespace std;

void printChuteState(const string& chute) {
    cout << endl;
    for (int i = 0; i < chute.size(); ++i) {
        if (i % 4 == 0 && i != 0)
            cout << endl;
        if (chute[i] == ' ')
            cout << " ";
        else
            cout << chute[i];
        cout << " ";
    }
    cout << endl;
}

void rollBlackBallsOut(string chute) {
    int n = chute.size();
    
    cout << "Initial chute state:" << endl;
    printChuteState(chute);
    
    if (chute == "WWWW") {
        cout << "Final chute state:" << endl;
        printChuteState(chute);
        return;
    }
    
    // Try moving a black ball into the niche
    for (int i = 0; i < n; ++i) {
        if (chute[i] == 'B') {
            string new_chute = chute;
            new_chute[i] = ' ';
            cout << "Move black ball from position " << i + 1 << " to niche:" << endl;
            printChuteState(new_chute);
            rollBlackBallsOut(new_chute);
        }
    }
    
    // Try rolling a black ball out of the chute (niche should have 'B')
    bool niche_has_black = false;
    for (int i = 0; i < 4; ++i) {
        if (chute[i] == ' ') {
            niche_has_black = true;
            break;
        }
    }
    if (niche_has_black) {
        for (int i = 4; i < n; ++i) {
            if (chute[i] == 'B') {
                string new_chute = chute;
                new_chute[i] = ' ';
                cout << "Move black ball from niche to position " << i + 1 - 4 << ":" << endl;
                printChuteState(new_chute);
                rollBlackBallsOut(new_chute);
            }
        }
    }
    
    // Try rolling a black ball from the niche back into the chute
    for (int i = 0; i < 4; ++i) {
        if (chute[i] == ' ') {
            for (int j = 4; j < n; ++j) {
                if (chute[j] == ' ') {
                    string new_chute = chute;
                    new_chute[i] = 'B';
                    new_chute[j] = ' ';
                    cout << "Move black ball from niche to position " << i + 1 << ":" << endl;
                    printChuteState(new_chute);
                    rollBlackBallsOut(new_chute);
                }
            }
        }
    }
}

int main() {
    string initial_chute = "BBBBWWWW";
    rollBlackBallsOut(initial_chute);
    return 0;
}

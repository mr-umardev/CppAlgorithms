#include <iostream>
#include <vector>

using namespace std;

// Function to print the current state of the chute in a 4x4 table
void printChuteTable(const vector<char>& chute) {
    int n = chute.size();
    int rows = 2; // Assuming 4 balls on each side
    int cols = n / rows;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int idx = i * cols + j;
            cout << chute[idx] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

// Backtracking approach to solve the problem
bool backtracking(vector<char>& chute, int index) {
    if (index >= chute.size()) {
        // Check if final state is reached
        bool finalStateReached = true;
        for (int i = 0; i < chute.size(); ++i) {
            if (i < 4 && chute[i] != 'W') {
                finalStateReached = false;
                break;
            }
            if (i >= 4 && chute[i] != 'B') {
                finalStateReached = false;
                break;
            }
        }
        if (finalStateReached) {
            // Print final state of the chute in a table format
            printChuteTable(chute);
            return true; // Found a valid solution
        }
        return false; // Not the desired final state, continue exploring
    }

    bool foundSolution = false;

    if (chute[index] == 'B') {
        // Try moving 'B' to the rightmost possible position
        for (int i = chute.size() - 1; i > index; --i) {
            if (chute[i] == 'W') {
                swap(chute[index], chute[i]);
                // Recursively move to the next index
                if (backtracking(chute, index + 1)) {
                    foundSolution = true; // Solution found, stop further exploration
                }
                swap(chute[index], chute[i]); // Backtrack
                // Stop further exploration if desired state reached
                if (foundSolution && i == index + 1) {
                    return true;
                }
            }
        }
    }

    // Continue recursion without swapping 'W' or moving 'B'
    if (!foundSolution) {
        backtracking(chute, index + 1);
    }

    return foundSolution;
}

int main() {
    // Initialize chute with 4 black balls followed by 4 white balls
    vector<char> chute = {'B', 'B', 'B', 'B', 'W', 'W', 'W', 'W'};

    cout << "Initial chute state:" << endl;
    printChuteTable(chute);

    // Call backtracking function starting from index 0
    backtracking(chute, 0);

    return 0;
}

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

// Function to split the string by space and return a vector of strings
vector<string> split(const string &str) {
    vector<string> tokens;
    stringstream ss(str);
    string token;
    while (ss >> token) {
        tokens.push_back(token);
    }
    return tokens;
}

// Function to print the current state and chute
void printState(const vector<string>& state, const string& chute) {
    for (const auto& item : state) {
        cout << item << " ";
    }
    cout << " | Chute: " << (chute.empty() ? "Empty" : chute) << endl;
}

// Function to check if the goal state is reached
bool isGoal(const vector<string>& state) {
    return state == vector<string>{"W", "W", "W", "W", "B", "B", "B", "B"};
}

// Branch and bound algorithm to shift 'B' to the end
void branchAndBoundShiftBToEnd(vector<string> input) {
    int n = input.size();
    string chute = "";

    while (!isGoal(input)) {
        printState(input, chute);

        if (chute.empty()) {
            for (int i = 0; i < n; ++i) {
                if (input[i] == "B") {
                    chute = "B";
                    for (int j = i; j < n - 1; ++j) {
                        input[j] = input[j + 1];
                    }
                    input[n - 1] = "";
                    break;
                }
            }
        } else {
            input[n - 1] = chute;
            chute = "";
        }
    }

    printState(input, chute);
    cout << "Goal state reached!" << endl;
}

int main() {
    string inputStr = "B B B B W W W W";
    vector<string> input = split(inputStr);

    branchAndBoundShiftBToEnd(input);

    return 0;
}

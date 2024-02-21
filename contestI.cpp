#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    int K;
    if (inputFile) {
        inputFile >> K;
    }
    else {
        cin >> K;
    }

    int dayOfWeek = (3 + K - 2) % 7;

    if (outputFile) {
        outputFile << dayOfWeek;
    }
    else {
        cout << dayOfWeek;
    }

    return 0;
}
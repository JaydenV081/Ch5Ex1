/*
Developer: Jayden Veloz
File Name: Ch5Ex1.cpp
Date: 10 / 23 / 26

Requirements:
Write a program that uses a loop to display the characters for each ASCII code
32 through 127. Display 16 characters on each line with one space between characters.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int count = 0;

    // Turns number into ASCII characters
    for (int i = 32; i <= 127; i++) {
        cout << char(i) << " ";
        count++;

        // Keeps 16 characters in a row
        if ((count%16) == 0) {
            cout << "\n";
        }
    }

    return 0;
}

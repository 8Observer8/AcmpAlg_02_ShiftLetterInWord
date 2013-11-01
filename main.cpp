/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on September 9, 2013, 11:23 AM
 */

#include <string>
#include <iostream>
using namespace std;

/**
 * Rearrange the letters in a word (rotate right)
 * 
 * @param str The input string
 * @return The Shifting string
 */
string shiftStringInRight(string str) {
    string substr = str.substr(0, str.length()-1);
    return str[str.length()-1] + substr;
}

int main(int argc, char** argv) {
    string s;
    cin >> s;
    s = shiftStringInRight(s);
    cout << s << endl;
    return 0;
}


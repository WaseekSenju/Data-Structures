

#include <iostream>
#include <string>
using namespace std;

string alphabet = "abcdefghijklmnopqrstuvwxyz";
string key = "3433335354454532235524325";
    
string encrypt (string s)
{
    string encrypted_string  = "";
    for (int i = 0; i < 6; i++)
    {
        int index_of_letter = alphabet[s[i]];
        encrypted_string += alphabet[(index_of_letter + key[index_of_letter]) % 26];
    }
    return encrypted_string;
}
int main()
{

    cout << encrypt("twenty");
}

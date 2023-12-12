/*
#include <iostream>
#include <cctype>
using namespace std;

void count(const char s[], int counts[]) 
{
    for (int i = 0; s[i] != '\0'; i++) 
    {
        char t = tolower(s[i]);
        if (t >= 'a' && t <= 'z') {
            counts[t - 'a']++;
        }
    }
}

int main() {
    int counts[26] = { 0 };
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);
    count(input, counts);
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            char letter = 'a' + i;
            cout << letter << ": " << counts[i] << std::endl;
        }
    }
    return 0;
}
*/

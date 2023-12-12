/*
#include <iostream>
#include <cstring>
using namespace std;

int indexOf(const char s1[], const char s2[])
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i < len2; i++)
    {
        int j;
        for (j = 0; j < len1; j++)
        {
            if (s2[i + j] != s1[j])
            {
                break;
            }
        }
        if (j == len1)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char s1[1000], s2[1000];
    cout << "Enter the first string: ";
    cin.getline(s1, 1000);
    cout << "Enter the second string: ";
    cin.getline(s2, 1000);
    cout << "indexOf("<<s1<<", "<<s2<<") is "<<indexOf(s1, s2);
    return 0;
}
*/
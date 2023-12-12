/*
#include <iostream>
using namespace std;

bool is_prime(int num) {
    if (num <= 1) {
        return false; 
    }
    for (int i = 2; i <num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int number = 0;
    for (int j = 1; 1; j++)
    {
        if (is_prime(j)) 
        {
            cout << j << "\t";
            number++;
            if (number % 10 == 0)
                cout << endl;
        }
        if (number == 200) break;
    }
    return 0;
}
*/
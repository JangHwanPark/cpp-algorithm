#include <bits/stdc++.h>
using namespace std;

int main () {
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j >= 1; j--) {
            cout << " ";
        }
        cout << "*";
        cout << "\n";
    }
    return 0;
}
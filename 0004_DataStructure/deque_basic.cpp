#include <bits/stdc++.h>
using namespace std;
const int MX = 1000005;
int dat [2 * MX + 1];
int head = MX, tail = MX;

void push_front(int x){
    dat[--head] = x;
}

void push_back(int x){
    dat[tail++] = x;
}

void pop_front(){
    head++;
}

void pop_back(){
    tail--;
}

int front(){
    return dat[head];
}

int back(){
    return dat[tail - 1];
}

int main (void) {
    push_back(30); // 30
    cout << front() << ' ' << head << ' '<< tail << '\n'; // 30
    cout << back() << ' ' << head << ' '<< tail << '\n'; // 30

    push_front(25); // 25 30
    push_back(12); // 25 30 12
    cout << back() << ' ' << head << ' '<< tail << '\n'; // 12

    push_back(62); // 25 30 12 62
    pop_front(); // 30 12 62
    cout << front() << ' ' << head << ' '<< tail << '\n'; // 30

    pop_front(); // 12 62
    cout << back() << ' ' << head << ' '<< tail << '\n'; // 62
}
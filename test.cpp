#include<iostream>
#include "doubly_linked_deque.h"
#include<string>

using namespace std;

int main() {
    LinkedDeque<int> a;
    a.insertFront(5);
    cout << a.front() << endl;
    a.insertFront(10);
    cout << a.front() << endl;
    cout << a.back() << endl;
    return 0;
}
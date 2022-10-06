#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> items{1, 2, 3, 4, 5};
    cout << "Items bf modification" << endl;

    for (int item : items) {
        cout << item << " ";
    }

    for (int &itemRef : items) {
        itemRef *= 2;
    }

    cout << endl;
    cout << "Items after modification" << endl;
    for (int item : items) {
        cout << item << " ";
    }

    cout << endl;

}
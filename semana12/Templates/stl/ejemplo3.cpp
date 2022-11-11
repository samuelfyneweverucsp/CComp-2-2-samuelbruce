#include <iostream>
#include <algorithm>

using namespace std;

void printArray(const int arr[], const int len) {
    for(int i = 0; i < len; i++) {
        cout << " " << arr[i];

    }
    cout << endl;
}

int main () {
    int a[] = {5, 7, 23, 8, 4, 6, 3};

    sort(a, a+7); // lo enviamos dos PUNTEROS, uno al principio del arreglo (a), otro al FIN del mismo arreglo (a+7)
    printArray(a, 7);
    rotate(a, a+3, a+7);
    printArray(a, 7);
    reverse(a, a+7);
    printArray(a, 7);

    return 0;
}
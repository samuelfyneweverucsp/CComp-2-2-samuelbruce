#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    set<int> iset;
    iset.insert(5);
    iset.insert(3);
    iset.insert(2);
    iset.insert(7);
    iset.insert(10);
    iset.insert(1);
    iset.insert(0);
    iset.insert(9);
    iset.insert(11);
    cout << "iset contains:";

    set<int>::iterator it;
    for(it = iset.begin(); it != iset.end(); it++) {
        cout << " " << *it;
    }
    cout << endl;

    cout << "Enter an integer to search iset for it: ";

    int searchFor;
    cin >> searchFor;

    if(binary_search(iset.begin(), iset.end(), searchFor)) {
        cout << "Found that integer";
    } else {cout << "Didn't find that integer";}

    return 0;
}
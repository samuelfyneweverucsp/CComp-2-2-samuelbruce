#include <iostream>

using namespace std;

template <typename T, typename U>
U sum(const T a, const U b) {
    return a + b;
}

/*
int sum(const int x, const int y) {
    return x + y;
}

double sum(const double x, const double y) {
    return x + y;
}
*/

int main() {
    cout << sum<int, float>(4,5) << endl;
    cout << sum<float, int>(4.5, 5.8) << endl;

    cout << sum<string, string>("feliz ", "cumple") << endl;

    return 0;
}




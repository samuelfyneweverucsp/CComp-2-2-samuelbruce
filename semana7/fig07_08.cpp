#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>

using namespace std;

int main() {
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1, 6);

    const size_t arraySize{7};
    array<unsigned int, arraySize> frequency{};

    for(unsigned int roll{1}; roll <= 60'000'000; roll++) {
        frequency[randomInt(engine)]++;
    }

    cout << "Face" << setw(11) << "Frequency" << endl;

    for(size_t face{1}; face < frequency.size(); face++) {
        cout << setw(7) << face << setw(10) << frequency[face] << endl;
    }

}
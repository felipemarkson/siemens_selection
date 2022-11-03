#include <iostream>

#include "Helpers.hpp"
using namespace std;

int main() {
    cout << "Ex4: ";
    string s = "abc";
    string t = "def";
    cout << Ex4::ConcatERemove(s, t, 6) << endl;
}

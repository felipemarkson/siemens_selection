#include <iostream>
#include "Helpers.hpp"
using namespace std;

int main() {
    string msg;
    cout << "Ex10: Digite algo..." << endl;
    std::cin >> msg;
    cout << Ex10::countStr(msg) << endl;
}

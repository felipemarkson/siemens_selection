#include <iostream>
#include "Helpers.hpp"
using namespace std;
using std::string;

int main() {
    string msg;
    cout << "Ex11: Digite algo..." << endl;
    cin >> msg;
    cin.get();
    msg = trim(msg);
    Ex11::reverseStr(msg);
    cout << msg << endl;
}

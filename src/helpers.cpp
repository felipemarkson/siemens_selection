#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::string;
const std::string WHITESPACE = " \n\r\t\f\v";

string trim(string s) {
    while (!s.empty() && isspace(s.back())) s.pop_back();    // back
    while (!s.empty() && isspace(s.front())) s.erase(0, 1);  // front
    return s;
}

namespace Ex3 {
string foobaa(int i) {
    if (i % (3 * 5) == 0) {
        return "FooBaa";
    } else if (i % 3 == 0) {
        return "Foo";
    } else if (i % 5 == 0) {
        return "Baa";
    }

    return to_string(i);
}
}  // namespace Ex3

namespace Ex4 {
string ConcatERemove(string s, string t, int k) {
    string positive = "yes";
    string negative = "no";

    if (s == t) {
        return positive;
    }

    auto operations = (s.length() > t.length()) ? s.length() - t.length() : t.length() - s.length();
    if (operations > k) {
        return negative;
    }

    string* small = (s.length() < t.length()) ? &s : &t;
    int indx_init = (*small).length() - 1;

    for (auto i = indx_init; i >= 0; i--) {
        if (s[i] != t[i]) {
            operations += 2;
        }
        if (operations > k) {
            return negative;
        }
    }
    return positive;
}

}  // namespace Ex4

namespace Ex10 {
int countStr(string msg) {
    int count = 0;
    msg = trim(msg);

    for (auto c : msg) {
        count += 1;
    }

    return count;
}
}  // namespace Ex10

namespace Ex11 {

void reverseStr(string& msg, int n, int i) {
    if (n <= i) {
        return;
    }
    swap(msg[i], msg[n]);
    reverseStr(msg, n - 1, i + 1);
}

void reverseStr(string& msg) {
    reverseStr(msg, msg.length() - 1, 0);
}

}  // namespace Ex11
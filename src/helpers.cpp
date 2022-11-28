#include <iostream>
#include <vector>
#include <string>
using namespace std;
using std::string;

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
#include <gtest/gtest.h>

#include "../src/Helpers.hpp"

string positive = "yes";
string negative = "no";

// Test Ex3
TEST(Ex3, Mutiple3Only) {
    EXPECT_EQ(Ex3::foobaa(3), "Foo");
    EXPECT_EQ(Ex3::foobaa(9), "Foo");
    EXPECT_EQ(Ex3::foobaa(33), "Foo");
}
TEST(Ex3, Mutiple5Only) {
    EXPECT_EQ(Ex3::foobaa(5), "Baa");
    EXPECT_EQ(Ex3::foobaa(10), "Baa");
    EXPECT_EQ(Ex3::foobaa(50), "Baa");
}

TEST(Ex3, Mutiple3And5) {
    EXPECT_EQ(Ex3::foobaa(15), "FooBaa");
    EXPECT_EQ(Ex3::foobaa(30), "FooBaa");
    EXPECT_EQ(Ex3::foobaa(90), "FooBaa");
}

TEST(Ex3, NotMutiple3Or5) {
    EXPECT_EQ(Ex3::foobaa(1), "1");
    EXPECT_EQ(Ex3::foobaa(2), "2");
    EXPECT_EQ(Ex3::foobaa(4), "4");
    EXPECT_EQ(Ex3::foobaa(11), "11");
    EXPECT_EQ(Ex3::foobaa(77), "77");
}

// Test Ex4
TEST(Ex4, SameSize) {
    EXPECT_EQ(Ex4::ConcatERemove("a", "a", 1), positive);
    EXPECT_EQ(Ex4::ConcatERemove("a", "b", 1), negative);
    EXPECT_EQ(Ex4::ConcatERemove("a", "b", 2), positive);
    EXPECT_EQ(Ex4::ConcatERemove("aba", "aba", 1), positive);
    EXPECT_EQ(Ex4::ConcatERemove("baa", "aba", 2), negative);
    EXPECT_EQ(Ex4::ConcatERemove("baa", "aba", 6), positive);
    EXPECT_EQ(Ex4::ConcatERemove("jkashkha", "iuewyrpp", 8), negative);
    EXPECT_EQ(Ex4::ConcatERemove("jkashkha", "iuewyrpp", 16), positive);
}

TEST(Ex4, sBiggerThant) {
    EXPECT_EQ(Ex4::ConcatERemove("ab", "a", 1), positive);
    EXPECT_EQ(Ex4::ConcatERemove("ac", "b", 1), negative);
    EXPECT_EQ(Ex4::ConcatERemove("ac", "b", 2), negative);
    EXPECT_EQ(Ex4::ConcatERemove("ac", "b", 3), positive);
    EXPECT_EQ(Ex4::ConcatERemove("ashley", "ash", 1), negative);
    EXPECT_EQ(Ex4::ConcatERemove("ashley", "ash", 2), negative);
    EXPECT_EQ(Ex4::ConcatERemove("ashley", "ash", 3), positive);
    EXPECT_EQ(Ex4::ConcatERemove("blablablabla", "blablabcde", 1), negative);
    EXPECT_EQ(Ex4::ConcatERemove("blablablabla", "blablabcde", 2), negative);
    EXPECT_EQ(Ex4::ConcatERemove("blablablabla", "blablabcde", 3), negative);
    EXPECT_EQ(Ex4::ConcatERemove("blablablabla", "blablabcde", 4), negative);
    EXPECT_EQ(Ex4::ConcatERemove("blablablabla", "blablabcde", 5), negative);
    EXPECT_EQ(Ex4::ConcatERemove("blablablabla", "blablabcde", 6), negative);
    EXPECT_EQ(Ex4::ConcatERemove("blablablabla", "blablabcde", 7), negative);
    EXPECT_EQ(Ex4::ConcatERemove("blablablabla", "blablabcde", 8), positive);
}

TEST(Ex4, sSmallerThant) {
    EXPECT_EQ(Ex4::ConcatERemove("a", "ab", 1), positive);
    EXPECT_EQ(Ex4::ConcatERemove("b", "ac", 1), negative);
    EXPECT_EQ(Ex4::ConcatERemove("b", "ac", 2), negative);
    EXPECT_EQ(Ex4::ConcatERemove("b", "ac", 3), positive);
    EXPECT_EQ(Ex4::ConcatERemove("ash", "ashley", 1), negative);
    EXPECT_EQ(Ex4::ConcatERemove("ash", "ashley", 2), negative);
    EXPECT_EQ(Ex4::ConcatERemove("ash", "ashley", 3), positive);
    EXPECT_EQ(Ex4::ConcatERemove("blablabcde", "blablablabla", 1), negative);
    EXPECT_EQ(Ex4::ConcatERemove("blablabcde", "blablablabla", 2), negative);
    EXPECT_EQ(Ex4::ConcatERemove("blablabcde", "blablablabla", 3), negative);
    EXPECT_EQ(Ex4::ConcatERemove("blablabcde", "blablablabla", 4), negative);
    EXPECT_EQ(Ex4::ConcatERemove("blablabcde", "blablablabla", 5), negative);
    EXPECT_EQ(Ex4::ConcatERemove("blablabcde", "blablablabla", 6), negative);
    EXPECT_EQ(Ex4::ConcatERemove("blablabcde", "blablablabla", 7), negative);
    EXPECT_EQ(Ex4::ConcatERemove("blablabcde", "blablablabla", 8), positive);
}

// Test Ex10
TEST(Ex10, countString) {
    EXPECT_EQ(Ex10::countStr("\n"), 0);
    EXPECT_EQ(Ex10::countStr(""), 0);
    EXPECT_EQ(Ex10::countStr("1"), 1);
    EXPECT_EQ(Ex10::countStr("2"), 1);
    EXPECT_EQ(Ex10::countStr("12"), 2);
    EXPECT_EQ(Ex10::countStr("\t12"), 2);
    EXPECT_EQ(Ex10::countStr("\n12"), 2);
    EXPECT_EQ(Ex10::countStr("\n12\t"), 2);
    EXPECT_EQ(Ex10::countStr("\t12\n"), 2);
    EXPECT_EQ(Ex10::countStr("abc"), 3);
    EXPECT_EQ(Ex10::countStr("1234"), 4);
    EXPECT_EQ(Ex10::countStr("cba"), 3);
    EXPECT_EQ(Ex10::countStr("tests is awesome\n"), 16);

}



// Test Ex11
TEST(Ex11, reverseString) {
    string msg;
    
    msg = "\n";
    Ex11::reverseStr(msg);
    EXPECT_EQ(msg, "\n");

    msg = "1";
    Ex11::reverseStr(msg);
    EXPECT_EQ(msg, "1");

    msg = "12";
    Ex11::reverseStr(msg);
    EXPECT_EQ(msg, "21");

    msg = "123";
    Ex11::reverseStr(msg);
    EXPECT_EQ(msg, "321");

    msg = "abc";
    Ex11::reverseStr(msg);
    EXPECT_EQ(msg, "cba");

    msg = "abcd";
    Ex11::reverseStr(msg);
    EXPECT_EQ(msg, "dcba");

    msg = "abad";
    Ex11::reverseStr(msg);
    EXPECT_EQ(msg, "daba");

    msg = "aba";
    Ex11::reverseStr(msg);
    EXPECT_EQ(msg, "aba");

    msg = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam a arcu a metus vehicula ultrices sed non justo. Pellentesque consequat hendrerit auctor. Integer arcu eros, tristique consectetur dui et, pulvinar posuere nibh. Maecenas laoreet ipsum sed sapien consequat rutrum. Etiam dolor elit, lacinia vitae quam gravida, condimentum bibendum erat. Donec mattis, erat auctor condimentum tincidunt, nisi risus dignissim dolor, in facilisis sapien quam pretium sem. Cras feugiat dui eget scelerisque vehicula. Integer lorem diam, egestas vel imperdiet quis, euismod nec quam.";
    string reverse_msg = ".mauq cen domsiue ,siuq teidrepmi lev satsege ,maid merol regetnI .alucihev euqsirelecs tege iud taiguef sarC .mes muiterp mauq neipas sisilicaf ni ,rolod missingid susir isin ,tnudicnit mutnemidnoc rotcua tare ,sittam cenoD .tare mudnebib mutnemidnoc ,adivarg mauq eativ ainical ,tile rolod maitE .murtur tauqesnoc neipas des muspi teeroal saneceaM .hbin ereusop ranivlup ,te iud rutetcesnoc euqitsirt ,sore ucra regetnI .rotcua tirerdneh tauqesnoc euqsetnelleP .otsuj non des secirtlu alucihev sutem a ucra a maN .tile gnicsipida rutetcesnoc ,tema tis rolod muspi meroL";
    Ex11::reverseStr(msg);
    EXPECT_EQ(msg, reverse_msg);

}

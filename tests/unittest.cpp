#include <gtest/gtest.h>

#include "../src/Helpers.hpp"

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
    EXPECT_EQ(Ex4::ConcatERemove("a", "a", 1), "sim");
    EXPECT_EQ(Ex4::ConcatERemove("a", "b", 1), "não");
    EXPECT_EQ(Ex4::ConcatERemove("a", "b", 2), "sim");
    EXPECT_EQ(Ex4::ConcatERemove("aba", "aba", 1), "sim");
    EXPECT_EQ(Ex4::ConcatERemove("baa", "aba", 2), "não");
    EXPECT_EQ(Ex4::ConcatERemove("baa", "aba", 6), "sim");
    EXPECT_EQ(Ex4::ConcatERemove("jkashkha", "iuewyrpp", 8), "não");
    EXPECT_EQ(Ex4::ConcatERemove("jkashkha", "iuewyrpp", 16), "sim");
}

TEST(Ex4, sBiggerThant) {
    EXPECT_EQ(Ex4::ConcatERemove("ab", "a", 1), "sim");
    EXPECT_EQ(Ex4::ConcatERemove("ac", "b", 1), "não");
    EXPECT_EQ(Ex4::ConcatERemove("ac", "b", 2), "não");
    EXPECT_EQ(Ex4::ConcatERemove("ac", "b", 3), "sim");
    EXPECT_EQ(Ex4::ConcatERemove("ashley", "ash", 1), "não");
    EXPECT_EQ(Ex4::ConcatERemove("ashley", "ash", 2), "não");
    EXPECT_EQ(Ex4::ConcatERemove("ashley", "ash", 3), "sim");
    EXPECT_EQ(Ex4::ConcatERemove("blablablabla", "blablabcde", 1), "não");
    EXPECT_EQ(Ex4::ConcatERemove("blablablabla", "blablabcde", 2), "não");
    EXPECT_EQ(Ex4::ConcatERemove("blablablabla", "blablabcde", 3), "não");
    EXPECT_EQ(Ex4::ConcatERemove("blablablabla", "blablabcde", 4), "não");
    EXPECT_EQ(Ex4::ConcatERemove("blablablabla", "blablabcde", 5), "não");
    EXPECT_EQ(Ex4::ConcatERemove("blablablabla", "blablabcde", 6), "não");
    EXPECT_EQ(Ex4::ConcatERemove("blablablabla", "blablabcde", 7), "não");
    EXPECT_EQ(Ex4::ConcatERemove("blablablabla", "blablabcde", 8), "sim");
}

TEST(Ex4, sSmallerThant) {
    EXPECT_EQ(Ex4::ConcatERemove("a", "ab", 1), "sim");
    EXPECT_EQ(Ex4::ConcatERemove("b", "ac", 1), "não");
    EXPECT_EQ(Ex4::ConcatERemove("b", "ac", 2), "não");
    EXPECT_EQ(Ex4::ConcatERemove("b", "ac", 3), "sim");
    EXPECT_EQ(Ex4::ConcatERemove("ash", "ashley", 1), "não");
    EXPECT_EQ(Ex4::ConcatERemove("ash", "ashley", 2), "não");
    EXPECT_EQ(Ex4::ConcatERemove("ash", "ashley", 3), "sim");
    EXPECT_EQ(Ex4::ConcatERemove("blablabcde", "blablablabla", 1), "não");
    EXPECT_EQ(Ex4::ConcatERemove("blablabcde", "blablablabla", 2), "não");
    EXPECT_EQ(Ex4::ConcatERemove("blablabcde", "blablablabla", 3), "não");
    EXPECT_EQ(Ex4::ConcatERemove("blablabcde", "blablablabla", 4), "não");
    EXPECT_EQ(Ex4::ConcatERemove("blablabcde", "blablablabla", 5), "não");
    EXPECT_EQ(Ex4::ConcatERemove("blablabcde", "blablablabla", 6), "não");
    EXPECT_EQ(Ex4::ConcatERemove("blablabcde", "blablablabla", 7), "não");
    EXPECT_EQ(Ex4::ConcatERemove("blablabcde", "blablablabla", 8), "sim");
}
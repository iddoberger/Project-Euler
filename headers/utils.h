//Utils.h
//Contains helpful functions
//By: Mark Guerra

#ifndef UTILS_H
#define UTILS_H

#include <sstream>
#include <vector>
#include <algorithm>
#include <chrono>


namespace utils {

    //bool contains(const C &v, const T &x)
    //Parameters:
    //  v: a container of some sort
    //  x: the value being checked
    //Returns:
    //  true if the container v contains x, otherwise false
    template <class C, class T>
    bool contains(const C &v, const T &x) {
        return std::end(v) != std::find(std::begin(v), std::end(v), x);
    }


    //bool isPrime(int num)
    //Parameters:
    //  num: the number being checked
    //Returns:
    //  true if num is prime, otherwise false
    bool isPrime(int num);

    //vector<string> split(string str, char c)
    //Parameters:
    //  str: the string being split
    //  c: the delimiting character
    //Returns:
    //  a vector containing each of the split strings
    std::vector<std::string> split(std::string str, char c);

    //std::string ltrim(std::string str, char c)
    //  Params:
    //    str: the string being trimmed
    //    c: the character being trimmed
    //  Returns:
    //    The trimmed string
    std::string ltrim(std::string str, char c);

    //int numDigits(int num)
    //  Params:
    //    num: the number we are finding the length of
    //  Returns:
    //    The number of digits
    int numDigits(int num);

    //void replace(std::string &str, std::string seq, std::string newstr)
    //  Params:
    //    str: a reference to the string being changed
    //    seq: the sequence being replaced
    //    newstr: the string to replace seq with
    //  Returns:
    //    None
    void replace(std::string &str, std::string seq, std::string newstr);

    //std::string toString(long long num)
    //  Params:
    //    num: the number being converted into a string
    //  Returns:
    //    The number as a string
    std::string toString(long long num);
}

#endif

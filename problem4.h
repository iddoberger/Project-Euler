#ifndef PROBLEM_4_H
#define PROBLEM_4_H

#include <sstream>
#include <algorithm>
#include <vector>
#include <iostream>

//A palindromic number reads the same both ways. The largest palindrome made from the product
//of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.

namespace problem4 {

    bool isPalindrome(int num) {
        int tmp = num;
        int sum = 0;
        int r;
        while (tmp) {
            r = tmp % 10;
            tmp = tmp / 10;
            sum = sum * 10 + r;
        }
        return num == sum;
    }

    int getLargestPalindrome() {

        std::vector<int> list;
        const int x1 = 999;
        const int x2 = 999;
        for (int i = x1; i > 99; i--) {
            for (int j = x2; j > 99; j--) {
                if (isPalindrome(i * j)) {
                    list.push_back(i * j);
                }
            }
        }

        return list[std::distance(list.begin(), max_element(std::begin(list), std::end(list)))];
    }

    int getAnswer() {
        return getLargestPalindrome();
    }

}

#endif

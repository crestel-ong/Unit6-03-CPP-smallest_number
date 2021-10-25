// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: October 2021
// this is the smallest number program in c++
// finds the smallest number out of 10 randomly generated numbers and prints it
// this program uses arrays as parameter

#include <iostream>
#include <random>
#include <array>

// declare the array as a parameter in a function (2 first lines of code)
template<size_t N>
int SmallestNumber(std::array<int, N> randomNumberList) {
    // this function finds the biggest number in the list
    // aka finds the min number

    // declaring
    int smallNumber = randomNumberList[1];

    for (int loopCounter = 0; loopCounter < randomNumberList.size();
    loopCounter++) {
        if (randomNumberList[loopCounter] < smallNumber) {
            smallNumber = randomNumberList[loopCounter];
    }
}
    return smallNumber;
}

int main() {
    // this function uses a list
    // this function gets generates random number

    // declaring
    // pass an array into this function as a parameter
    std::array<int, 10> numberList;
    int randomSingleNumber;
    int minNumber;

    std::cout << "Here is a list of 10 randomly generated numbers : \n"
    << std::endl;

    // this gets the random numbers
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 100);

    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        randomSingleNumber = idist(rgen);  // putting the random gen # into var
        // putting this new random gen # into array
        numberList[loopCounter] = randomSingleNumber;
        std::cout << "Random number " << loopCounter + 1 << " is: "
        << numberList[loopCounter] << std::endl;
    }
    minNumber = SmallestNumber(numberList);
    std::cout << "\nThe smallest number is " << minNumber << "."
    << std::endl;

    std::cout << "\nDone." << std::endl;
}

//
// main.cpp
// BitKit
//
// Created by errmsg on Mon Mar 28 13:10:52 EEST 2016
// Copyright © Polizom Inc. All rights reserved.
//

#include <iostream>

#include "BitKit.hpp"

int main(int argc, char * argv[]) {

    int num = 10;
    std::cout << "Number " << num << " binary representation" << std::endl;
    BitKit<int>::printBinary(num);

    std::cout << "Setting " << 10 <<  " bit of" << std::endl;
    BitKit<int>::bitSet(&num, 10);
    BitKit<int>::printBinary(num);

    std::cout << "Clearing " << 25 <<  " bit" << std::endl;
    BitKit<int>::bitClear(&num, 25);
    BitKit<int>::printBinary(num);

    std::cout << "Toggling " << 12 <<  " bit" <<  std::endl;
    BitKit<int>::bitToggle(&num, 12);
    BitKit<int>::printBinary(num);

    std::cout << "Checking second" <<  " bit" <<  std::endl;
    std::cout << BitKit<int>::bitCheck(&num, 2) << std::endl;

    std::cout << "Changing " << 15 <<  " bit to " << 1 <<  std::endl;
    BitKit<int>::bitChange(&num, 15, 1);
    BitKit<int>::printBinary(num);

    std::cout << "Changing " << 15 <<  " bit to " << 0 <<  std::endl;
    BitKit<int>::bitChange(&num, 15, 0);
    BitKit<int>::printBinary(num);

    return 0;
}

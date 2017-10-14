//
//  main.cpp
//  C++ Binary
//
//  Created by Lucas Brito on 8/19/17.
//  Copyright © 2017 Lucas Brito. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void numToBin(unsigned int n,unsigned int size) {
    vector<int> bin;
    //Convert decimal to binary
    while (n >= 1) {
        if (n % 2 == 0)
            bin.insert(bin.begin(), 0);
        else
            bin.insert(bin.begin(), 1);
       n = n/2;
    }
    //Fill if necessary
    for (auto i = bin.size(); i != size; i++)
        bin.insert(bin.begin(), 0);
    //Print
    int count = 0;
    for (int bit: bin) {
        if (count == bin.size()-size){
            cout << "--" << size << "bits" << "--";
        }
        cout << bit;
        count++;
    }
}

int main() {
    numToBin(9,8);
}

//
//  main.cpp
//  bubble
//
//  Created by Lucas Brito on 9/24/17.
//  Copyright © 2017 Lucas Brito. All rights reserved.
//

#include <iostream>
#include <vector>

int main() 
{
    std::vector<int> data = {1,3,1,6,7,10,23,4};
    bool isSorted = true;
    while (isSorted) {
        isSorted = false;
        for (int j = 0; j < data.size() - 1; j++) {
            if (data[j]>data[j+1]){
                int swap;
                swap = data[j];
                data[j] = data[j+1];
                data[j+1] = swap;
                isSorted = true;
            }
        }
    }
}

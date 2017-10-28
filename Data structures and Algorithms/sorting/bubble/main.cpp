//
//  main.cpp
//  bubble
//
//  Created by Lucas Brito on 9/24/17.
//  Copyright © 2017 Lucas Brito. All rights reserved.
//

#include <iostream>
#include <vector>

int main() {
    std::vector<int> data = {1,3,1,6,7,10,23,4};
    
    for (int i = 0; i < data.size(); i++) {
		bool isSorted = false;
		for (int j = 0; j < data.size()-i-1; j++) {
			if (data[j] > data[j + 1]) {
				swap = data[j];
				data[j] = data[j + 1];
				data[j + 1] = swap;
				isSorted = true;
			}
		}
		if (!(isSorted))
			break;
	}
}

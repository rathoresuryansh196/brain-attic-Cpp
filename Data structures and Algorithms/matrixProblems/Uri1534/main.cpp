//
//  main.cpp
//  uri1534
//
//  Created by Lucas Brito on 2/24/18.
//  Copyright © 2018 Lucas Brito. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int ordemDaMatrix;
    while( scanf("%d",&ordemDaMatrix) != EOF ) {
        int** matrix123 = new int*[ordemDaMatrix];
        for(int i = 0; i < ordemDaMatrix; ++i)
            matrix123[i] = new int[ordemDaMatrix];
        
        for(int i = 0; i < ordemDaMatrix; i++) {
            for(int j = 0; j < ordemDaMatrix; j++) {
                matrix123[i][j] = 3;
                matrix123[i][i] = 1;
                matrix123[i][ordemDaMatrix-i-1] = 2;
            }
        }
        for(short i = 0; i < ordemDaMatrix; i++) {
            for(short j = 0; j < ordemDaMatrix; j++){
                cout << matrix123[i][j];
            }
            cout << '\n';
        }
        for(short i = 0; i < ordemDaMatrix; i++) {
            delete [] matrix123[i];
            matrix123[i] = nullptr;
        }
        delete [] matrix123;
        matrix123 = nullptr;
    }
}

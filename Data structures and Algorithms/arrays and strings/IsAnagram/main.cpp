//
//  main.cpp
//  IsAnagram
//
//  Created by Lucas Brito on 9/30/17.
//  Copyright © 2017 Lucas Brito. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;
void IsAnagram() {
    string word1 = "salt", word2 = "last";
    int count = 0;
    
    cout << "First word: ";
    getline(cin, word1);
    cout << "Second word: ";
    getline(cin, word2);
    
    if (word1.length() == word2.length()) {        
        for (int i = 0 ; i < word1.length(); i++) {
            for (int j = 0; j < word1.length(); j++) {
                if (word1[i] == word2[j]) {
                    word2.erase(word2.begin()+j);
                    count++;
                    break;
                }
            }
        }
        if (count == word1.length())
            cout << "this is an anagram";
        else cout << "this isn't an anagram";
    }
}

int main(){
    isAnagram();
}

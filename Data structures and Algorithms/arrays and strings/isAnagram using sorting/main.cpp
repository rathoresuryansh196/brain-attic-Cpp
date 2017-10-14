//
//  main.cpp
//  isAnagram using sorting
//
//  Created by Lucas Brito on 10/14/17.
//  Copyright © 2017 Lucas Brito. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string word1,word2;
    cout << "First word: ";
    getline(cin, word1);
    cout << "Second word: ";
    getline(cin, word2);
    /*
     Since any anagram and the original are the same of alphabetical sorted word
     ex: dna and, this two words have the same alphabetical sorted word adn,therefore, they are anagrams.
     */
    sort(word1.begin(),word1.end());
    sort(word2.begin(),word2.end());
    
    if(word1 ==  word2)
        cout << "they are anagrams!\n";
    else cout << "they aren't anagrams!\n";
    
}



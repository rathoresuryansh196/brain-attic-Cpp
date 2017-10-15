//
//  main.cpp
//  anagram ocurrence
//
//  Created by Lucas Brito on 10/15/17.
//  Copyright © 2017 Lucas Brito. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;
// Check how many words are anagram in a word bank(dictionary)
int main() {
    
    vector<string> dictionary = {"amanda","dmand","aad","ada","ninja","janin","ok"
    ,"ko","salt","last","astl","adn","dna"};
    
    map<string, vector<string>> ocurrence;
    
    for (auto word: dictionary) {
        auto sorted = word;
        sort(sorted.begin(), sorted.end());
        ocurrence[sorted].push_back(word);
    }
    for (auto mapItem: ocurrence){
        cout << "\nSorted anagram word: " << mapItem.first << '\n'
        << "Count of anagram: " << mapItem.second.size() << '\n'
        << "Ocurrencies:\n";
        for (auto value: mapItem.second)
            cout << value << '\n';
    }
}

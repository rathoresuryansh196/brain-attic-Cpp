//
//  main.cpp
//  counter word ocurrence
//
//  Created by Lucas Brito on 10/15/17.
//  Copyright © 2017 Lucas Brito. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;


//Count times that word appears in the word bank(words)
//This can be adapt for any type elements in any colection


int main() {
    
    vector<string> words = {"ninja","salt","last","detective","blade runner","ninja","samurai","egg","pvp","egg","egg","sherlock"};
    
    map<string, int> ocurrence;
    
    for (auto word: words)
        ocurrence[word]++;
    for (auto item: ocurrence)
        cout << "word: "    << item.first  << ' '
             << "ocurrence: " << item.second
             << ((item.second == 1) ? " time.\n": " times.\n");

}

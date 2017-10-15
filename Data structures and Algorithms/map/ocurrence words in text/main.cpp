//
//  main.cpp
//  top 3 ocurrence words in email
//
//  Created by Lucas Brito on 10/15/17.
//  Copyright © 2017 Lucas Brito. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
#include <iomanip> //Just to see a better format on output using setw

using namespace std;

int main() {
    string email = "At this point, your best option is to submit a new form with as much accurate information as you can gather. The more information you can include in the form, the better the chance you’ll have of regaining access to your account. We’ve included a few tips below to help you fill out the form as completely and accurately as possible.";
    string word = "";
    
    map<string, int> ocurrence;
    
    for(auto caracter: email) {
        if (caracter == ' ') {
            ocurrence[word]++;
            word = "";
        }else {
            word.push_back(caracter);
        }
    }
    for(auto word: ocurrence) {
        cout << "word: "  << setw(20) << word.first << setw(20)
             << " ocurrence: " << word.second <<'\n';
    }
}

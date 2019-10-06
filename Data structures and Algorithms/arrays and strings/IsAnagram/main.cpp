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
    //complexity: O(length_of_string1 * length_of_string2)
    string word1 = "salt", word2 = "last";
    int count = 0;
    
    cout << "First word: ";
    getline(cin, word1);
    cout << "Second word: ";
    getline(cin, word2);
    
    if (word1.length() == word2.length()) {             //word length should be same
        for (int i = 0 ; i < word1.length(); i++) {     //iterate over all characters of word1
            for (int j = 0; j < word2.length(); j++) {  //iterate over all characters of word2
                if (word1[i] == word2[j]) {             //if same character found erase from word2 and increment count
                    word2.erase(word2.begin()+j);
                    count++;
                    break;
                }
             }
        }
        if (count == word1.length())
            cout << "this is an anagram";
        else 
            cout << "this isn't an anagram";
    }
    else
        cout<<"this isn't an anagram";
}
void IsAnagram2(){
    //complexity: O(max(length_of_string1, length_of_string2))
    string word1,word2;
    cout << "First word: \n";
    cin>>word1;
    cout << "Second word: \n";
    cin>>word2;
    
    if(word1.length()==word2.length())
    {
        int i,j,count1[26]={0},count2[26]={0};
        for(i=0;i<word1.length();i++)
        {
            count1[word1[i]-'a']++;
        }
        for(i=0;i<word2.length();i++)
        {
            count2[word2[i]-'a']++;
        }
        
        for(i=0;i<26;i++)
        {
            if(count[i]==count2[i])
                continue;
            else
                {cout<<"this isn't an anagram\n";return;}
        }    
        
        cout<<"this is an anagram\n";
    }
    else
        cout<<"this isn't an anagram\n";
    
    return;
}    
int main(){
    IsAnagram();
    // IsAnagram2();
}

#include <iostream>
#include <string>
using namespace std;
string decimalToHex(int numToBeConverted) {
    string hexBaseChars = "0123456789ABCDEF";
    string numConverted = "";
    int index;
    while(numToBeConverted >=1) {
        index = numToBeConverted%16;
        numConverted.insert(numConverted.begin(),hexBaseChars[index]);
        numToBeConverted /= 16;
    }
    return numConverted;
}
int main()
{
    int input;
    cin >> input;
    cout << decimalToHex(input) << endl;
    return 0;
}

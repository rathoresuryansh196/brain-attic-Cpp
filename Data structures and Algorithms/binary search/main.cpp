#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> data, int item) {
    int first = 0;
    int last = data.size()-1;
    int middle = (first+last)/2;

    while(first <= last) {
        middle = (first+last)/2;
        if (item > data[middle])
            first = middle + 1;
        else if (item < data[middle])
            last = middle - 1;
        else if (item == data[middle])
            return middle;
    }
    return -1;
}
int binarySearchRecursive(vector<int> data, int item,int first, int last) {
    int middle = (first+last)/2;
    if(item > data[middle])
        return binarySearchRecursive(data,item,middle+1,last);
    else if (item < data[middle])
        return binarySearchRecursive(data, item, first, middle-1);
    else if (item == data[middle])
        return middle;
    return -1;
}
int main() {
    vector<int> data={};
    for(int i = 0; i < 100; i++)
        data.push_back(i);
    int result = binarySearchRecursive(data,87, 0,data.size());
    cout <<"item 87 index: " << result;
    return 0;
}

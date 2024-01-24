// write a cpp program to find all duplicates in the given array
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    
    int size; // size of array
    cin >> size;
    vector<int> array;
    
    for(int i = 0 ; i < size; i++) {
        int value;
        cin >> value;
        array.push_back(value);
    }
    
    unordered_map<int,int> map;//To get the frequency of each value
    for(auto value : array) {
        if(map.find(value) == map.end())
            map[value] = 1;
        else
            map[value] += 1;
    }
    
    //printing the values whose frequency is greater than one
    for(auto value : map) {
        if(value.second > 1)
            cout << value.first << " ";
    }
    return 0;
}


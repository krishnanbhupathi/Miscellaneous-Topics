#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    
    vector<int> v;
    v.push_back(99);
    v.push_back(11);
    v.push_back(22);
    
    for(auto element : v)
        cout << element << " ";
    cout << endl;
    
    sort(v.begin(),v.end());
    
    for(auto element : v)
        cout << element << " ";
        
    cout << endl;
    return 0;
}
  

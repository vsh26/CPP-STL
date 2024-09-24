#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2, 3, 4, 5, 6, 7};
    
    // A copy of values from originsl vector is created
    for(int value : v){
        cout << value << " ";
    }
    cout << endl;

    for(int value : v){
        value++;
    }

    for(int value : v){
        cout << value << " ";
    }
    cout << endl;

    // Paas by referene
    for(int &value : v){
        value++;
    }

    for(int value : v){
        cout << value << " ";
    }
    cout << endl;

    // Shortcut to write iterators
    for(auto it: v){
        cout << it << " ";
    }
    cout << endl;

    vector<pair<int, int>> v_p = {{1,2}, {1,3}, {1,4}, {1,5}};
    for(auto it: v_p){
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
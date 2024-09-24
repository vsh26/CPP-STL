#include<bits/stdc++.h>
using namespace std;

// Comparator Function for VECTOR
bool shouldISwap(int a, int b){
    if(a > b){
        return true;
    }else{
        return false;
    }
}

// Comparator function for VECTOR OF PAIRS
bool should_I_Swap(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first){
        return a.first > b.first;
    }else if(a.second < b.second){
        return true;
    }
    return false;
}

int main(){

    // for VECTOR

    vector<int> v = {12, 32, 83, 74, 65, 16};

    // Sorting in O(N^2)

    for(int i = 0; i < v.size(); i++){
        for(int j = i+1; j < v.size(); j++){
            if(shouldISwap(v[i], v[j])){
                swap(v[i], v[j]);
            }
        }
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;


    //for VECTOR of PAIRS

    /*Lets say we want to sort pairs acoording to first element (ascending order)
    But when first element of pair is same,
    sort the pair according to second element (descending order)

    Input:
    {4, 3}
    {5, 5}
    {5, 3}
    {25, 6}
    {7, 9}
    {8, 5}
    {5, 8}

    Output:
    4 3
    5 8
    5 5
    5 3
    7 9
    8 5
    25 6

    */

    vector<pair<int, int>> vect = {{4, 3},
                                {5, 5},
                                {5, 3},
                                {25, 6},
                                {7, 9},
                                {8, 5},
                                {5, 8}};
    
    for(int i = 0; i < vect.size(); i++){
        for(int j = i + 1; j < vect.size(); j++){
            if(should_I_Swap(vect[i], vect[j])){
                swap(vect[i], vect[j]);
            }
        }
    }

    for(int i = 0; i < vect.size(); i++){
        cout << vect[i].first << " " << vect[i].second << endl;
    }

    return 0;
}
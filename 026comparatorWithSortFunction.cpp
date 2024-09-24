#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

// Comparator Function for VECTOR
bool shouldISwap(int a, int b){
    if(a < b){
        return true;
    }
    return false;
}

// Comparator function for VECTOR OF PAIRS
bool should_I_Swap(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first){
        return a.first < b.first;       // return what you want
    }else if(a.second < b.second){
        return false;
    }
    return true;
}

int main(){

    // for VECTOR

    vector<int> v = {12, 32, 83, 74, 65, 16};

    // Sorting in O(N^2)

    sort(v.begin(), v.end(), shouldISwap);

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
    
    sort(vect.begin(), vect.end(), should_I_Swap);

    for(int i = 0; i < vect.size(); i++){
        cout << vect[i].first << " " << vect[i].second << endl;
    }

    return 0;
}
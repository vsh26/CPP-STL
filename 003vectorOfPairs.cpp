#include<bits/stdc++.h>
using namespace std;

int main(){

    // VECTOR of PAIRS

    vector<pair<int, int>> v0 = {{1,2}, {1,3}, {1,4}};
    // pairs -> v0[0], v0[1], v0[2]


    for(int i = 0; i < v0.size(); i++){
        cout << v0[i].first << " " << v0[i].second << endl;
    }


    vector<pair<int, int>> v1;

    /*
    
    3           -> No. of pairs in vector
    10 20       -> Pair at 0th index, v1[0]
    20 30       -> Pair at 1st index, v1[1]
    30 40       -> Pair at 2nd index, v1[2]
    
    */

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v1.push_back(make_pair(x,y));
    }

    for(int i = 0; i < v1.size(); i++){
        cout << v1[i].first << " " << v1[i].second << endl;
    }

}
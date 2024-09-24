#include<bits/stdc++.h>
using namespace std;

int main(){

    // ARRAY of VECTORS

    int N;
    cin >> N;
    vector<int> v[N];
    // vectors -> v[0], v[1], v[2], ....., v[N-1]

    // No. of rows is fixed
    // No. of columns is dynamic

    /*
    
    3               -> No. of vectors in array
    3               -> size of vector at 0th index, v[0]
    1 2 3           -> elements in vector at 0th index, v[0]
    5               -> size of vector at 1st index v[1]
    1 2 3 4 5       -> elements in vector 1st index, v[1]
    7               -> size of vector at 2nd index, v[2]
    1 2 3 4 5 6 7   -> elements in vector 2nd index, v[2]
    
    */

    for(int i = 0; i < N; i++){
        int n;
        cin >> n;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;   
    }

    return 0;

    return 0;
}
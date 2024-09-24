#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v){

    // Time Complexity of size(): O(1)
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

}

int main(){
    /*
        For online platforms:
            Max. size of vector in local function -> 10^5
            Max. size of vector in global function -> 10^7
    
    */

    // Creating and Accessing Vectors

    vector<int> v(10, 5);
    cout << "Vector: "; printVector(v);         // 5 5 5 5 5 5 5 5 5 5
    v.push_back(10);
    cout << "Vector: "; printVector(v);         // 5 5 5 5 5 5 5 5 5 5 10
    v.pop_back();
    cout << "Vector: "; printVector(v);         // 5 5 5 5 5 5 5 5 5 5

    vector<int> v0({1, 2, 3, 4, 5});
    cout << "Vector 0: "; printVector(v0);      // 1 2 3


    vector<int> v1;
    v1.push_back(10);   // Time Complexity of push_back(): O(1)
    v1.push_back(20);
    v1.push_back(30);

    cout << "Vector 1: "; printVector(v1);      // 10 20 30

    // Taking user input in vector

    vector<int> v2;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v2.push_back(x);
    }

    cout << "Vector 2: "; printVector(v2);

    // Creating a copy of vector (PASS by VALUE)
    vector<int> v3 = v0;    // Time Complexity: O(N)
    cout << "Vector 3: "; printVector(v3);      // Vector 3: 1 2 3 4 5 

    v3.pop_back();
    v3.push_back(12);
    cout << "Vector 3: "; printVector(v3);      // Vector 3: 1 2 3 4 12
    cout << "Vector 0: "; printVector(v0);      // Vector 0: 1 2 3 4 5


    // Creating a copy of vector (PASS by REFERENCE)
    vector<int> &v4 = v0;   // Time Complexity: O(1)
    cout << "Vector 4: "; printVector(v4);      // Vector 4: 1 2 3 4 5

    v4.pop_back();
    v4.push_back(12);
    cout << "Vector 4: "; printVector(v4);      // Vector 4: 1 2 3 4 12
    cout << "Vector 0: "; printVector(v0);      // Vector 0: 1 2 3 4 12
    return 0;
}


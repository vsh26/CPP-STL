#include<bits/stdc++.h>
using namespace std;

int main(){

    // All elements in Ascending Order
    int arr0[] = {12, 32, 83, 74, 65, 16};
    int n0 = sizeof(arr0)/sizeof(int);

    sort(arr0, arr0+n0);

    for(int i = 0; i < n0; i++){
        cout << arr0[i] << " ";
    }
    cout << endl;
    // 12 16 32 65 74 83 


    // All elements in Descending Order
    int arr1[] = {12, 32, 83, 74, 65, 16};
    int n1 = sizeof(arr1)/sizeof(int);

    sort(arr1, arr1+n1, greater<int>());

    for(int i = 0; i < n1; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    // 83 74 65 32 16 12

    // Element on index 1 to element on index 3 in Ascending order
    int arr2[] = {12, 32, 83, 74, 65, 16};
    int n2 = sizeof(arr2)/sizeof(int);

    sort(arr2+1, arr2+4);

    for(int i = 0; i < n2; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
    // 12 32 74 83 65 16


    // Element on index 1 to element on index 3 in Descending order
    int arr3[] = {12, 32, 83, 74, 65, 16};
    int n3 = sizeof(arr3)/sizeof(int);

    sort(arr3+1, arr3+4, greater<int>());

    for(int i = 0; i < n3; i++){
        cout << arr3[i] << " ";
    }
    cout << endl;
    // 12 83 74 32 65 16


    // for VECTORS
    vector<int> v = {12, 32, 83, 74, 65, 16};

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    // 12 16 32 65 74 83

    return 0;
}
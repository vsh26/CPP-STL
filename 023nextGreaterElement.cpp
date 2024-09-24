/*

https://www.hackerrank.com/contests/second/challenges/next-greater-element/problem

*/

#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> v){

    vector<int> nge(v.size());
    stack<int> st;              // This is stack of indexes

    for(int i = 0; i < v.size(); i++){
        while(!st.empty() && v[i] > v[st.top()]){
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;

}

int main(){

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<int> nge = nextGreaterElement(v);

    for(int i = 0; i < n; i++){

        cout << v[i] << " " << (nge[i] == -1 ? -1 :v[nge[i]]) << endl;

    }
    
    return 0;
}
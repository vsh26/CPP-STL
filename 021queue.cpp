/*

QUEUE

    -> FIFO (First In First Out)
        -> out  : front
        -> in   : end

    -> Operations
        1. push -> add element at end
        2. pop -> remove element from beginning
        3. front

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string> q;
    q.push("abc");
    q.push("def");
    q.push("mno");
    q.push("xyz");

    if(!q.empty()){
        cout << q.front() << endl;    // abc
    }

    q.pop();
    q.pop();
    if(!q.empty()){
        cout << q.front() << endl;    // mno
    }

    return 0;
}
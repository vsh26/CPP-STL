/*

https://www.hackerrank.com/challenges/balanced-brackets/problem

3
{[()]}
{[(])}
{{[[(())]]}}

*/

#include<bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbols = {{'(', -1}, {'[', -2}, {'{', -3}, {')', 1}, {']', 2}, {'}', 3}};

string isBalanced(string &str){
    
    stack<char> s;

    for(char bracket : str){
        if(symbols[bracket] < 0){
            s.push(bracket);
        }else{
            if(s.empty()){
                return "NO";
            }
            char top = s.top();
            s.pop();

            if(symbols[top] + symbols[bracket] != 0){
                return "NO";
            }
        }
    }

    if(s.empty()){
        return "YES";
    }else{
        return "NO";
    }
}

int main(){

    int t;
    cin >> t;

    while(t--){
        string str;
        cin >> str;

        cout << isBalanced(str) << endl;

    }

    return 0;
}
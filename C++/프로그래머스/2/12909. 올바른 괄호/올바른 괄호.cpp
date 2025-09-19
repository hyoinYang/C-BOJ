#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<char> paren;
    
    for (char c : s){
        if (c == '(') paren.push(c);
        else{ // c == ')'
            if (paren.size() < 1) {
                return false;
            }
            
            if (paren.top() != '('){
                return false;
            }
            
            paren.pop();
        }
    }
    
    if (paren.size() > 0) return false;

    return true;
}
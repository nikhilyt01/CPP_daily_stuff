#include <string>   
#include <iostream>
using namespace std;
//leetcode 1047
class Solution {
public:
    string removeDuplicates(string s) {
        string stack;
        int i=0;
        while(i<s.length() ){
            if(!stack.empty() && stack.back()==s[i]){
                stack.pop_back();
            }
            else{
                stack.push_back(s[i]);
            }
            i++;
        }
        return stack;
    }
};
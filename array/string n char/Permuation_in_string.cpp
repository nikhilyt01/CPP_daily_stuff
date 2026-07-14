#include <string>   
#include <iostream>
using namespace std;
//leetcode 567
class Solution {
private:
    bool checkEqual(int arr1[26],int arr2[26]){
        for(int i=0;i<26;i++){
            if(arr1[i] != arr2[i]){
                return 0;
            }
        }
        return 1;
    }

public:
    bool checkInclusion(string s1, string s2) {
        // store count of substring
        int count[26]={0};
        int j=0;
        while(j<s1.length()){
            int index=s1[j]-'a';
            count[index]++;
            j++;
        }
        int i=0;
        int windowSize=s1.length();
        int count2[26]={0};
        //count for first window only 
        while(i<windowSize && i<s2.length()){
            int index=s2[i] -'a';
            count2[index]++;
            i++;
        }
        if(checkEqual(count,count2)) 
            return 1;
        
            
        //now shiftiing the window to process next
        while(i<s2.length()){
            char newC=s2[i];
            int index= newC -'a';
            count2[index]++;
            int oldindex=s2[i - windowSize] -'a';
            count2[oldindex]--;
            if(checkEqual(count,count2))
            return 1;
        
            i++;
        }

        return 0;

     }
     
};
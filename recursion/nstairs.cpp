#include<iostream>
using namespace std;
// currently tle
int countDistinctWays(int nStairs) {
    //  Write your code here.
    //base case 
    if(nStairs < 0){
        return 0;
    }
    if(nStairs==0){
        return 1;
    }
    int ans=countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
    return ans%1000000007;

}
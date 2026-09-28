#include<iostream>
using namespace std;
#include<vector>
    bool isSafe(vector<vector<int>>& maze,int n,int x,int y,vector<vector<int>> visited,string path){
        return (x>=0 && x<n&&y>=0&&y<n&&maze[x][y]==1&&visited[x][y]==0);
    }
    
    void solve(vector<vector<int>>& maze,int n,vector<string>& ans,int x,int y,vector<vector<int>> visited,string path){
        if(x==n-1&&y==n-1){ //base case
            ans.push_back(path);
            return;
        }        
        visited[x][y]=1;
        //D ,L,R,U
        int newx=x+1;//Down
        int newy=y;
        if(isSafe(maze,n,newx,newy,visited,path)){
            path.push_back('D');
            solve(maze,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        newx=x;//left
        newy=y-1;
        if(isSafe(maze,n,newx,newy,visited,path)){
            path.push_back('L');
            solve(maze,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        newx=x;//right
        newy=y+1;
        if(isSafe(maze,n,newx,newy,visited,path)){
            path.push_back('R');
            solve(maze,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        newx=x-1;//up
        newy=y;
        if(isSafe(maze,n,newx,newy,visited,path)){
            path.push_back('U');
            solve(maze,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        visited[x][y]=0;//visited array on backtrack
    }
    
 
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        int n=maze.size();
        vector<string> ans;
        
        if(maze[0][0]==0 || maze[n-1][n-1]==0) return ans;
        
        vector<vector<int>> visited(n, vector<int>(n, 0));
        int srcx=0;
        int srcy=0;
        string path="";
        solve(maze,n,ans,srcx,srcy,visited,path);
        sort(ans.begin(),ans.end());
        return ans;
        
    }

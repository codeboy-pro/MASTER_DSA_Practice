#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
void dfs(int row,int col,vector<vector<char>>&grid,int dx[],int dy[],vector<vector<int>>&vis){
    vis[row][col]=1;
    int n=grid.size();
    int m=grid[0].size();
    for(int i=0;i<4;i++){
        int nx=row+dx[i];
        int ny=col+dy[i];
        if(nx>=0 && nx<n && ny>=0 && ny<m && vis[nx][ny]==0 && grid[nx][ny]=='O'){
            dfs(nx,ny,grid,dx,dy,vis);
        }
    }
}
    void find_sol(vector<vector<char>>&grid){
        int n=grid.size();
        int m=grid[0].size();
        if(n==0 ||m==0) return;
        int dx[4]={-1,1,0,0};
        int dy[4]={0,0,-1,1};
        vector<vector<int>>vis(n,vector<int>(m,0));
        //first and last rpw
        for(int i=0;i<m;i++){
            if(grid[0][i]=='O' && vis[0][i]==0) dfs(0,i,grid,dx,dy,vis);
            if(grid[n-1][i]=='O' && vis[n-1][i]==0) dfs(n-1,i,grid,dx,dy,vis);

        }
        //first and last col
        for(int i=0;i<n;i++){
           if(grid[i][0]=='O' && vis[i][0]==0) dfs(i,0,grid,dx,dy,vis);
           if(grid[i][m-1]=='O' && vis[i][m-1]==0) dfs(i,m-1,grid,dx,dy,vis);
        }

//flip all unvisited O's
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(vis[i][j]==0 && grid[i][j]=='O') grid[i][j]='X';
    }
}


    }

};

    int main()
{
    vector<vector<char>> grid{
        {'X', 'X', 'X', 'X'},
        {'X', 'O', 'X', 'X'},
        {'X', 'O', 'O', 'X'},
        {'X', 'O', 'X', 'X'},
        {'X', 'X', 'O', 'O'}};
    Solution sol;
    int n = grid.size();
    int m = grid[0].size();
    sol.find_sol(grid);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
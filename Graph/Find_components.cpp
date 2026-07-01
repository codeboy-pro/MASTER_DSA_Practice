#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Sloution{
public:
    int countComponents(int v,vector<vector<int>>edges){
       vector<vector<int>>adj(v);
       for(auto &e:edges){
        adj[e[0]].push_back(e[1]);
         adj[e[1]].push_back(e[0]);
       }

       vector<int>Visited(v,0);
       int components=0;
       for(int i=0;i<v;i++){
        if(!Visited[i]){
            components++;
            queue<int>q;
            q.push(i);
            Visited[i]=1;
            while(!q.empty()){
                int node=q.front();
                q.pop();
                for(auto &nbr:adj[node]){
                   if(!Visited[nbr]){
                       Visited[nbr] = 1;
                       q.push(nbr);
                   }
                }
            }

        }
       }
       return components;
    }
};
int main(){
int v=5;

vector<vector<int>>edges={{0,1},{1,2},{3,4}};
Sloution sol;
cout<<"Number of components  are:"<<sol.countComponents(v,edges)<<endl;


    return 0;
}
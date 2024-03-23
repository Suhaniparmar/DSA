 #include<iostream>
 using namespace std;

int adj[8][8]={{0,1,1,1,1,0,0,0},{1,0,0,0,0,1,0,0},{1,0,0,0,0,1,0,0},{1,0,0,0,0,0,1,0},{1,0,0,0,0,0,1,0},{0,1,1,0,0,0,0,1},{0,0,0,1,1,0,0,1},{0,0,0,0,0,1,1,0}};
int visited[8]={0,0,0,0,0,0,0,0};

void dfs(int v)
{

   if(visited[v])
    return;
   cout<<v;
   visited[v]=1;
   for(int i=0;i<8;i++)
   {
       if(adj[v][i]!=0&&visited[i]!=1)
       {
           dfs(i);
       }
   }
}

 int main()
 {
     dfs(0);
     return 0;
 }


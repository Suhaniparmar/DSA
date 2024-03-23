 #include<iostream>
 #include<queue>
 using namespace std;

int adj[8][8]={{0,1,1,1,1,0,0,0},{1,0,0,0,0,1,0,0},{1,0,0,0,0,1,0,0},{1,0,0,0,0,0,1,0},{1,0,0,0,0,0,1,0},{0,1,1,0,0,0,0,1},{0,0,0,1,1,0,0,1},{0,0,0,0,0,1,1,0}};
int visited[8]={0,0,0,0,0,0,0,0};
void bfs(int v)
{

//   for(int i=0;i<8;i++)
//   {
//       visited[i]=false;
//   }
   queue<int>q;
   cout<<v<<" ";
   visited[v]=1;
   q.push(v);
   while(!q.empty())
   {
       int ele=q.front();
       q.pop();
       for(int i=0;i<8;i++)
       {
           if(adj[ele][i]!=0&&visited[i]!=1)
           {
               visited[i]=1;
               cout<<i<<" ";
               q.push(i);
           }
       }
   }
}

 int main()
 {
     bfs(0);
     return 0;
 }

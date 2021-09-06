
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<map>
#include<queue>

using namespace std;

char ch[32][32][32];

int visited[32][32][32],level[32][32][32];

int fx[]={1,-1,0,0,0,0};
int fy[]={0,0,1,-1,0,0};
int fz[]={0,0,0,0,1,-1};

void bfs(int s1,int s2, int s3, int l, int r, int c)
{
    visited[s1][s2][s3]=1;

    level[s1][s2][s3]=0;

    queue<int>Q;

    Q.push(s1);
    Q.push(s2);
    Q.push(s3);

    while(!Q.empty())
    {
        int u1=Q.front();

        Q.pop();

        int u2=Q.front();

        Q.pop();

        int u3=Q.front();

        Q.pop();

        for(int i=0;i<6;i++)
        {
            int v1=u1+fx[i];
            int v2=u2+fy[i];
           int v3=u3+fz[i];

            if(visited[v1][v2][v3]==0 && v1>=0 && v2>=0 && v3>=0 && v1<l && v2<r && v3<c && ch[v1][v2][v3]!='#')
            {
                visited[v1][v2][v3]=1;

                level[v1][v2][v3]=level[u1][u2][u3]+1;

                Q.push(v1);
                Q.push(v2);
                Q.push(v3);

            }
        }


    }
}


int main()
{
    //WRITE("output.txt");
   int T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;


  int l,c,r;

   //scanf("%lld%lld%lld",&l,&r,&c)==3

  while(scanf("%d%d%d",&l,&r,&c)==3)
    {
       if(l==0 && r==0 && c==0) break;

       memset(visited,0,sizeof(visited));
       memset(level,0,sizeof(level));
       memset(ch,'\0',sizeof(ch));

       int s1,s2,s3,d1,d2,d3;

       for(i=0;i<l;i++)
       {
           for(j=0;j<r;j++)
           {
               for(k=0;k<c;k++)
               {
                   scanf(" %c",&ch[i][j][k]);

               }
           }

           getchar();

       }


        for(i=0;i<l;i++)
       {
           for(j=0;j<r;j++)
           {
               for(k=0;k<c;k++)
               {

                   if(ch[i][j][k]=='S') {

                    s1=i;s2=j;s3=k;
                   }

                    else if(ch[i][j][k]=='E') {

                    d1=i;d2=j;d3=k;
                   }
               }
           }


       }


   bfs(s1,s2,s3,l,r,c);

   if(level[d1][d2][d3]==0)
   {
       printf("Trapped!\n");
   }

   else printf("Escaped in %d minute(s).\n",level[d1][d2][d3]);

   }


 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}

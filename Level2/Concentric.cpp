#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define INF 1e18

int main()
{
    int A;
    cin>>A;
    int B=A;
    int t=0,l=0,r=(A-1)*2,b=(A-1)*2;
    int dir=0;
    int m[100][100];

    while(t<=b && l<=r)
    {
        if(dir==0)
        {
            for(int i=l;i<=r;i++)
                m[t][i]=A;
            t++;
        }
        else if(dir==1)
        {
            for(int i=t;i<=b;i++)
                m[i][r]=A;
            r--;
        }
        else if(dir==2)
        {
            for(int i=r;i>=l;i--)
                m[b][i]=A;
            b--;
        }
        else if(dir==3)
        {
            for(int i=b;i>=t;i--)
                m[i][l]=A;
            l++;
        }
//        cout<<"Done!!";
        if (dir==3) A--;
        dir=(dir+1)%4;

    }
//    cout<<"Done";
    for (int i=0;i<=(B-1)*2;i++)
    {
        cout<<endl;
        for(int j=0;j<=(B-1)*2;j++)
            cout<<m[i][j]<<" ";
    }


}

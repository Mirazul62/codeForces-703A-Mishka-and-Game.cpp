#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, n,m,c,count1=0,count2=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>m>>c;

       if (m>c)
        {
            count1+=1;
        }
        else if(m<c)
        {
            count2+=1;
        }

    }

     if(count1>count2)
        cout<<"Mishka"<<endl;
     if(count1<count2)
        cout<<"Chris"<<endl;
     if(count1==count2)
        cout<<"Friendship is magic!^^"<<endl;


}

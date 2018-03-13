#include <iostream>
using namespace std;

int main() 
   {
       int t,n,q,d[100],x[100];
        cin>>t;
       for(int i=0;i<t;i++)
       {
              cin>>n>>q;
              for(int j=0;j<n;j++)
              {
                cin>>d[i];
              }
              for(int k=0;k<q;k++)
              {
               cin>>x[k];
               }
               for(int l=0;l<q;l++)
               {
                 for(int m=0;m<n;m++)
                   {   
                     x[l]=(x[l]/d[m]);
                    }
                cout<<x[l]<<"\t";
               } 
          cout<<endl;
       }
     
	return 0;
    }

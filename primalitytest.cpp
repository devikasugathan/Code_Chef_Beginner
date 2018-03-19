    # include<bits/stdc++.h>
    using namespace std;
    int main() 
    {
    	int t;
    	cin>>t;
    	for(int i=0;i<t;i++)
    	{ int n,flag=0;
    	 cin>>n;
    	 for(int j=2;j<n/2;j++)
    	 {
    	     if(n%j==0)
    	     {flag=1;
    	      break;
    	     }
    	     
    	 }
    	     if(flag==1)
    	     cout<<"no"<<endl;
    	     else
    	     cout<<"yes"<<endl;
    	 
    	 }
    	   
    return 0;
    }  

    # include<bits/stdc++.h>
    using namespace std;
    int main() 
    {
    	int t;
    	cin>>t;
    	for(int i=0;i<t;i++)
    	{string s;
         	int f=0;
    	   cin>>s;
    	 for(int j=0;j<s.length()-1;j++)
    	 {
    	   if(s[j]>s[j+1])
    	   {
    	     f=1;
    	     break;
    	   }
    	   
    	 }
    if(f==1)
    {
    cout<<"no"<<endl;
    }
    else
    cout<<"yes"<<endl;
    }
    return 0;
    } 

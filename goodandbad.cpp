    # include<bits/stdc++.h>
    using namespace std;
    int main() 
    {
    	int t;
    	cin>>t;
    	for(int i=0;i<t;i++)
    	{int count=0;
    	
    	 for(int j=0;j<5;j++)
    	 { int a[5];
    	   cin>>a[j];
    	   if(a[j]==1)
    	   {
    	    count=count+1;
    	   }
    	 }
    	 switch(count)
    	 {
    	     case 0:cout<<"Beginner"<<endl;
    	                break;
    	     case 1: cout<<"Junior Developer"<<endl;
    	                break;
    	     
    	     case 2: cout<<"Middle Developer"<<endl;
    	                break;
    	     
    	     case 3: cout<<"Senior Developer"<<endl;
    	                break;
    	     
    	     case 4: cout<<"Hacker"<<endl;
    	                break;
    	     
    	     case 5: cout<<"Jeff Dean"<<endl;
    	                break;
    	 }
    }
    return 0;
    } 

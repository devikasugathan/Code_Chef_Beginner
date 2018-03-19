    # include<bits/stdc++.h>
    using namespace std;
    int main() 
    {
    	int T;
    	cin>>T;
    	for(int i=0;i<T;i++)
    	{ int n;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
    	 cin>>n;
    	 switch(n%8)
    	 {
    	 case 1:cout<<n+3<<"LB"<<endl;
    	      break;
    	 case 2:cout<<n+3<<"MB"<<endl;
    	 break;
    	 case 3:cout<<n+3<<"UB"<<endl;
    	 break;
    	 case 4:cout<<n-3<<"LB"<<endl;
    	         break;
    	 case 5:cout<<n-3<<"MB"<<endl;
    	 break;
    	 case 6:cout<<n-3<<"UB"<<endl;
    	        break;
    	 case 7:cout<<n+1<<"SU"<<endl;
    	        break;
    	 case 0:cout<<n-1<<"SL"<<endl;
    	        break;
    	 
    	 }   
    }
    return 0;
    } 

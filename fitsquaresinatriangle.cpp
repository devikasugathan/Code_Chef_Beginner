    #include <iostream>
    using namespace std;
     
    int main() {
        
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {int b;
     cin>>b;
     b=b-2;
     int ans=0;
      while(b>=2)
      {
    	ans=ans+b/2;
    	b=b-2;
       }
    cout<<ans<<endl;
    }
    return 0;
    }  

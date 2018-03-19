    #include <iostream>
    using namespace std;
     
    int main() {
        
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    { int a,b,c,s=0;
      cin>>a>>b>>c;
      s=a+b+c;
      if(a>0&&b>0&&c>0&&(s==180))
         cout<<"YES"<<endl;
      else 
          cout<<"NO"<<endl;
     
    }   
    return 0;
    }  

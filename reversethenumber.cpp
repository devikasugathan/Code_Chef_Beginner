    #include <iostream>
    using namespace std;
     
    int main() {
        
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++)
    {int rem,rev=0;
    cin>>N;
    while(N!=0)
      {
      rem = N%10;
    rev = rev*10 + rem;
     N /= 10;
      }
        cout<<rev<<endl;
     
    }
    return 0;
    }  

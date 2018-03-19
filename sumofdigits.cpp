    #include <iostream>
    using namespace std;
     
    int main() {
        
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++)
    {int sum=0;
    cin>>N;
    while(N!=0)
      {
        sum =sum+N%10;
        N=N/10;
      }
     
       cout<<sum<<endl;
    }
    return 0;
    } 

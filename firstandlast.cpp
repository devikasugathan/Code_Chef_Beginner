    #include <iostream>
        #include <iomanip>
        using namespace std;
     
        int main()
        {
      int T,l,sum,f,N;
      cin>>T;
      for(int i=0;i<T;i++)
      {
      cin>>N;
      l=N%10;
      f=N;
      while(N>=10)
      {
      N=N/10;
      }
      f=N;
      sum=l+f;
      cout<<sum<<endl;
      }
        	return 0; 
        } 

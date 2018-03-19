    #include <iostream>
        #include <iomanip>
        using namespace std;
     
        int main()
    {
      int T;
        cin>>T;
    for(int i=0;i<T;i++)
       {
          int l=0,m; 
          int N;
          cin>>N;
         while(N>0)
          {
              m=N%10;
           
             if(m==4)
             l++;
             N=N/10;
           }
         if(l>0)
         cout<<l<<endl;
         else 
         cout<<"0"<<endl;
         
       }
        	return 0; 
    } 

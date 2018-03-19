    #include <iostream>
    using namespace std;
     
    int main()
    {
     int t;
     cin>>t;
     for(int i=0;i<t;i++)
       {
           int d,n;
           cin>>d>>n;
         for(int j=0;j<d;j++)
          {
           int sum=0;
           sum =n*(n+1)/2;
            n=sum; 
          }
          cout<<n<<endl;
       }
    return 0;
    } 

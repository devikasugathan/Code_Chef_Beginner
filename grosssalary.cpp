    #include <iostream>
    #include<iomanip>
    using namespace std;
     
    int main()
    {
     int t;
     cin>>t;
     for(int i=0;i<t;i++)
       {
           int a;
           float h,d,t=0;
           cin>>a;
           if(a<1500)
           {
               h=.1*a;
               d=.9*a;
               t=a+h+d;
               cout<<fixed<<setprecision(2)<<t<<endl;
           }
           else
           {
               
               h=500;
               d=.98*a;
               t=a+h+d;
               cout<<fixed<<setprecision(2)<<t<<endl;
               
           }
       }
         return 0;
    } 

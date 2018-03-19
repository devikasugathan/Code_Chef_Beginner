    #include<iostream>
    #include<iomanip>
    using namespace std;
    int main()
    {
      int i,a,b;
      cin>>i;
      while(i--)
      {
          cin>>a>>b;
          double c=a*b;
          if(a>1000)
            cout<<setprecision(6)<<fixed<<c-c*10/100<<endl;
          else
            cout<<setprecision(6)<<fixed<<c<<endl;
      }
      return 0;
    }
      

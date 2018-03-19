    #include<iostream>
    using namespace std;
     
    int main()
    {
     int t;
     cin>>t;
     for(int i=0;i<t;i++)
       { int d=0;
           long a,b,c;
           cin>>a>>b>>c;
           if(a>b&&a<c)
           d=a;
           else if(b>a&&b<c)
           d=b;
           else if(a<b&&a>c)
            d=a;
           else if(b<a&&b>c)
           d=b;
           else if(c>b&&c<a)
           d=c;
           else
           d=c;
           
        cout<<d<<endl;
       }
         return 0;
    }  

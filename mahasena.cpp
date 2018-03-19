    #include <iostream>
    using namespace std;
     
    int main() {
        
    int T,e=0,o=0;
    cin>>T;
    for(int i=0;i<T;i++)
    {int b;
     cin>>b;
     if(b%2==0)
     e++;
     else
     o++;
    }
    if(e>o)
    cout<<"READY FOR BATTLE";
    else
    cout<<"NOT READY";
    return 0;
    }  

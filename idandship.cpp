    #include <iostream>
    #include<string>
    using namespace std;
     
    int main() {
        
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {char b;
     cin>>b;
     if(b=='c'||b=='C')
     cout<<"Cruiser"<<endl;
     else if(b=='B'||b=='b')
     cout<<"BattleShip"<<endl;
     else if(b=='D'||b=='d') 
     cout<<"Destroyer"<<endl;
     else
     cout<<"Frigate"<<endl;
    }
    return 0;
    }  

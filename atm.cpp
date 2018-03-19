    #include <iostream>
        #include <iomanip>
        using namespace std;
     
        int main()
        {
        int x;
        float y;
        cin>>x>>y;
        if(x%5==0 && x<(y-0.5))
        {
        	y=y-0.5-float(x);
        	cout<<endl<<fixed<<setprecision(2)<<y;
        }
        else
        {
        	cout<<endl<<fixed<<setprecision(2)<<y;
        }
        	return 0; 
        } 

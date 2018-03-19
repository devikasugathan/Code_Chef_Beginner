#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t;
	cin>>t;
	int n[t];
	for(int i=0;i<t;i++)
    cin>>n[i];
	  sort(n,n+t);
      for(int l=0;l<t;l++)
      cout<<n[l]<<endl;
	 
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int c=0;
	    int d=0;
	    int e=0;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int j=0;j<n;j++)
	    {
	        cin>>b[j];
	    }
	  
	    for(int h=0;h<n;h++)
	    {
	        while(a[h]!=0 && b[h]!=0)
        {
	        if( a[h]>b[h] )
	        {
	          c=c+1;  
	        }
	        else if( a[h]<b[h])
	        {
	            d=d+1;
	        }
	        else if( a[h]==b[h])
	        {
	            e=e+1;
	            
	        }
        }
	       
	    }
	    cout<<c+d+e<<endl;
	    
	}
	
	return 0;
}

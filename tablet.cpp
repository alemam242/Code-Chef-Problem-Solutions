#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,b,mx=0;
	    cin>>n>>b;
	    for(int i=0;i<n;i++)
	    {
	        int p,l,m;
	        cin>>p>>l>>m;
	        if(m<=b)
	        {
	            if(mx<(p*l))
	            {
	                mx=p*l;
	            }
	        }
	    }
	    if(mx>0)
	    {
	        cout << mx << endl;
	    }
	    else
	    {
	        cout << "no tablet" << endl;
	    }
	}
	return 0;
}

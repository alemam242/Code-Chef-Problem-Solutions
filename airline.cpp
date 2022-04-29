#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d,e;
	    cin>>a>>b>>c>>d>>e;
	    if(a>e && b>e && c>e)
	    {
	        cout << "NO" << endl;
	    }
	    else
	    {
	        if((a+b<=d && c<=e) || (a+c<=d && b<=e) || (b+c<=d && a<=e))
	        {
	            cout << "YES" << endl;
	        }
	        else
	        {
	            cout << "NO" << endl;
	        }
	    }
	}
	return 0;
}

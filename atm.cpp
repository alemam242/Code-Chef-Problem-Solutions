#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int per,taka;
	    cin>>per>>taka;
	    for(int i=1;i<=per;i++)
	    {
	        int w;
	        cin>>w;
	        if(taka<w)
	        {
	            cout << "0";
	        }
	        else
	        {
	            cout << "1";
	            taka=taka-w;
	        }
	    }
	    cout << endl;
	}
	return 0;
}

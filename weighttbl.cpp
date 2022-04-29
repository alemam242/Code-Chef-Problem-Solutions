#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int w1,w2,x1,x2,m;
	    cin>>w1>>w2>>x1>>x2>>m;
	    int dif=w2-w1;
	    if(dif>=m*x1 && dif<=m*x2)
	    {
	        cout << "1" << endl;
	    }
	    else
	    {
	        cout << "0" << endl;
	    }
	}
	return 0;
}

#include <iostream>
using namespace std;
#include<math.h>
int nguyento( int k)
{
	if ( k<2) return 0;
	for (int i = 2; i<= sqrt(k); i++)
	if ( k % i ==0) return 0;
	return 1;
}
int nguyentocungnhau(int x, int i)
{ 
	int t;
	while (i!=0)
	{
	t = x %i;
	x =i;
	i = t;
	}
	if (x ==1) return 1;
	return 0;
}
main()
{ 
	int t,x,d;
	cin>>t;
	while (t--)
	{
		cin>>x;
		d=0;
		for ( int j =1; j< x; j++)
			if ( nguyentocungnhau(x,j)) 
				d++;
			if ( nguyento(d)) 
				cout<<"1\n";
			else 
				cout<<"0\n";
	}
}

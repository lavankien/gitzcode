#include <iostream>
using namespace std;
#include <vector>
vector <int> x;
void result()
{
	for (int i=0; i<x.size(); i++)
		cout<<x[i];
	cout<<" ";
}
void try(int i)
{
	for (int j=0; j<=1; j++)
	{
	
		if (i==n)
		{
			result();
			return;
		}
		else
		{
			x.push_back(j);
			try(i+1);
			x.pop_back();
			}	
	}
};
int main()
{
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		try(0);
		cout<<"\n";
	}
	return 0;
}
//#include <iostream>
//#include <vector>
//
//std::vector <int> v;
//
//int n;
//
//void print() {
//    for(int i = 0; i < v.size(); i++)
//        std::cout << v[i];
//    std::cout << " ";
//}
//
//void Try(int i) {
//    for(int j = 0; j <= 1; j++) {
//        if(i == n) {
//            print();
//            return;
//        }
//        else {
//            v.push_back(j);
//            Try(i+1);
//            v.pop_back();
//        }
//    }
//}
//
//int main() {
//    int t;
//    std::cin >> t;
//    while(t--) {
//        std::cin >> n;
//        Try(0);
//        std::cout << "\n";
//    }
//    return 0;
//}

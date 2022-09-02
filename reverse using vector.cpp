#include<iostream>
#include<vector>
using namespace std;


vector<int> reverse(vector<int> v)
{
	int s =1;
	int e = v.size()-1;
	while(s<=e)
	{
		swap(v[s],v[e]);
		s++;
		e--;
	}
	return v;
}

   void  printvect(vector<int> v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}


int main()
{
	vector<int> v;
	
	v.push_back(1);
	v.push_back(6);
	v.push_back(9);
	v.push_back(11);
	v.push_back(8);
	int s;
	
	cout<<" The vector is : ";
	printvect(v);
	cout<< endl ;

	cout<<" After reverse ";
	vector<int> x = reverse(v);
	printvect(x);
	
	
}

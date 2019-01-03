#include<iostream>

using namespace std;

class prime
{
	int n,i;
	public:
	void enter()
	{
	cout<<"enter number : ";
	cin>>n;
	}
	void getdata()
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				cout<<"number is not prime";
				break;
			}
			else
			{
				cout<<"number is prime number"<<"\n";
				break;
			}	
		}
	}
};
int main()
{
	prime p1;
	p1.enter();
	p1.getdata();
}

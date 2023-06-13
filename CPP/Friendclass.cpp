#include<iostream>
using namespace std;
class eng{
	
	private: int salary;
	
	public:eng()
	{
	salary=100;
	}
	
	friend class incometax;
};

class incometax{
	
	private: int cal;
	
	public: int i( eng& n)
	{
		cal=n.salary*3;
		return cal;
	}
};
int main()
{
	incometax cal;
	eng salary;
	cout<<cal.i(salary);
	return 0;
}

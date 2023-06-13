#include<iostream>
using namespace std;

	class eng{
	private: int salary;
	public: eng()
	{
		salary=100;
	}
		friend class incometax;

	};
	
	class doc{
	private: int salary1;
	public: doc(){
	salary1=200;
	}
		friend class incometax;
	};
	
	class incometax{
	private: int tax;
	public: int doctax(doc& n)
	{
		tax=n.salary1*3;
		return tax;
		
	}
	
	public: int engtax(eng& m)
	{
		tax=m.salary*3;
		return tax;
	}

	};
	void display()
	{
		
	}
	int main()
	{
		incometax tax;
		doc salary1;
		eng salary;
		eng ob;
		ob.salary=3;
		
	}

#define _CRT_SECURE_NO_WARNINGS 1
#include"stock.h"
#include <string>
#include <iostream>

//constructors (verbose version)
Stock::Stock()//默认构造函数(default constructor)
{
	using std::cout;
	using std::endl;
	company = "no name";
	share = 0;
	share_val = 0.0;
	total_val = 0.0;
	cout << "默认构造函数调用" << company << endl;
}
Stock::Stock(const string &co, long n, double pr)
{
	company = co;
	share = n;
	share_val = pr;
	setTotal();
}
Stock::~Stock()//析构函数
{
	using std::cout;
	using std::endl;
	cout << "析构函数调用 : "<<company << endl;
}
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Numbers of shares purchased can't be negative.\n" << "Transaction is abored.\n";
	}
	else
	{
		share += num;
		share_val = price;
		setTotal();
	}
}
void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Numbers of shares sold can't be negative.\n" << "Transaction is abored.\n";
	}
	else if(num>share)
	{
		share -= num;
		share_val = price;
		setTotal();
	}
}
void Stock::update(double price)
{
	share_val = price;
	setTotal();
}
void Stock::show()
{
	using std::cout;
	using std::ios_base;
	//set format to #.###
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	cout<< "Company: "<<company << "   shares: " << share << '\n';
	cout << "share price: $" << share_val <<'\n';

	//set format to #>##
	cout.precision(2);
	cout << "Total worth: $" << total_val << '\n';
	//restore original format
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}

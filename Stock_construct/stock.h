#pragma once
#ifndef STOCK01_H_
#define STOCK01_H_
#include<iostream>
using std::string;
class Stock
{
public:
	//两个构造函数
	Stock();
	Stock(const string &co, long n = 0, double pr = 0.0);
	~Stock();//析构函数
	void buy(long num, double price);
	void sell(long num,double price);
	void update(double price);
	void show();
private:
	string company;
	long share;
	double share_val;
	double total_val;
	void setTotal() { total_val = share * share_val; };
};



#endif // !STOCK01_H_

#define _CRT_SECURE_NO_WARNINGS 1
#include "stock.h"

#include"stock.h"
#include<string>
#include<fstream>
#include<iostream>

int main(char argc, char** argv)
{
	{
		using std::cout;
		cout << "Using constructor to create new objects\n";
		Stock stock1("Nano smart", 2, 2.0);
		stock1.show();
		Stock stock2 = Stock("boffo objeck", 12, 20.0);
		stock2.show();
		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;
		cout << "listing stock1 and stock2: \n";
		stock1.show();
		stock2.show();

		cout << "Using constructor to reset an object:\n";
		stock1 = Stock("nifty foods", 10, 20.0);//temp object
		cout << "Revised stock1 :\n";
		stock1.show();
		cout << "Done\n";
	}
	return 0;
}
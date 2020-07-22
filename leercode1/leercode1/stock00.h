#pragma once
#ifndef STOCK_H_
#define STOCK_H_

#include <string>
class Stock  //class declaration
{		
public:
	void acquaire(const std::string & co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * shares; }
};
#endif // !STOCK_H_


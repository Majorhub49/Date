
#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
private:
	int day;
	int month;
	int year;

public:
	Date(); 
	void setDate(int, int, int);
	int getMonth() const;
	std::string getMonthStr() const;
	int getDay() const;
	int getYear() const;
	bool isLeapYear() const;
	bool isLeapYear(int) const;
	int lastDay()const;
	int lastDay(int, int) const;
	void print() const;
};
#endif
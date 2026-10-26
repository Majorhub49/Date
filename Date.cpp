
#include "Date.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


Date::Date() {
    day = 1;
    month = 1;
    year = 1900;
}
void Date::setDate(int d, int m, int y)
{
	if (d < 1 || d > 31 || m < 1 || m > 12 || y < 1900) {
		cout << "Invalid date. Please enter a valid date." << endl;
		exit(1);
	}
    else {
        day = d;
        month = m;
        year = y;
    }
}

int Date::getMonth() const{
    return month;
}
string Date::getMonthStr() const{
	switch (month) {
	case 1:
		return "January";
	case 2:
		return "February";
	case 3:
		return "March";
	case 4:
		return "April";
	case 5:
		return "May";
	case 6:
		return "June";
	case 7:
		return "July";
	case 8:
		return "August";
	case 9:
		return "September";
	case 10:
		return "October";
	case 11:
		return "November";
	case 12:
		return "December";
	default:
		return "Invalid month";
	}
}
int Date::getDay() const {
    return day;
}
int Date::getYear() const {
    return year;
}
bool Date::isLeapYear() const {
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
		return true;
	}
	else {
		return false;
	}
}
bool Date::isLeapYear(int y) const {
	if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) {
		return true;
	}
	else {
		return false;
	}
}
int Date::lastDay() const {
	if (month == 2) {
		if (isLeapYear()) {
			return 29;
		}
		else {
			return 28;
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		return 30;
	}
	else {
		return 31;
	}
}
int Date::lastDay(int m, int y) const {
	if (m == 2) {
		if (isLeapYear(y)) {
			return 29;
		}
		else {
			return 28;
		}
	}
	else if (m == 4 || m == 6 || m == 9 || m == 11) {
		return 30;
	}
	else {
		return 31;
	}
}
void Date::print() const {
	cout << "Date: " << month << "/" << day << "/" << year << endl;
	cout << "Date: " << getMonthStr() << " " << day << ", " << year << endl;
	cout << "Date: " << day << " " << getMonthStr() << " " << year << endl;
}

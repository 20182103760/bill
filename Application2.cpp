// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CBill
{
private:
	int year;
	int month;
	int day;
	int Hour;
	int Minute;
	int Second;
public:
	CBill();
	CBill(int y, int m, int d,int H,int M,int S);
	int setCBill(int y, int m, int d,int H,int M,int S);
	void displayCBill();
};
CBill::CBill()
{
	year = 2019;
	month = 1;
	day = 1;
	Hour = 1;
	Minute = 1;
	Second = 1;
}
CBill::CBill(int y,int m,int d,int H,int M,int S)
{
	year = y;
	month = m;
	day = d;
	Hour = H;
	Minute = M;
	Second = S;
}
int CBill::setCBill(int y, int m, int d,int H,int M,int S)
{
	year = y;
	month = m;
	day = d;
	Hour = H;
	Minute = M;
	Second = S;
	return 0;
} 
void CBill::displayCBill()
{
	cout << year << "��" << month << "��" << day << "��" << Hour << "ʱ" << Minute << "��" << Second << "��" << endl;
}
int main()
{
	CBill od;
	od.setCBill(2019, 4, 29, 16, 1, 2);
	od.displayCBill();
	return 0;
}


#include <iostream>
using namespace std;
class Data
{
public:
	Data(int,int,int);
	Data(int,int);
	Data(int);
	Data();
	void display();
private:
	int month;
	int day;
	int year;	
};

Data::Data(int m,int d,int y):month(m),day(d),year(y){
}
Data::Data(int m,int d):month(m),day(d){
	year=2005;
}
Data::Data(int m):month(m){
	day=1;year=2005;
}
Data::Data(){
	month=1;day=1;year=2005;
}
void Data::display(){
	cout<<month<<"/"<<day<<"/"<<year<<endl;
}

int main()
{
	Data d1(10,13,2005);
	Data d2(12,30);
	Data d3(10);
	Data d4;
	d1.display();
	d2.display();
	d3.display();
	d4.display();
	
	return 0;
}
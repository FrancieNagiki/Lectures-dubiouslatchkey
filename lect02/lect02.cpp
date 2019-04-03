#include <iostream>
using namespace std;

class dayOfYear{
	public:
		dayOfYear(int m, int d);
		int getMonth();
		int getDay();
		void setDate(int m, int d);
	private:
		int month;
		int day;
};

dayOfYear::dayOfYear(int m, int d){setDate(m, d);}
int dayOfYear::getMonth(){return month;}
int dayOfYear::getDay(){return day;}
void dayOfYear::setDate(int m, int d){
	month = m;
	day = d;
}

int main(){

	int month, day;

	cout << "Enter date: ";
	cin >> month >> day;

	dayOfYear pi(3, 14);

	cout << pi.getMonth() << "/" << pi.getDay()  << endl;

	return 0;
}

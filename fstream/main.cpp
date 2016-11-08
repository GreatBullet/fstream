#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	ofstream DataObj;
	DataObj.open("players.d");
	cout << "Enter players ID, Name, and Currency" << endl;
	cout << "press Ctrl+Z to quit" << endl;
	int idNumber;
	string name;
	double currency;
	while (cin >> idNumber >> name >> currency) {
		DataObj << idNumber << ' ' << name << ' ' << currency << endl;
	}
}
#include<iostream>
#include<iomanip>
#include<string>
 using namespace std;

int my_convert_temp(int tempIn,char **typein)
{
	const unsigned short P = 32;
	const double R = 5.0 / 9.0;
 
	double tempOut;
	string typeOut;
	string typeIn = *typein;
	cin >> tempIn >> typeIn;
	cin.ignore(100,'\n');
	
	if(typeIn == "Celsius")
	{
		tempOut = tempIn / R + P; typeOut = "Fahrenheit"; typeIn = "Celsius";
		cout.setf(ios::right);
		cout<<setiosflags(ios::fixed)<<setfill(' ')<<setw(16)<<setprecision(3)<<tempOut<<setw(16)<<typeOut<<endl;
		return 0;
	}
	if(typeIn == "Fahrenheit")
	{
		tempOut= (tempIn - P) * R; typeOut = "Celsius"; typeIn = "Fahrenheit";
		cout.setf(ios::right);
		cout<<setiosflags(ios::fixed)<<setfill(' ')<<setw(16)<<setprecision(3)<<tempOut<<setw(16)<<typeOut<<endl;
		return 0;
	}
	else
	{
		cout << "Invalid Input" << "\n";
	}
	return 0;
}

int main(int ac,char **av)
{
	my_convert_temp(int tempIn,char **typein);
	return 0;
}
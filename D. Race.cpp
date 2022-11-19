#include <iostream>
#include <string>
using namespace std;

int main()
{
	long long time1,time2,time3;
	cin >>time1>>time2>>time3;
	if (time1 < time2 && time1 < time3)
	{
		cout << time1;
	}
	if (time2 < time1 && time2 < time3)
	{
		cout << time2;
	}
	if (time3 < time1 && time3 < time2)
	{
		cout << time3;
	}

}

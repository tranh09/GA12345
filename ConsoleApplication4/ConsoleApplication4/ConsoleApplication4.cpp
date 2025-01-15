// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{ 
	// Khai báo biến 
	int hour, minute, second, totasecond;

	//Nhập giá trị của giờ 
	cout << "Nhập số giờ:";
	cin >> hour; 

	//Nhập giá trị của phút
	cout << "Nhập số phút:";
	cin >> minute

	// Nhập giá trị của giây
	cout << "Nhập số giây:";
	cin >> second;

	// tính toán tổng số giây
	totalSecond = second + minute * 60 + hour * 3600;

	//cout <<" Tổng số giây là " << totalsecond << " giây" << endl;
}


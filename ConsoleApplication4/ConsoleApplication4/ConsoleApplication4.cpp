

#include <iostream>
#include <string>
using namespace std;

int main()
{ 
	// Khai báo biến 
	int hour, minute, second, totalsecond;

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
	totalsecond = second + minute * 60 + hour * 3600;

	cout <<" Tổng số giây là " << totalsecond << " giây" << endl;

	//Khai báo biến 
	int price, amount; 
	string name; 

	double total, vat; 

	cout << "Nhap ten san pham: ";
	cin >> name;

	cout << "Nhap don gia: ";
	cin >> price;

	cout << "Nhap so luong";
	cin >> amount;

	total = amount * price; 
	vat = 0.1 * total

	cout << fixed << setprecision(2);
	cout << "Thanh tien: " << total << "VND " << endl;
	cout << "VAT: " << vat << "VAT" << endl;
	cout << "Tong thanh toan phai tra la: " << total + vat << " VND" << endl;
}


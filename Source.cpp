#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b){
	int c;
	c=a*b;
	return c;
};
float thuong(int a, int b);

int main()
{
	int a,b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong =";
	int t=tich(a,b);
	cout<<"Tich 2 so nguyen la: "<<t<<endl;
	system("pause");
	return 0;
}
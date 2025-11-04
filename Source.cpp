#include <iostream>

using namespace std;
int tong(int a, int b){
	return a+b;
}
int tinhtongtu1denN(int n){
	int tong = 0;
	for(int i=0;i<n;i++){
		tong+=i;
	}
	return tong;
}
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong ="<<tong(4,3)<<endl;
	cout<<"Tong tu 1 den N ="<<tinhtongtu1denN(6);
	system("pause");
	return 0;
}
#include <iostream>

using namespace std;

int hieu(int a, int b){
return a-b;
}

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
	cout<<"Tong ="<<tong(4,3)<<endl;
	cout<<"Tong tu 1 den N ="<<tinhtongtu1denN(6);
	cout<<"Hieu bang ="<<hieu(5,2);
	cout<<"Tong =";
	int t=tich(a,b);
	cout<<"Tich 2 so nguyen la: "<<t<<endl;
	cout<<"Tong ="<<tong(4,3);
	system("pause");
	return 0;
}
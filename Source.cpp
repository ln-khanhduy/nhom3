#include <iostream>

using namespace std;
int tong(int a, int b){
	return a+b;
}
int hieu(int a, int b);
int tich(int a, int b){
	int c;
	c=a*b;
	return c;
};
int TichLe(int a,int b){
	int c=0;
	if(a%2==0&&b%2==0)
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
	cout<<"Tong ="<<tong(4,3);
	int tl=TichLe(a,b);
	cout<<"Tich cac phan tu le la: ""<<tl;
	system("pause");
	return 0;
}
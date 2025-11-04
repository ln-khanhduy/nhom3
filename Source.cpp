#include <iostream>

using namespace std;

int tong(int a, int b);
int hieu(int a, int b){
return a-b;
}

int tong(int a, int b){
	return a+b;
}
int hieu(int a, int b);


int tich(int a, int b);

int tich(int a, int b){
	int c;
	c=a*b;
	return c;
};
int TongCacSoChantu1den10(int n){
 int n=10;
 int tong=0;
 for(int i=1;i<=n ;i++){
     if(i%2==0)
		 tong+=i;
 }
 return tong;
}

float thuong(int a, int b);

int main()
{
	int a,b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";


	cout<<"Hieu bang ="<<hieu(5,2);


	cout<<"Tong =";
	int t=tich(a,b);
	cout<<"Tich 2 so nguyen la: "<<t<<endl;

	cout<<"Tong ="<<tong(4,3);
cout<<"Tong tu 1 den 10 : "<<TongCacSoChantu1den10<<endl;
	system("pause");
	return 0;
}
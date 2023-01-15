#include<iostream>
#include<cstdio>
#define max 100
using namespace std;
double algr(int n, double a[], double x) {
	double b;
	if (n==0)
	{
		b = a[0];
		cout << b << endl;
	}
	else
	{
		b = algr(n-1, a, x)*x+a[n];
		cout << b << endl;
	}
	return b;
}
int main() {
	int n;
	cout<<"输入多项式的阶数:";
	cin >> n;
	cout << "输入多项式系数"<<endl;
	double a[max];
	for (int i = 0; i <= n; i++) {
		cout << "第" << i+1 << "个系数:";
		cin>>a[i];
	}
	double x;
	cout<<"输入要计算的x:";
	cin >> x ;
	algr(n, a, x);
	return 0;
}

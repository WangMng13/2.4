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
	cout<<"�������ʽ�Ľ���:";
	cin >> n;
	cout << "�������ʽϵ��"<<endl;
	double a[max];
	for (int i = 0; i <= n; i++) {
		cout << "��" << i+1 << "��ϵ��:";
		cin>>a[i];
	}
	double x;
	cout<<"����Ҫ�����x:";
	cin >> x ;
	algr(n, a, x);
	return 0;
}

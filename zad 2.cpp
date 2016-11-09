#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && a + c > b&& b + c > a){
		cout << "exists" << endl;
		if (a == b && b == c){
			cout << "ravnostranen" << endl;
		}
		else if (a == b || a == c || b == c){
			cout << "ravnobedren" << endl;
		}
		else {
			cout << "raznostranen" << endl;
		}
	}
	else {
		cout << "there isnt such a triangle, please try again :P " << endl;
	}
	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
int main(){
	int num;
	cin >> num;
	if (num >= 5 && num <= 10){
		switch (num % 2){
		case 0:cout << "even" << endl;
			break ;
		case 1:cout << "not even" << endl;
			break;
		default:break;
		}

	}
	else {
		cout << "not even even HAHA" << endl;

	}
	system("pause");
	return 0;

}
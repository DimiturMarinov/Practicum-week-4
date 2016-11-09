#include <iostream>
using namespace std;
int main(){
	int num;
	cin >> num;
	int sum = 0;
	int multiplic=1;
	int res;
	if (num >= 100 && num <= 999){
            while (num){
			res = num % 10;
			num = num / 10;
			multiplic = multiplic*res;
			sum = sum + res;
         }
			if (multiplic > 99 && multiplic < 1000){

				cout << "yes " << (multiplic - sum) << endl;
			}
			else {
				cout << "no" << multiplic << endl;
			}
	}
	system("pause");
	return 0;
}
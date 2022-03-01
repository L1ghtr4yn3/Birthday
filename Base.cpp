#include<iostream>
using namespace std;
void HappyBirthday(int num);
int main() {
	int Age;
	cout << " What will you be this year?" << endl;
	cin >> Age;
	HappyBirthday(Age);
	
}void HappyBirthday(int num) {
	for (int i = 0;i <num; i++ )
	cout << "Happy Birthday!" << endl;
}

#include<iostream>
using namespace std;
void HappyBirthday(int num);
void GoodMorning();
int main() {
	int Age; 
	GoodMorning();

	cout << " What will you be this year?" << endl;
	cin >> Age;
	HappyBirthday(Age);
	
}
void HappyBirthday(int num) {
	for (int i = 0;i <num; i++ )
	cout << "Happy Birthday!" << endl;
}
void GoodMorning() {
	for (int i = 0; i < 5; i++ )
	cout << "Good Morning!" << endl;

}

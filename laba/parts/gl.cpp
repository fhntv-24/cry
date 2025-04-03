#include "class.h"
using namespace std;
using namespace nm;

int main()
{
	int sw = 0;
	ifstream in("b.txt");
	if (!in.is_open()) {
		ofstream out("b.txt");
		if (!out.is_open())
			return 0;
		out << sw << endl;
		out.close();
	}
	else
	{
		in.close();
	}
	while (1) {
		cout << "vibor deistv" << endl;
		cout << "dob(1)" << endl;
		cout << "vivod(2)" << endl;
		cout << "search(3)" << endl;
		cout << "izmenenie(4)" << endl;
		cout << "delete(5)" << endl;
		cout << "exit(6)" << endl;
		cin >> sw;
		switch (sw) {
		case 1:
			dob();
			break;
		case 2:
			viv();
			break;
		case 3:
			search();
			break;
		case 4:
			iz();
			break;
		case 5:
			ud();
			break;
		case 6:
			cout << " TO BE CONTINUE" << endl;
			return 0;
			break;
		default:
			cout << "а всё а больше нету" << endl;
			return 0;
		}
	}
	return 0;
}

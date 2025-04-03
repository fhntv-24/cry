
//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//class magaz
//{
//private:
//	string _t;
//	string _p;
//	int _cen;
//public:
//	string getT() const { return _t; }
//	string getP() const { return _p; }
//	int getC() const { return _cen; }
//	void setT(string t) { _t = t; }
//	void setP(string p) { _p = p; }
//	void setC(int c) { _cen = c; }
//	magaz(string t, string p, int cen) :_t(t), _p(p), _cen(cen) {}
//	magaz() = default;
//	friend istream& operator>>(istream& in, magaz& p);
//	friend ostream& operator<<(ostream& out, const magaz& p);
//};
//istream& operator>>(istream& in, magaz& p) {
//	in >> p._t >> p._p >> p._cen;
//	return in;
//}
//ostream& operator<<(ostream& out, const magaz& p) {
//	out << p._t << " " << p._p << " " << p._cen;
//	return out;
//}
//void dob()
//{
//	ifstream in("b.txt");
//	if (!in.is_open())
//		return;
//	int n,l;
//	cout << "kol dobavleni" << endl;
//	cin >> l;
//	in >> n;
//	in.ignore();
//	magaz* ar = new magaz[n + l];
//	for (int i = 0;i < n;i++) {
//		in >> ar[i];
//	}
//	in.close();
//	int kk = l + n;
//	for (int i = n; i < kk;i++) {
//		cout << i << "vvedite: nazvanie, proizvoditela i ceny tovara" << endl;
//		cin >> ar[i];
//		n++;
//	}
//	ofstream out("b.txt");
//	if (!out.is_open())
//		return;
//	out << n << endl;
//	for (int i = 0;i < n;i++) {
//		out << ar[i]<<endl;
//	}
//	out.close();
//	delete[] ar;
//}
//void viv() {
//	ifstream in("b.txt");
//	if (!in.is_open())
//		return;
//	int n;
//	in >> n;
//	in.ignore();
//	magaz* ar = new magaz[n];
//	for (int i = 0;i < n;i++) {
//		in >> ar[i];
//	}
//	in.close();
//	cout << "baza dannix" << endl;
//	for (int i = 0;i < n;i++)
//		cout <<i+1<<":" << ar[i] << endl;
//	delete[] ar;
//}
//void ud() {
//	ifstream in("b.txt");
//	if (!in.is_open())
//		return;
//	int n;
//	in >> n;
//	in.ignore();
//	magaz* ar = new magaz[n];
//	for (int i = 0;i < n;i++) {
//		in >> ar[i];
//	}
//	in.close();
//	int j;
//	cout << "kakoi el udalit" << endl;
//	cin >> j;
//	if (j <= n && j > 0) {
//		for (int y = j - 1;y < n - 1;y++) {
//			ar[y] = ar[y + 1];
//		}
//		magaz*temp = new magaz[n-1];
//		for (int i = 0;i < n - 1;i++)
//			temp[i] = ar[i];
//		n--;
//		ofstream out("b.txt");
//		if (!out.is_open())
//			return;
//		out << n << endl;
//		for (int i = 0;i < n;i++) {
//			out << temp[i] << endl;
//		}
//		out.close();
//		delete[] ar;
//		delete[] temp;
//	}
//	else {
//		cout << "нет такой строки!" << endl;
//		return;
//	}
//}
//void search() {
//	ifstream in("b.txt");
//	if (!in.is_open())
//		return;
//	int n;
//	in >> n;
//	in.ignore();
//	magaz* ar = new magaz[n];
//	for (int i = 0;i < n;i++) {
//		in >> ar[i];
//	}
//	in.close();
//	int t, u;
//	string e;
//	cout << "po kakomy priznaky ishem?\n 1-name\n 2-proizvoditel\n 3-price\n(ojidaetsia chislo)" << endl;
//	cin >> t;
//	cout << "chto ischem?" << endl;
//	if (t != 3)
//		cin >> e;
//	else
//		cin >> u;
//	int o = 0;
//	switch (t) {
//	case 1:
//		for (int i = 0; i < n;i++) {
//			if (e== ar[i].getT()) {
//				cout << "stroka udovletvorayshaia usloviam poiska" << endl;
//				cout << i + 1 << ":" << ar[i] << endl;
//				o = 1;
//			}
//		}
//		break;
//	case 2:
//		for (int i = 0; i < n;i++) {
//			if (e==ar[i].getP()) {
//				cout << "stroka udovletvorayshaia usloviam poiska" << endl;
//				cout <<i+1<<":" << ar[i] << endl;
//				o = 1;
//			}
//		}
//		break;
//	case 3:
//		for (int i = 0; i < n;i++) {
//			if (u == ar[i].getC()) {
//				cout << "stroka udovletvorayshaia usloviam poiska" << endl;
//				cout << i + 1 << ":" << ar[i] << endl;
//				o = 1;
//			}
//		}
//		break;
//	}
//	if (o == 0)
//		cout << "sovpadeniy net" << endl;
//}
//void iz() {
//	ifstream in("b.txt");
//	if (!in.is_open())
//		return;
//	int n;
//	in >> n;
//	in.ignore();
//	magaz* ar = new magaz[n];
//	for (int i = 0;i < n;i++) {
//		in >> ar[i];
//	}
//	in.close();
//	int e, j,nc;
//	string nn, np;
//	cout << "kakuy stroku meniaem";
//	cin >> j;
//	cout << "chto meniaem?\n 1-name\n 2-proizvoditel\n 3-price\n(number)" << endl;
//	cin >> e;
//	switch (e) {
//	case 1:
//		cout << "na chto meniaem?" << endl;
//		cin >> nn;
//		ar[j - 1].setT(nn);
//		cout << "result" << endl;
//		cout << ar[j - 1] << endl;
//		break;
//	case 2:
//		cout << "na chto meniaem?" << endl;
//		cin >> np;
//		ar[j - 1].setP(np);
//		cout << "result" << endl;
//		cout << ar[j - 1] << endl;
//		break;
//	case 3:
//		cout << "na chto meniaem?" << endl;
//		cin >> nc;
//		ar[j - 1].setC(nc);
//		cout << "result" << endl;
//		cout << ar[j - 1] << endl;
//		break;
//	default:
//		return;
//	}
//	ofstream out("b.txt");
//	if (!out.is_open())
//		return;
//	out << n << endl;
//	for (int i = 0;i < n;i++) {
//		out << ar[i] << endl;
//	}
//	out.close();
//	delete[] ar;
//}
//int main()
//{
//	int sw = 0;
//	ifstream in("b.txt");
//		if (!in.is_open()){
//			ofstream out("b.txt");
//		if (!out.is_open())
//			return 0;
//		out << sw << endl;
//		out.close();
//	}
//		else
//		{
//			in.close();
//		}
//	while (1) {
//		cout << "vibor deistv" << endl;
//		cout << "dob(1)" << endl;
//		cout << "vivod(2)" << endl;
//		cout << "search(3)" << endl;
//		cout << "izmenenie(4)" << endl;
//		cout << "delete(5)" << endl;
//		cout << "exit(6)" << endl;
//		cin >> sw;
//		switch (sw) {
//		case 1:
//			dob();
//			break;
//		case 2:
//			viv();
//			break;
//		case 3:
//			search();
//			break;
//		case 4:
//			iz();
//			break;
//		case 5:
//			ud();
//			break;
//		case 6:
//			cout << " TO BE CONTINUE" << endl;
//			return 0;
//			break;
//		default:
//			cout << "а всё а больше нету" << endl;
//			return 0;
//		}
//	}
//	return 0;
//}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.

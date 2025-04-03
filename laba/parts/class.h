#include <iostream>
#include <string>
#include <fstream>
using namespace std;
namespace nm{

	class magaz
{
private:
	string _t;
	string _p;
	int _cen;
public:
	string getT() const { return _t; }
	string getP() const { return _p; }
	int getC() const { return _cen; }
	void setT(string t) { _t = t; }
	void setP(string p) { _p = p; }
	void setC(int c) { _cen = c; }
	magaz(string t, string p, int cen) :_t(t), _p(p), _cen(cen) {}
	magaz() = default;
	friend istream& operator >>(istream& in, magaz& p);
	friend ostream& operator <<(ostream& out, const magaz& p);
};
	istream& operator>>(istream& in, magaz& p);
	ostream& operator<<(ostream& out, const magaz& p);
	void dob();
	void viv();
	void ud();
	void search();
	void iz();

}

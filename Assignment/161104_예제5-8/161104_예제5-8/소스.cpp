#include <iostream>
#include <string>
#include <locale>

using namespace std;

int &find(wstring s, wstring f) {
	int index = s.find(f, 0);
	return index;
}
int main() {
	setlocale(LC_ALL, "korean");
	wstring name = L"대구시 달서구 신당동 1000 계명대학교";
	wcout << name << endl;
	
	wstring f = L"시";
	wstring s = L"군";
	int fIndex = find(name, f);
	name.replace(fIndex, 1, s);
	wcout << name << endl;

	wstring s2 = L"호";
	name.replace(fIndex, 1, f);
	name.replace(4, 1, s2);
	wcout << name << endl;

	wstring f2 = L"대구시";
	wstring s3 = L"부산시";
	fIndex = find(name, f2);
	name.replace(fIndex, 3, s3);
	wcout << name << endl;
}
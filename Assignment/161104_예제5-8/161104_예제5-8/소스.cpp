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
	wstring name = L"�뱸�� �޼��� �Ŵ絿 1000 �����б�";
	wcout << name << endl;
	
	wstring f = L"��";
	wstring s = L"��";
	int fIndex = find(name, f);
	name.replace(fIndex, 1, s);
	wcout << name << endl;

	wstring s2 = L"ȣ";
	name.replace(fIndex, 1, f);
	name.replace(4, 1, s2);
	wcout << name << endl;

	wstring f2 = L"�뱸��";
	wstring s3 = L"�λ��";
	fIndex = find(name, f2);
	name.replace(fIndex, 3, s3);
	wcout << name << endl;
}
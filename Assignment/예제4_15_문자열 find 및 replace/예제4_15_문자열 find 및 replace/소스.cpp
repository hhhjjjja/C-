#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;											//���ڿ��� �����ϴ� string ���� s

	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl;
	getline(cin, s, '&');								//���ڿ� �Է�. �Է��� ���� '&'���� ����
	cin.ignore();										//'&'�ڿ� ������� 'enter'�� ���ִ� �Լ�

	string f, r;										//�˻��� ���ڿ� f�� �˻� �� �ٲ��� ���ڸ� �����ϴ� r
	cout << endl << "find: ";
	getline(cin, f, '\n');								//�˻��� ���ڿ� f �Է�
	cout << "replace: ";
	getline(cin, r, '\n');								//��ġ�� ���ڿ� r �Է�

	int startIndex = 0;									//���ڿ� ���� �˻��� ���� �ε���
	while(true) {
		int fIndex = s.find(f, startIndex);				//�˻��� ���ڿ� f�� s���ڿ��� startIndex���� �˻�
		if(fIndex == -1) break;							//s���ڿ� ������ f�� ã�� �� ������ �ݺ��� ����
		s.replace(fIndex, f.length(), r);				//s���ڿ����� fIndex��°���� f���ڿ��� ���̸�ŭ�� r�� ��ġ
		startIndex = fIndex + r.length();				//f�� ã�Ƽ� r�� �ٲ� ���� �������� �˻��ϱ� ���ؼ� startIndex�� ����
	}
	cout << s << endl;
}

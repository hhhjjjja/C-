#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "7+23+5+100+25�� ���� ���� ���ڿ��� �Է��ϼ���." << endl;
	getline(cin, s);									//���ڿ� �Է�
	int sum = 0;										//���� �����ϴ� ���� sum�� ���� �� 0���� �ʱ�ȭ
	int startIndex = 0;									//���ڿ� ���� �˻��� ���� �ε���
	while(true) {										//break�� ����� ������ while�� �ݺ�
		int fIndex = s.find('+', startIndex);			//startIndex���� '+'���ڸ� �˻�(+�� ������ �ε����� ������ -1����)
		if(fIndex == -1) {								//'+'���ڸ� ã�� �� ���� ��
			string part = s.substr(startIndex);			//���ڿ� s�� startIndex��° ���ڸ� part�� ����
			if(part == "") break;						//���ڿ��� ������ ��� while�� break
			cout << part << endl;
			sum += stoi(part);							//���ڿ��� ���� ��ȯ�Ͽ� ����
			break;
		}
		int count = fIndex - startIndex;				//���꽺Ʈ������ �ڸ� ���� ����
		string part = s.substr(startIndex, count);		//startIndex���� count ���� ���ڷ� ���꽺Ʈ�� �����

		cout << part << endl;
		sum += stoi(part);								//���ڿ��� ���� ��ȯ�Ͽ� ����
		startIndex = fIndex+1;							//�˻��� ������ �ε��� ������Ŵ
	}
	cout << "���ڵ��� ���� " << sum << endl;
}

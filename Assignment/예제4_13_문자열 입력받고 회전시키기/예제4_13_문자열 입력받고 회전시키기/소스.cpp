#include <iostream>
#include <cstring>																//���ڿ��� ����ϱ� ���� �������
#include <locale>																//���ڸ� �ٷ�� �Լ��� ����ϱ� ���� �������
using namespace std;

int main() {
	wstring s;																	//�Է��� �ѱ۷� �ϱ� ���ؼ� ���� s�� wstring���� ����
	wcin.imbue( locale( "korean" ) );											//2��Ʈ�� ���ڿ��� �ѱ� �Ӹ��� �ƴϱ⶧���� �ѱ��� ���
    wcout.imbue( locale( "korean" ) );											//�Ѵٴ� ���� �˷��ش�(����.http://m.blog.naver.com/zoware/60013741409)

	cout << "�Ʒ��� ���ڿ��� �Է��ϼ���. �� ĭ�� �־ �˴ϴ�." << endl;
	getline(wcin, s);															//���ڿ� �Է�
	int len = s.length();														//�Է��� ���ڿ��� ���̸� len������ ����

	for(int i=0;i<len;i++) {													//���ڿ��� ����(len)��ŭ for�� �ݺ�
		wstring first = s.substr(0, 1);											//�� ���� ���� �Ѱ��� ���ڿ��� �и�
		wstring sub = s.substr(1, len-1);										//������ ���ڵ��� ���ڿ��� �и�
		s = sub+first;															//�� ���ڿ��� �����Ͽ� ���ο� ���ڿ��� �����
		wcout << s << endl;														//���
	}
}

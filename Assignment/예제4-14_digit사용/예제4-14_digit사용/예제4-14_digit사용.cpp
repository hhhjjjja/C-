#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
   bool loop = true;
   char c;            				// for each digit
   int ip = 0;        				// input pointer
   int sum = 0;
   int state = 0;

   string s;          				// for input string
   string buf;        				// operand
   
   cout << "7+23+5+100+25�� ���� ���� ���ڿ��� �Է��ϼ���." << endl;
   getline(cin, s, '\n'); 				// ���ڿ� �Է�

   while (loop) {					// loop=false�� �� ������ �ݺ�
      switch (state) {
      case 0: 
		  c = s.at(ip++);			// ���ڿ� s�� ip++(1)��° ���� c�� ����
		  if(isdigit(c))				// c�� ����� ���ڰ� �������� �Ǻ�
		  {
			  buf.append(1, c);		// c�� buf�� ����(buf�� ����)
			  cout << "buf (in state 0)  = " << buf <<endl;
			  state = 1;
		  }
		  else cout << "�߸� �Է��Ͽ����ϴ�." << endl;
		  break;
	  case 1:
		  c = s.at(ip++);			// ���ڿ� s�� ip++(1)��° ���� c�� ����
		  cout << "s(i) = " << c << endl;
		  if(isdigit(c))				// c�� ����� ���ڰ� �������� �Ǻ�
		  {
			 buf.append(1, c);		// c�� buf�� ����(buf�� ����)
			 cout << "buf  (in state 1)  = " << buf << endl;
			 state = 1;				// case1 �ݺ�
		  }
		  else if(c=='+' || c== '=')			// c�� ����� ���ڰ� ��+���� ��=���� ���
			  state = 2;				// case2 ����
		  else cout << "�߸� �Է��Ͽ����ϴ�." << endl;
		  break;
	  case 2:
		  cout << "buf (in state 2) = " << buf << endl;
		  sum += stoi(buf);		// ���� ����(buf�� ����� ���ڸ� ���ڷ� �ٲ㼭 ����)
		  buf.clear();			// ���ڿ� buf�� clear
		  state = 1;			// case1 �ݺ��� ���� state�� 1 ����
		  if(c=='=') {			// c�� ����� ���ڰ� ��=���� ���(���ڿ� ����)
			  loop = false;		// loop=false�� ���� while�� ����
		  }
		  else state=1;			// state=1 �����ؼ� case1 �ݺ�
		  break;
	  }
   }
   cout << "���ڵ��� ���� " << sum;
   return 0;
}
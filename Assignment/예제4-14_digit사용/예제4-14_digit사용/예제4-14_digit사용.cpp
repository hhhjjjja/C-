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
   
   cout << "7+23+5+100+25와 같이 덧셈 문자열을 입력하세요." << endl;
   getline(cin, s, '\n'); 				// 문자열 입력

   while (loop) {					// loop=false가 될 때까지 반복
      switch (state) {
      case 0: 
		  c = s.at(ip++);			// 문자열 s의 ip++(1)번째 값을 c에 저장
		  if(isdigit(c))				// c에 저장된 문자가 숫자인지 판별
		  {
			  buf.append(1, c);		// c를 buf에 저장(buf와 연결)
			  cout << "buf (in state 0)  = " << buf <<endl;
			  state = 1;
		  }
		  else cout << "잘못 입력하였습니다." << endl;
		  break;
	  case 1:
		  c = s.at(ip++);			// 문자열 s의 ip++(1)번째 값을 c에 저장
		  cout << "s(i) = " << c << endl;
		  if(isdigit(c))				// c에 저장된 문자가 숫자인지 판별
		  {
			 buf.append(1, c);		// c를 buf에 저장(buf와 연결)
			 cout << "buf  (in state 1)  = " << buf << endl;
			 state = 1;				// case1 반복
		  }
		  else if(c=='+' || c== '=')			// c에 저장된 문자가 ’+’나 ‘=’일 경우
			  state = 2;				// case2 실행
		  else cout << "잘못 입력하였습니다." << endl;
		  break;
	  case 2:
		  cout << "buf (in state 2) = " << buf << endl;
		  sum += stoi(buf);		// 덧셈 실행(buf에 저장된 문자를 숫자로 바꿔서 실행)
		  buf.clear();			// 문자열 buf를 clear
		  state = 1;			// case1 반복을 위해 state에 1 저장
		  if(c=='=') {			// c에 저장된 문자가 ‘=’일 경우(문자열 종료)
			  loop = false;		// loop=false로 만들어서 while문 종료
		  }
		  else state=1;			// state=1 저장해서 case1 반복
		  break;
	  }
   }
   cout << "숫자들의 합은 " << sum;
   return 0;
}
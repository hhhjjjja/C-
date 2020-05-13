#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "7+23+5+100+25와 같이 덧셈 문자열을 입력하세요." << endl;
	getline(cin, s);									//문자열 입력
	int sum = 0;										//합을 저장하는 변수 sum을 선언 후 0으로 초기화
	int startIndex = 0;									//문자열 내에 검색할 시작 인덱스
	while(true) {										//break가 실행될 때까지 while문 반복
		int fIndex = s.find('+', startIndex);			//startIndex부터 '+'문자를 검색(+가 있으면 인덱스를 없으면 -1리턴)
		if(fIndex == -1) {								//'+'문자를 찾을 수 없을 때
			string part = s.substr(startIndex);			//문자열 s의 startIndex번째 문자를 part에 저장
			if(part == "") break;						//문자열이 끝나는 경우 while문 break
			cout << part << endl;
			sum += stoi(part);							//문자열을 수로 변환하여 덧셈
			break;
		}
		int count = fIndex - startIndex;				//서브스트링으로 자를 문자 갯수
		string part = s.substr(startIndex, count);		//startIndex부터 count 개의 문자로 서브스트링 만들기

		cout << part << endl;
		sum += stoi(part);								//문자열을 수로 변환하여 덧셈
		startIndex = fIndex+1;							//검색을 시작할 인덱스 전진시킴
	}
	cout << "숫자들의 합은 " << sum << endl;
}

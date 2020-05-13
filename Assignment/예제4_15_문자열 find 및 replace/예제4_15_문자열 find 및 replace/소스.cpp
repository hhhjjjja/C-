#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;											//문자열을 저장하는 string 변수 s

	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
	getline(cin, s, '&');								//문자열 입력. 입력의 끝은 '&'으로 지정
	cin.ignore();										//'&'뒤에 따라오는 'enter'를 없애는 함수

	string f, r;										//검색할 문자열 f와 검색 후 바꿔줄 문자를 저장하는 r
	cout << endl << "find: ";
	getline(cin, f, '\n');								//검색할 문자열 f 입력
	cout << "replace: ";
	getline(cin, r, '\n');								//대치할 문자열 r 입력

	int startIndex = 0;									//문자열 내에 검색할 시작 인덱스
	while(true) {
		int fIndex = s.find(f, startIndex);				//검색할 문자열 f를 s문자열의 startIndex부터 검색
		if(fIndex == -1) break;							//s문자열 내에서 f를 찾을 수 없으면 반복문 종료
		s.replace(fIndex, f.length(), r);				//s문자열에서 fIndex번째부터 f문자열의 길이만큼을 r로 대치
		startIndex = fIndex + r.length();				//f를 찾아서 r로 바꾼 문자 다음부터 검색하기 위해서 startIndex를 변경
	}
	cout << s << endl;
}

#include <iostream>
#include <cstring>																//문자열을 사용하기 위한 헤더파일
#include <locale>																//문자를 다루는 함수를 사용하기 위한 헤더파일
using namespace std;

int main() {
	wstring s;																	//입력을 한글로 하기 위해서 변수 s를 wstring으로 생성
	wcin.imbue( locale( "korean" ) );											//2비트의 문자열은 한글 뿐만이 아니기때문에 한글을 사용
    wcout.imbue( locale( "korean" ) );											//한다는 것을 알려준다(참고.http://m.blog.naver.com/zoware/60013741409)

	cout << "아래에 문자열을 입력하세요. 빈 칸이 있어도 됩니다." << endl;
	getline(wcin, s);															//문자열 입력
	int len = s.length();														//입력한 문자열의 길이를 len변수에 저장

	for(int i=0;i<len;i++) {													//문자열의 길이(len)만큼 for문 반복
		wstring first = s.substr(0, 1);											//맨 앞의 문자 한개를 문자열로 분리
		wstring sub = s.substr(1, len-1);										//나머지 문자들을 문자열로 분리
		s = sub+first;															//두 문자열을 연결하여 새로운 문자열로 만든다
		wcout << s << endl;														//출력
	}
}

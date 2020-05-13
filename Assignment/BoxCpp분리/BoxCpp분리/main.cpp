#include <iostream>
using namespace std;		//std 이름공간에 선언된 모든 이름에 std:: 생략

#include "Box.h"			//Box.h 를 include

int main() {
	Box b(10, 2);			//Box.h에 선언되어 있는 Box 클래스를 b로 호출하고 10, 2를 각각 파라미터로 지정
	b.draw();				//Box 클래스 b에 선언되고 Box.cpp에 구현된 draw( )를 실행
	cout << endl;			//줄바꿈
	b.setSize(7, 4);		//박스 사이즈를 10->7로 2->4로 크기 변경
	b.setFill('^');			//박스 내부를 채울 문자를 '^'로 변경
	b.draw();				//박스를 그린다
}
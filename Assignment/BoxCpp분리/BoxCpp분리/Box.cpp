#include <iostream>
using namespace std;

#include "Box.h"						//Box.h를 include

void Box::draw() {						//박스를 그리는 함수
	for(int n=0;n<height;++n) {			//n을 0부터 박스의 높이(height)보다 작을때까지 +1하면서 {}반복실행
		for(int m=0;m<width;++m) {		//m을 0부터 박스의 폭(width)보다 작을때 까지 +1하면서 {}반복실행
			cout << fill;				//setFill에서 지정한 박스를 채우는 문자 fill 출력
		}
		cout << endl;					//줄바꿈
	}
}

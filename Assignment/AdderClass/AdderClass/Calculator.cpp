#include <iostream>
using namespace std;							//std 이름공간에 선언된 모든 이름에 std:: 생략

#include "Calculator.h"							//Calculator.h를 include
#include "Adder.h"								//Adder.h를 include

void Calculator::run() {
	cout << "두 개의 수를 입력하세요 >> ";		//"두 개의 수를 입력하세요>>" 출력
	int a, b;									//계산 할 두 정수를 입력받아서 저장하는 변수
	cin >> a >> b;								//계산 할 두 정수를 각각 a, b에 입력받음
	Adder adder(a, b);							//덧셈기를 생성
	x=a;										//입력받은 정수 a를 클래스 Calculator에 선언되어있는 변수 x에 저장
	y=b;										//입력받은 정수 b를 클래스 Calculator에 선언되어있는 변수 y에 저장
	cout << "calc.run 수행한 결과" << endl;		//"calc.run 수행한 결과" 출력
	cout << adder.process() << endl << endl;	//adder.process()에서 리턴한 (op1+op2) 출력
}

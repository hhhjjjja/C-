#include <iostream>
#include "Calculator.h"								//main.cpp에 Calculator.h를 include
#include "Adder.h"									//main.cpp에 Adder.h를 include

int main() {
	Calculator calc;								//Calculator.h에 선언되어 있는 Calculator 클래스를 calc로 호출
	calc.run();										//Calculator 클래스 calc에 선언되고 Calculator.cpp에 구현된 run()멤버함수 실행

	int a=calc.x;										//a : Calculator 클래스에서 선언된 x를 저장하는 변수
	int b=calc.y;										//b : Calculator 클래스에서 선언된 y를 저장하는 변수
	Adder c(a, b);										//Adder.h에 선언되어 있는 Adder 클래스를 c로 호출하고 파라미터에 a, b 입력
	c.process();										//Adder 클래스 c에 선언되고 Adder.cpp에 구현된 process()멤버함수 실행
	std::cout << "Adder c 수행한 결과" << std::endl;	//"Adder c 수행한 결과" 출력
	std::cout << c.process() << std::endl;				//c.process()에서 리턴한 (op1+op2) 출력
}





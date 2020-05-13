#include <iostream>
int sum(int a, int b);															//Line2 함수 원형 선언
using namespace std;															//Line3 std 이름 공간에 선언된 모든 이름에 std:: 생략

int sum(int a, int b) {															//Line5 sum 함수 선언, 매개변수 a=덧셈 시작 수, b=덧셈 끝 수

	int k, res=0;																//Line7 k=for문을 실행시키면서 덧셈을 하는 변수, res=덧셈 결과
	for(k=a;k<=b;++k) {															//Line8 k=a부터 k=b까지 k를 1씩 더해가며 {}안을 반복실행
		res += k;																//Line9 덧셈 결과 res에 res+k를 저장
	}
	return res;																	//Line11 덧셈 결과 res 리턴
}

int main() {
	int n = 0;																	//Line15 입력받을 변수 n을 선언한 후 0으로 초기화
	cout<<"끝 수를 입력하세요>>";												//Line16 "끝 수를 입력하세요>>" 문장 출력
	cin>>n;																		//Line17 n에 입력받은 숫자 저장
	cout<<"1에서 " << n << "까지의 합은" << sum(1, n) << "입니다.\n";			//Line18 1에서 (입력받은 숫자 n) 까지의 합은 (sum함수에서 리턴받은 결과값 res) 입니다 출력
}
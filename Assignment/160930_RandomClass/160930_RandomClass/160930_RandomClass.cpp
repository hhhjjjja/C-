#include <iostream>
#include <cstdlib>									//RAND_MAX 상수(32767)가 선언되어 있는 헤더파일
#include <stdlib.h>
#include <ctime>									//srand를 사용하기 위한 헤더파일
using namespace std;
class Random {
public:
	Random();										//기본 생성자
	int next();										//랜덤 정수를 받아오기 위한 함수
	int nextInRange(int f, int l);					//f부터 l까지의 범위 내에서 랜덤 정수를 받아오기 위한 함수
};
Random::Random() {
	srand((unsigned)time(0));						//시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정
}
int Random::next() {
	int n = rand();									//랜덤 정수를 받는 변수 n에 랜덤정수를 지정
	return n;										//랜덤 정수가 저장된 변수 n 반환
}
int Random::nextInRange(int f, int l) {
	int n = rand()%(l-f+1)+f;						//변수 n에 f부터 l까지의 범위 내에서 랜덤한 정수를 지정

	return n;										//랜덤 정수가 저장된 변수 n 반환
}
int main() {
	Random r;																		//매개변수가 없는 생성자 호출
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;			//"--0에서 RAND_MAX(32767) 까지의 랜덤 정수 10개" 출력
	for(int i=0;i<10;++i) {															//i=0부터 10미만까지 for{} 반복실행
		int n = r.next();															//n에 랜덤 정수를 받는 함수 next()에서 반환한 n 저장
		cout << n << ' ';															//랜덤 정수가 저장된 n 출력
	}

	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10개 --" << endl;	//"--2에서 4까지의 랜덤 정수 10개--" 출력
	for(int i=0;i<10;++i) {															//i=0부터 10미만까지 for{} 반복실행
		int n = r.nextInRange(2, 4);												/*n에 2부터 4까지의 범위 내의 랜덤정수를 받는 함수
																					  nextInRange()에서 반환한 n 저장*/
		cout << n << ' ';															//랜덤 정수가 저장된 n 출력
	}
	cout << endl;																	//줄바꿈
}


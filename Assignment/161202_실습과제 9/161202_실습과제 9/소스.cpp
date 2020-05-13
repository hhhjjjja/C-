/*8장 실습문제 5번_ BaseArray를 상속받아 큐처럼 작동하는 MyQueue클래스를 작성하라.
MyQueue를 활용하는 사례는 다음과 같다. */

#include <iostream>
using namespace std;

class BaseArray {
private:				//외부에서 접근 불가
	int capacity;		//큐의 최대크기
	int *mem;			//큐 값을 저장하는 배열 포인터
protected:				//자식클래스 외에는 접근 불가
	BaseArray(int capacity=100) {								//생성자, 매개변수 default시에는 capacity =100
		this->capacity = capacity; mem = new int [capacity];	//멤버변수 capacity에 매개변수 capacity저장, 입력받은 capacity만큼 배열생성
	}
	~BaseArray() {delete [] mem;}						//소멸자, 배열 mem을 삭제
	void put(int index, int val) {mem[index] = val;}	//index=mem의 몇번째 칸, val=mem에 저장되는 값, mem의 index번째 칸에 val을 저장
	int get(int index) {return mem[index];}				//입력받은 index번째 칸의 값을 반환
	int getCapacity() {return capacity;}				//큐의 최대크기(capacity)를 반환
};
class MyQueue : public BaseArray {						//BaseArray클래스를 상속받는 클래스 MyQueue
private:												//외부에서 접근 불가
	int size;											//큐의 크기, 입력된 값의 갯수
	int dqval;											//dequeue에서 반환할 값(첫번째 index에 저장되어있는 값)을 임시저장하는 변수
public:													//외부 클래스에서도 접근 가능
	MyQueue(int capacity) : BaseArray(capacity) {		//MyQueue생성자, 생성자 매개변수를 BaseArray의 생성자에 전달
		size=0;											//큐의 크기를 0으로 초기화
		dqval=0;										//임시저장할 변수 dqval을 0으로 초기화
	}
	void enqueue(int n){				//큐에 매개변수 n을 삽입
		if(size == getCapacity()) {		//큐의 크기(size)가 큐의 최대크기(capacity)와 같으면 추가하지 못함
			cout << "is full"<< endl;	
			return ;					//아래부분을 실행하지 않고 enqueue 종료
		}
		put(size, n);					//size번째 index에 n 저장
		size++;							//size를 +1, 큐가 입력될 때 저장되는 부분을 뒤로 +1
	}
	int dequeue() {
		if(size == 0) {						//큐의 크기가 0이면 삭제할 값이 없음
			cout << "is empty" << endl;
			return 0;						//아래부분 실행하지 않고 dequeue 종료
		}
		dqval = get(0);						//반환할 0번째 index의 값을 dqval에 저장
		for(int i=0;i<size;i++) {			//숫자들을 한칸씩 앞으로 당기기위한 반복문
			put(i, get(i+1));				//i번째 큐에 한칸 뒤의 값을 저장
		}
		size--;								//큐의 size를 -1
		return dqval;						//삭제하는 가장 앞의 값을 반환
	}
	int length() {							//큐의 크기 반환하는 함수
		return size;						//큐의 크기 size 반환
	}
	int capacity() {						//큐의 최대크기 반환하는 함수
		return getCapacity();				//getCapacity()는 BaseArray클래스의 멤버변수, capacity를 반환함
	}

};
int main() {
	MyQueue mQ(100);		//MyQueue클래스 객체 생성. MyQueue는 BaseArray를 상속받음
	int n;					//큐에 삽입하는 정수를 저장하는 변수
	cout << "큐에 삽입할 5개의 정수를 입력하라 >> ";
	for(int i=0;i<5;i++) {
		cin >> n;			//정수를 n에 입력받음
		mQ.enqueue(n);		//입력받은 n을 큐에 저장함
	}						//위를 5번 반복
	cout << "큐의 용량 : " << mQ.capacity() << ", 큐의 크기 : " << mQ.length() << endl;		//큐의 용량, 큐의 크기를 출력
	cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
	while(mQ.length() != 0) {							//큐에 저장된 값을 앞에서부터 제거하며 출력하므로 0이되면 반복문 종료
		cout << mQ.dequeue() << ' ';					//dequeue를 실행하여 반환된 값을 출력
	}
	cout << endl << "큐의 현재 크기 : " <<mQ.length() << endl;		//큐의 값을 모두 삭제시킨 후 큐의 크기를 출력
	return 0;
}
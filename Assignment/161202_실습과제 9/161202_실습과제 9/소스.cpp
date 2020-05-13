/*8�� �ǽ����� 5��_ BaseArray�� ��ӹ޾� ťó�� �۵��ϴ� MyQueueŬ������ �ۼ��϶�.
MyQueue�� Ȱ���ϴ� ��ʴ� ������ ����. */

#include <iostream>
using namespace std;

class BaseArray {
private:				//�ܺο��� ���� �Ұ�
	int capacity;		//ť�� �ִ�ũ��
	int *mem;			//ť ���� �����ϴ� �迭 ������
protected:				//�ڽ�Ŭ���� �ܿ��� ���� �Ұ�
	BaseArray(int capacity=100) {								//������, �Ű����� default�ÿ��� capacity =100
		this->capacity = capacity; mem = new int [capacity];	//������� capacity�� �Ű����� capacity����, �Է¹��� capacity��ŭ �迭����
	}
	~BaseArray() {delete [] mem;}						//�Ҹ���, �迭 mem�� ����
	void put(int index, int val) {mem[index] = val;}	//index=mem�� ���° ĭ, val=mem�� ����Ǵ� ��, mem�� index��° ĭ�� val�� ����
	int get(int index) {return mem[index];}				//�Է¹��� index��° ĭ�� ���� ��ȯ
	int getCapacity() {return capacity;}				//ť�� �ִ�ũ��(capacity)�� ��ȯ
};
class MyQueue : public BaseArray {						//BaseArrayŬ������ ��ӹ޴� Ŭ���� MyQueue
private:												//�ܺο��� ���� �Ұ�
	int size;											//ť�� ũ��, �Էµ� ���� ����
	int dqval;											//dequeue���� ��ȯ�� ��(ù��° index�� ����Ǿ��ִ� ��)�� �ӽ������ϴ� ����
public:													//�ܺ� Ŭ���������� ���� ����
	MyQueue(int capacity) : BaseArray(capacity) {		//MyQueue������, ������ �Ű������� BaseArray�� �����ڿ� ����
		size=0;											//ť�� ũ�⸦ 0���� �ʱ�ȭ
		dqval=0;										//�ӽ������� ���� dqval�� 0���� �ʱ�ȭ
	}
	void enqueue(int n){				//ť�� �Ű����� n�� ����
		if(size == getCapacity()) {		//ť�� ũ��(size)�� ť�� �ִ�ũ��(capacity)�� ������ �߰����� ����
			cout << "is full"<< endl;	
			return ;					//�Ʒ��κ��� �������� �ʰ� enqueue ����
		}
		put(size, n);					//size��° index�� n ����
		size++;							//size�� +1, ť�� �Էµ� �� ����Ǵ� �κ��� �ڷ� +1
	}
	int dequeue() {
		if(size == 0) {						//ť�� ũ�Ⱑ 0�̸� ������ ���� ����
			cout << "is empty" << endl;
			return 0;						//�Ʒ��κ� �������� �ʰ� dequeue ����
		}
		dqval = get(0);						//��ȯ�� 0��° index�� ���� dqval�� ����
		for(int i=0;i<size;i++) {			//���ڵ��� ��ĭ�� ������ �������� �ݺ���
			put(i, get(i+1));				//i��° ť�� ��ĭ ���� ���� ����
		}
		size--;								//ť�� size�� -1
		return dqval;						//�����ϴ� ���� ���� ���� ��ȯ
	}
	int length() {							//ť�� ũ�� ��ȯ�ϴ� �Լ�
		return size;						//ť�� ũ�� size ��ȯ
	}
	int capacity() {						//ť�� �ִ�ũ�� ��ȯ�ϴ� �Լ�
		return getCapacity();				//getCapacity()�� BaseArrayŬ������ �������, capacity�� ��ȯ��
	}

};
int main() {
	MyQueue mQ(100);		//MyQueueŬ���� ��ü ����. MyQueue�� BaseArray�� ��ӹ���
	int n;					//ť�� �����ϴ� ������ �����ϴ� ����
	cout << "ť�� ������ 5���� ������ �Է��϶� >> ";
	for(int i=0;i<5;i++) {
		cin >> n;			//������ n�� �Է¹���
		mQ.enqueue(n);		//�Է¹��� n�� ť�� ������
	}						//���� 5�� �ݺ�
	cout << "ť�� �뷮 : " << mQ.capacity() << ", ť�� ũ�� : " << mQ.length() << endl;		//ť�� �뷮, ť�� ũ�⸦ ���
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while(mQ.length() != 0) {							//ť�� ����� ���� �տ������� �����ϸ� ����ϹǷ� 0�̵Ǹ� �ݺ��� ����
		cout << mQ.dequeue() << ' ';					//dequeue�� �����Ͽ� ��ȯ�� ���� ���
	}
	cout << endl << "ť�� ���� ũ�� : " <<mQ.length() << endl;		//ť�� ���� ��� ������Ų �� ť�� ũ�⸦ ���
	return 0;
}
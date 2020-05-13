#ifndef BOX_H											//���� �����Ϲ�
#define BOX_H											//���� �����Ϲ�

class Box {												//Box Ŭ���� ����
	int width, height;									//�ڽ��� ��(width)�� ����(height)�� �ǹ��ϴ� ����
	char fill;											//�ڽ��� ���θ� ä��� ����
public:													//�ܺο��� ������ �����ϵ��� �Ѵ�
	Box(int w, int h) {setSize(w, h); fill = '*';}		/*�ʺ�(w)�� ����(h) �Ķ���͸� ���� ������. setSize�Լ����� �ڽ��� �ʺ�� ����
														  �Ķ���͸� �������ְ�, fill='*'�� �ڽ����θ� ä���*/
	void setFill(char f) {fill = f;}					//�ڽ� ���θ� ä�� ����(f �Ķ����)�� fill�� ����
	void setSize(int w, int h) {width=w; height=h;}		//width=w, height=h ���� ����
	void draw();										//�ڽ� �׸���
};
#endif													//���� �����Ϲ� Box.h�� ������ include �ص� �������� �ϱ� ����

#pragma once
#include <vector>
#include <iostream>
using namespace std;

class Line {
public:
	double A, B, C;//ax+by+c = 0��
	int type;//0 ֱ�� 1 ���� 2 �߶�
	int dirct = 0;//0 �������� 1 �������� 2 ��ֱ���� 3��ֱ����
	double x1, x2, y1, y2;//x1 ��˵�(���ߵĶ˵�) x2 �Ҷ˵� y1y2��ֹ��ֱֱ�����
	double a, b, t;
	bool aNotExist;
	Line(int X1, int Y1, int X2, int Y2,char Type);
	bool equal(Line l);
};
#pragma once

// ��� ���� ������� ���������� ���� ��� ���� �� �� �4996
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE

#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

const int SZ = 100000;



class verylong
{
private:
	char vlstr[SZ]; //����� ��� ������
	int vlen; //����� ������ verylong
	verylong multdigit(const int) const; //���������
	verylong mult10(const verylong) const;// ������� �������
public:
	verylong() : vlen(0) //����������� ��� ����������
	{
		vlstr[0] = '\0';
	}
	verylong(const char s[SZ]) //����������� (1 ��������)
	{
		strcpy(vlstr, s); vlen = strlen(s);
	} //��� ������
	verylong(const unsigned long n) //����������� (1 ���.)
	{
		ltoa(n, vlstr, 10); //��������� � ������
		strrev(vlstr); //����������� ��
		vlen = strlen(vlstr); //����� �����
	}
	void putvl() const; //������� �����
	void getvl(); //�������� ����� �� ������������
	verylong operator + (const verylong); //������� �����
	verylong operator * (const verylong); //��������
};
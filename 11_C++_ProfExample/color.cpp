#include "color.h"
#include <iostream>
using namespace std;

const Color Color::Black(0, 0, 0);
const Color Color::White(255, 255, 255);
const Color Color::Green(0, 255, 0);
const Color Color::Blue(0, 0, 255);
const Color Color::Red(255, 0, 0);
const Color Color::Yellow(255, 255, 0);
const Color Color::Violet(255, 0, 255);
const Color Color::Gray(127, 127, 127);

Color::Color()
{
	// �⺻���� ä���.
	R = defR;
	G = defG;
	B = defB;
}

Color::Color(element_t R, element_t G, element_t B)
{
	// this �����͸� ����ؼ� ��� ������ ǥ���Ѵ�.
	this->R = R;
	this->G = G;
	this->B = B;
}

void Color::SetR(element_t val)
{
	// element_t Ÿ���� 0~255 ���� ���ۿ�
	// ���� �� �����Ƿ�, ���� �˻�� �ʿ����.
	R = val;
}

void Color::SetG(element_t val)
{
	G = val;
}

void Color::SetB(element_t val)
{
	B = val;
}

Color::element_t Color::GetR() const
{
	return R;
}

Color::element_t Color::GetG() const
{
	return G;
}

Color::element_t Color::GetB() const
{
	return B;
}

// RGB�� ���� 32��Ʈ ������ ���� ����
void Color::SetColor32(color32_t val)
{
	// ����ü�� ����ؼ� ���� ����� �ִ�.
	union
	{
		element_t rgb[4];
		color32_t color32;
	} temp;

	// ����ü�� 32��Ʈ ���� �κп� �Ű������� ����
	temp.color32 = val;

	// RGB�� ���� �о �����Ѵ�.
	R = temp.rgb[0];
	G = temp.rgb[1];
	B = temp.rgb[2];
}

// RGB�� ���� 32��Ʈ ������ ���� ��ȯ
Color::color32_t Color::GetColor32() const
{
		// ����ü�� ����ؼ� ���� ����� �ִ�.
	union
	{
		element_t rgb[4];
		color32_t color32;
	} temp;

	// ����ü��rgb �κп� �� �Է�
	temp.rgb[0] = R;
	temp.rgb[1] = G;
	temp.rgb[2] = B;

	// 32 ��Ʈ ���� �κ��� �о ��ȯ�Ѵ�.
	return temp.color32;
}

// ��ü ��⸦ ��ȭ��Ų��.
void Color::AdjustBright(int delta)
{
	// RGB �� ��ҿ� delta ��ŭ ���Ѵ�.
	// (���� ó���� ���ش�)
	R = PutInRange( R + delta);
	G = PutInRange( G + delta);
	B = PutInRange( B + delta);
}

// ���� ����Ѵ�.
// endLine == true�̸� ���͵� ����ش�.
void Color::Print(bool endLine) const
{
	cout << "{ R = " << (int)R << ", G = " << (int)G << ", B = " << (int)B << "}";

	if (true == endLine)
		cout << "\n";
}

// RGB ����� ���� ������ ��
// ���� �˻縦 ���ؼ� ȣ���� �� �ִ�.
int Color::PutInRange(int val)
{
	if (val < 0)
		return 0;
	else if (val > 255)
		return 255;
	
	return val;
}

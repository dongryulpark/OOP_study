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
	// 기본값을 채운다.
	R = defR;
	G = defG;
	B = defB;
}

Color::Color(element_t R, element_t G, element_t B)
{
	// this 포인터를 사용해서 멤버 변수를 표현한다.
	this->R = R;
	this->G = G;
	this->B = B;
}

void Color::SetR(element_t val)
{
	// element_t 타입은 0~255 밖의 값밖에
	// 담을 수 없으므로, 범위 검사는 필요없다.
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

// RGB의 값을 32비트 정수로 만들어서 지정
void Color::SetColor32(color32_t val)
{
	// 공용체를 사용해서 쉽게 만들수 있다.
	union
	{
		element_t rgb[4];
		color32_t color32;
	} temp;

	// 공용체의 32비트 정수 부분에 매개변수를 대입
	temp.color32 = val;

	// RGB의 값을 읽어서 대입한다.
	R = temp.rgb[0];
	G = temp.rgb[1];
	B = temp.rgb[2];
}

// RGB의 값을 32비트 정수로 만들어서 반환
Color::color32_t Color::GetColor32() const
{
		// 공용체를 사용해서 쉽게 만들수 있다.
	union
	{
		element_t rgb[4];
		color32_t color32;
	} temp;

	// 공용체의rgb 부분에 값 입력
	temp.rgb[0] = R;
	temp.rgb[1] = G;
	temp.rgb[2] = B;

	// 32 비트 정수 부분을 읽어서 반환한다.
	return temp.color32;
}

// 전체 밝기를 변화시킨다.
void Color::AdjustBright(int delta)
{
	// RGB 각 요소에 delta 만큼 더한다.
	// (범위 처리도 해준다)
	R = PutInRange( R + delta);
	G = PutInRange( G + delta);
	B = PutInRange( B + delta);
}

// 값을 출력한다.
// endLine == true이면 엔터도 찍어준다.
void Color::Print(bool endLine) const
{
	cout << "{ R = " << (int)R << ", G = " << (int)G << ", B = " << (int)B << "}";

	if (true == endLine)
		cout << "\n";
}

// RGB 요소의 값을 지정할 때
// 범위 검사를 위해서 호출할 수 있다.
int Color::PutInRange(int val)
{
	if (val < 0)
		return 0;
	else if (val > 255)
		return 255;
	
	return val;
}

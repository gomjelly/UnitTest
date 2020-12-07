// CalculatorCpp.cpp : DLL을 위해 내보낸 함수를 정의합니다.
//

#include "pch.h"
#include "framework.h"
#include "CalculatorCpp.h"


// 내보낸 변수의 예제입니다.
CALCULATORCPP_API int nCalculatorCpp=0;

// 내보낸 함수의 예제입니다.
CALCULATORCPP_API int fnCalculatorCpp(void)
{
    return 0;
}

// 내보낸 클래스의 생성자입니다.
CCalculatorCpp::CCalculatorCpp()
{
    return;
}

double CCalculatorCpp::add(double x, double y)
{
	return x + y;
}

double CCalculatorCpp::sub(double x, double y)
{
	return x - y;
}

double CCalculatorCpp::mul(double x, double y)
{
	return x * y;
}

double CCalculatorCpp::div(double x, double y)
{
	return x / y;
}

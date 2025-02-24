#include "Calculator.hpp"

Calculator::Calculator(float firstValue, float secondValue) : m_firstValue(firstValue), m_secondValue(secondValue)
{

}

float Calculator::addNumbers()
{
    return m_firstValue + m_secondValue;
}

float Calculator::subtractionNumbers()
{
    return m_firstValue - m_secondValue;
}

float Calculator::dividerNumbers()
{
    if (m_secondValue == 0)
    {
        return 0;
    }

    return m_firstValue / m_secondValue;
}

float Calculator::multiplicationNumbers()
{
    return m_firstValue * m_secondValue;
}


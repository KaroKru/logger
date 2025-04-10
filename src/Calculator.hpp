#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

class Calculator
{
public:
    Calculator(float firstValue, float secondValue);
    
    const float addNumbers();

    const float subtractionNumbers();

    const float dividerNumbers();

    const float multiplicationNumbers();

private:
    float m_firstValue = 0.0;
    float m_secondValue = 0.0;
};

#endif //CALCULATOR_HPP
#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

class Calculator
{
public:
    Calculator() = delete;

    Calculator(float firstValue, float secondValue);

    ~Calculator(){};
    
    float addNumbers();

    float subtractionNumbers();

    float dividerNumbers();

    float multiplicationNumbers();

private:
    float m_firstValue = 0.0;
    float m_secondValue = 0.0;
};

#endif //CALCULATOR_HPP
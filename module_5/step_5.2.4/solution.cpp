struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;

    Rational& operator+=(Rational rational);
    Rational& operator-=(Rational rational);
    Rational& operator*=(Rational rational);
    Rational& operator/=(Rational rational);

    Rational operator-() const;
    Rational operator+() const;

private:
    int numerator_;
    int denominator_;
};

Rational operator+(Rational num1, const Rational& num2)
{
    return (num1 += num2);
}

Rational operator-(Rational num1, const Rational& num2)
{
    return (num1 -= num2);
}

Rational operator*(Rational num1, const Rational& num2)
{
    return (num1 *= num2);
}

Rational operator/(Rational num1, const Rational& num2)
{
    return (num1 /= num2);
}

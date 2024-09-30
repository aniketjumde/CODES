#include<iostream>
using namespace std;

class Complex
{
    float real;
    float imag;

    public:
    Complex(float real=0,float imag=0)
    {
        this->real=real;
        this->imag=imag;
    }

    void display()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
    friend const Complex operator / (const Complex &,const Complex &);
};

const Complex operator / (const Complex &fob,const Complex &sob)
{
    Complex tob;
    tob.real=((fob.real * sob.real) + (fob.imag * sob.imag ) ) /(fob.real *fob.real + sob.imag * sob.imag);

    tob.imag=(( fob.imag*sob.real) - (fob.real * sob.imag))/(fob.real *fob.real + sob.imag * sob.imag);

    return tob;
}

int main()
{
        Complex c1(3,4);
        Complex c2(8,-2);
        Complex c3;
        c3=  c1 / c2;

        c3.display();
}

#include<iostream>
using namespace std;

#define m 2
#define n 2

class Matrix
{
    int **a;
    
public:
    Matrix()
    {
        a = new int*[m];
        for(int i = 0; i < m; ++i)
            a[i] = new int[n];
        
        for(int i = 0; i < m; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                a[i][j] = 0;
            }
        }
    }
    Matrix(const Matrix& t)
    {
        a = new int*[m];
        for(int i = 0; i < m; ++i)
            a[i] = new int[n];
        
        for(int i = 0; i < m; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                this->a[i][j] = t.a[i][j];
            }
        }
    }
    
    friend Matrix implementation(Matrix &t, int scaler);     
    
    friend istream& operator >> (istream &in, Matrix &t);
    friend ostream& operator << (ostream &out, Matrix &t);    
    
    ~Matrix()
    {
        for(int i = 0; i < m; ++i)
            delete[] a[i];
        delete[] a;
    }
};


istream& operator >> (istream &in, Matrix &t)
{
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cout << "Enter Data : ";
            in >> t.a[i][j];
        }
    }
    cout << endl;
    return in;
}

ostream& operator << (ostream &out, Matrix &t)
{
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            out << t.a[i][j] << " ";
        }
        out << endl;
    }
    out << endl;
    return out;
}

Matrix implementation(Matrix &t, int scaler)
{
    Matrix temp_obj;
    
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            temp_obj.a[i][j] = t.a[i][j] * scaler;
        }
    }
    return temp_obj;
}

int main()
{
    Matrix ob1;
    cin >> ob1;
    cout << "Matrix Elements of ob1 : " << endl << ob1;
    
    
    int scaler = 0;
    cout << "Enter Scaler : ";
    cin >> scaler;

    Matrix ob2 = implementation(ob1, scaler);
    cout << endl << "Matrix Elements of ob2 : " << endl << ob2;

    return 0;
}

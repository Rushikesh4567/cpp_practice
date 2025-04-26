#include<iostream>
using namespace std;

class Complex {
    int real1, real2;
    int imag1, imag2;
    int sum_real = 0;
    int sum_imag = 0;
    
public:
    Complex(int r1, int r2, int i1, int i2) {
        real1 = r1;
        real2 = r2;
        imag1 = i1;
        imag2 = i2;
    }
    
    void display_sum() {
        sum_real = real1 + real2;
        sum_imag = imag1 + imag2;
        
        cout << "\nThe sum of two complex numbers is: ";
        cout << sum_real;
        
        if (sum_imag >= 0)
            cout << "+" << sum_imag << "i" << endl;
        else
            cout << sum_imag << "i" << endl;
    }
};

int main() {
    int p, q, r, s;
    
    cout << "\nEnter two real parts: ";
    cin >> p >> q;
    
    cout << "\nEnter two imaginary parts: ";
    cin >> r >> s;
    
    Complex c1(p, q, r, s);
    
    c1.display_sum();
    
    return 0;
}


#include<bits/stdc++.h>

using namespace std;

class Complex{
public:
    Complex(float a_val = 0, float b_val = 0){
        a = a_val;
        b = b_val;
    }
    float read_re(){
        return a;
    }
    float read_im(){
        return b;
    }
    void set_re(float a_val){
        a = a_val;
    }
    void set_im(float b_val){
        b = b_val;
    }
    void print(){
        cout << a << " ";
        if(b >= 0)
            cout << "+ " << b;
        else
            cout << "- " << b * (-1);
        cout << "i\n";
    }
    Complex add(const Complex &num) const{
        return Complex(a + num.a, b + num.b);
    }
private:
    float a;
    float b;
};

int main(){
    Complex a(1.0, -2.0);
    Complex b(3.14);

    b.set_im(-5);

    Complex c = a.add(b);

    c.print();
    return 0;
}
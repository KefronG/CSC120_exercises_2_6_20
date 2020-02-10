#include <iostream>
// using namespace std to shorten code
using namespace std;
void exercise2_5(){
    cout <<"Addition calc \n";
    //setting variable type as integers.
    int a,b,c;
    //asking user to input numbers to store in variables
    cout<<"Enter num1 : \n";
    cin >> a;
    cout<<"Enter num2 : \n";
    cin >> b;
    //using variables in equation
    c = a + b;
    //outputting the sum.
    cout<<"The sum is : " << c << "\n\n";
}
void exercise2_16(){
    cout <<"Addition / Multiplication / Division calc \n";
    int a,b,c,d;
    //using float for e because it uses division
    float e;
    cout<<"Enter num1 : \n";
    cin >> a;
    cout<<"Enter num2 : \n";
    cin >> b;
    c = a + b;
    d = a * b;
    //converting a / b to float by storing the quotient in float e
    e = a / b;
    cout<<"The sum is : " << c << " The product is : "<< d << " The  quotient is: " << e << "\n\n";
}
void exercise2_17(){
    cout <<"Different ways to print text (See code)\n";
    //welcome to C++ programming
    string a = "Welcome ";
    string b = " to";
    string c = " C++";
    string d = " programming";
    string method1 = a + b + c + d;
    //a)
    cout << method1 << endl;
    //b)
    cout << a << b << c << d + "\n";
    //c)
    cout << a + b;
    cout<< c + d + "\n\n";
}
void exercise2_18() {
    cout <<"Number comparison pt.1 \n";
    int a;
    int b;
    cout << "Enter Two numbers : \n";
    cin >> a;
    cin >> b;
    //if a does not equal b output following code
    if (a != b) {
        cout << "These numbers are not equal \n";
    //else if both a and b are equal output following code
    }else if(a == b){
        cout << "These numbers are equal \n";
    //if a is less than or equal to b or b is less than or equal to a output following code.
    }if (a <= b) {
        cout << a << " Is the smaller number \n\n";
    }else if (b <= a) {
        cout << b << " Is the smaller number \n\n";
    }
}
void exercise2_19() {
    cout <<"Number comparison pt.2 \n";
    int a, b, c, d, e, f;
    cout << "Input three different integers : \n";
    cin >> a;
    cin >> b;
    cin >> c;
    d = c + b + a;
    e = d / 3;
    f = c * b * a;
    cout << "The sum is : " << d << "\nThe Average is : " << e << "\nThe product is : " << f << "\n";
    //using && to have more comparisons in one conditional statements
    if (a <= b && a <= c) {
        cout << a << " Is the smallest \n";
    } else if (b <= a && b <= c) {
        cout << b << " Is the smallest \n";
    } else if (c <= a && c <= b) {
        cout << c << " Is the smallest \n";
    }
    if (a >= b && a >= c) {
        cout << a << " Is the largest \n\n";
    } else if (b >= a && b >= c) {
        cout << b << " Is the largest \n\n";
    } else if (c >= a && c >= b) {
        cout << c << " Is the largest \n\n";
    }
}
void exercise2_20(){
    cout <<"Diameter / Circumference / Area calc\n";
    int R;
    int A;
    int D;
    int C;
    float P = 3.14159;
    cout << "Please enter in a Radius :  ";
    cin >> R;
    D = 2*R;
    C = 2*P*R;
    A = P*(R*R);
    cout << "\nThe diameter of the circle is : "<< D;
    cout << "\nThe circumference of the circle is : "<< C;
    cout << "\nThe Area of the circle is : "<< A << "\n\n";
}

void exercise2_21(){
    cout <<"Printing images with code \n";
    cout <<"    CCC    +       +  \n"
         <<"   C       +       +  \n"
         <<"  C      +++++   +++++\n"
         <<"   C       +       +  \n"
         <<"    CCC    +       +  ";
}
int main() {
    exercise2_5();
    exercise2_16();
    exercise2_17();
    exercise2_18();
    exercise2_19();
    exercise2_20();
    exercise2_21();
    return 0;
}

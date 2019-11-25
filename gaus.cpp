#include <iostream>
#include <math.h> 

using namespace std;


      
class Evaluate{
//represents the probability density function

// 1- make a declaration and then use variable
// 2- in equation we do not use data type, we only variables

public:

    float mu, sigma2, coef, expon, ev, x;

    const double PI = 3.1415926535897932384626433832795;


    void coefficient(){
        coef = 1.0 / sqrtf ( 2.0 * PI * sigma2);

        expon = exp(0.5 *(x - mu * 2 / sigma2) );

        ev = coef * expon;
}
// write the constructor please
Evaluate( float num1, float num2, float num3){
    mu  = num1;
    sigma2 = num2;
    x = num3;
    }

};

int main (){
    
    int temp;
    // when mu = 42.0, sigma2 = 225.0, x = 10.5
    Evaluate my_class (42.0, 225.0, 10.5);

    my_class.coefficient();
    cout <<"Evaluate for gaussianone is: " << my_class.ev <<endl;

    Evaluate my_class_2 (35.6, 12.25, 35.6);
    my_class_2.coefficient();
    cout<<"Evaluate for gaussiantwo is: "<< my_class_2.ev <<endl;
    
    return 0;
    
}

class Add{
    public:
    float gaussianone, gaussiantwo, gaussianthree, gaussianfour;

    viod add(){
        gaussianthree = gaussianone + gaussiantwo;
        gaussianfour = gaussianone * gaussiantwo;
    }
};
Add(float num1, float num2){
    gaussianone = num1;
    gaussiantwo = num2;
};
int main(){
    int temp;
    Add my_new_class ();
    my_new_class.add();

    cout<<"Gaussianthree is:  "<<my_new_class.gaussianthree <<endl;
    cout<<"Gaussianfour is: "<<my_new_class.gaussianfour<<endl;

    return 0;
}



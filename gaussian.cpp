#include <iostream>

using namespace std;


class Gaussian
{
    public:

    float gaussianone, gaussiantwo, gaussianthree, gaussianfour;

    void add(){
        gaussianthree = gaussianone + gaussiantwo;
    }

    void mul(){
        gaussianfour = gaussianone * gaussiantwo;

    }

    //Constructor
    Gaussian(float num1, float num2 ){
        gaussianone = num1;
        gaussiantwo = num2;
    }
};
       


int main ()
{
    
    int temp;
    Gaussian my_home_work (42.0, 225.0);

    my_home_work.add();

    cout << "Gaussianthree is: " << my_home_work.gaussianthree <<endl;

    my_home_work.mul();

    cout <<"Gaussianfour is: " <<my_home_work.gaussianfour <<endl;

    return 0;
    
}
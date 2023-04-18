#include "iostream"
#include <cmath>
using namespace std;


//Q3
double sum_function(int n,int k=1,double sum = 0.0){
    if (k > n) {
        return sum;
    }
    double sumfunc = (std::pow(-1, k) + 1) / k;
    return sum_function(n, k + 1, sum + sumfunc);}

//Q4
double sum_function() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    return sum_function(n);
}

int main(){
    //Q3
    //int n;
    //std::cout << "Enter the value of n: ";
    //std::cin >> n;
    //double value = sum_function(n);

    //Q4
    double value = sum_function();
    cout<<"Sum value is " << value << endl;
}

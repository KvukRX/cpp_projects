#include <iostream>
#include <cmath>
using namespace std;

void rounded(double& num);

int main(){
    double InpNum;
    cin >> InpNum;

    rounded(InpNum);
    cout << InpNum;
}
void rounded(double& num){
    double b;
    double* i = &b;
    double a = modf(num, i);

    if (a >= 0.5)
    {
        a = 1;
    }
    else a = 0;
    
    num = a + b;
}
#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double A[],int N,double B[])
{
    B[0]=0;
    for(int i=0;i<N;i++)
    {
        B[0] = B[0] + A[i];
        if(A[i]>B[2])B[2] = A[i];
        if(A[i]<B[3])B[3] = A[i];
    }
    B[0] = B[0]/N;

    for(int i=0;i<N;i++)
    {
        B[1] = B[1]+pow((A[i] - B[0]),2);
    }
    B[1] = sqrt(B[1]/N);

}

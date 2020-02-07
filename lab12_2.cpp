#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location:";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);   
    }while(s != 0 && x != 0 && y != 0 );
             return 0;    
}

// Write definition of updateImage() and showImage() here
void showImage(const bool image[][M])
{
    for(int k=0;k<=M+1;k++)cout << "-";
    cout << "\n";

    for(int i=0;i<=N-1;i++){
        cout << "|";
        for(int j=0;j<=M-1;j++){
            if(image[i][j]==1){
                cout << "*";
        }else{ cout << " ";}}
        cout << "|\n";}

    for(int k=0;k<=M+1;k++)cout << "-";
    cout << "\n";

}

void updateImage(bool image [][M],int s,int x,int y)
{
    int i,j;
    for(i=0;i<=(N-1);i++)
    {
        for(j=0;j<=(M-1);j++)
        {
            if(sqrt(pow((i-x),2)+pow((j-y),2)) <= s-1)
            image[i][j] = 1;
        }
    } 
} 


#include <iostream>
#include <math.h>


using namespace std;




int recufunction(int N ,int ypos,int xpos)
{

    int sqr_length;
    int sum=0;
    while(N>0)
    {
        sqr_length=pow(2,N);
        if(xpos>=sqr_length/2&&ypos<sqr_length/2)//2사분면
        {
            sum +=pow(sqr_length/2,2);
            xpos -= sqr_length/2;
        }
        if(xpos<sqr_length/2&&ypos>=sqr_length/2)//3사분면
        {
            sum +=2*pow(sqr_length/2,2);
            ypos -= sqr_length/2;
        }
        if(xpos>=sqr_length/2&&ypos>=sqr_length/2)//4사분면
        {
            sum +=3*pow(sqr_length/2,2);
             xpos -= sqr_length/2;
            ypos -= sqr_length/2;
        }
        N--;
    }
    return sum;
}
int main() {
    int N,r,c;
    cin >> N >> r >>c;
    cout <<  recufunction(N,r,c);

    return 0;
}

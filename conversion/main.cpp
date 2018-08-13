#include <iostream>
#include<conio.h>
using namespace std;
const float metertofloat= 3.280833;
class distance
{
    int feet;
    float inches;
public:
    distance()
    {
        feet=0;
        inches=0.0;
    }
    distance(int ft,float in)
    {
        feet=ft;
        inches=in;
    }
    operator float()
    {
        float feetinfractions=inches/12;
        feetinfractions+=float(feet);
        return (feetinfractions/metertofloat);
    }
};
int main()
{
    int feet;
    float inches;
    cout<<"enter dist in f nd i"<<endl;
    cout<<"feet:"<<endl;
    cin>>feet;
    cout<<"inches:"<<endl;
    cin>>inches;


    distance dist(feet,inches)
    float meters =dist;
    cout<<"now "<<meters;
    getch();
    return 0;
}

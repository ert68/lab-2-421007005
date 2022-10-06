   
#include <iostream>
#include<cmath>
using namespace std;
void trig_func(  )
{
    double angle;
    cout<<" enter the angle \n";
    cin>>  angle;
    
    double *sin_ =new double ; 
    double *cos_ =new double  ;
    
    *sin_ =angle;
    *cos_ =angle;
    
    cout<<"sin angle = "<< sin(angle)<<endl;
    cout<<"cos angle =  "<< cos(angle)<<endl;
     
}
    int main()
{
    trig_func() ; 
    
 return 0;     
}
 

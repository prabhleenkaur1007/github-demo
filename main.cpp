#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a,b,c,v;
    const double base_cost(2.50);
    cout<<"enter the dimensions of the package in inches: ";
    cin>>a>>b>>c;
    if(a>10||b>10||c>10){
        cout<<"sorry we cannot ship the package"<<endl;
    }
   else{
    v=a*b*c;
    if(v>100&&v<=500){
        cout<<fixed<<setprecision(2);
        cout<<"cost= $"<<base_cost+(0.1*base_cost)<<endl;
    }
     else if(v>500){
        cout<<fixed<<setprecision(2);
        cout<<"cost= $"<<base_cost+(0.25*base_cost)<<endl;
    }
      else if(v<100){
        cout<<"cost= $"<<base_cost<<endl;
    }
     else{
        cout<<"question mein nhi btaya :))"<<endl;
    }
    }
    cout<<"the volume of your package is: "<<v<<" cubic inches"<<endl;
    return 0;
}

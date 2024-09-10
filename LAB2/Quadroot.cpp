#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    float a,b,c,x,y;
    cout<<"Enter the leading coefficient of the quadratic equation: ";
    cin>> a;
    cout<<"Enter the coefficient of first degree term : ";
    cin>> b;
    cout<<"Enter the constant term : ";
    cin>> c ;
    if ((pow(b,2)-4*a*c)>=0){
        cout<<" Roots existant : "<<endl;
        x = (-b+pow((pow(b,2)-4*a*c),0.5))/(2*a);
        y = (-b-pow((pow(b,2)-4*a*c),0.5))/(2*a);
        cout<<x<<endl;
        cout<<y<<endl;
    }
    else{
        cout<<"Roots not existant : ";
    }
    
}
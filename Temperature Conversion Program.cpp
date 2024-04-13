#include<iostream>
//#include<conio.h>
using namespace std;
double CelciusToKelvin(double);
double CelciusToFahrenheit(double);
double KelvinToCelcius(double);
double KelvinToFahrenheit(double);
double FahrenheitToCelcius(double);
double FahrenheitToKelvin(double);
double temp;
int main(){
	
	char unit;
	cout<<"Enter temperature:";
	cin>>temp;
	cout<<"\nFrom the following options:\n";
    cout<<"1. Celcius.\n";
    cout<<"2. Kelvin.\n";
    cout<<"3. Fahrenheit.\n";
    cout<<"Enter unit of the given temperature:";
    cin>>unit;
    switch(unit){
    case'1':
        double a,b;
        a=CelciusToKelvin(temp);	
        cout<<"\nTemperature conveted in Kelvin= "<< a;
        b=CelciusToFahrenheit(temp);
        cout<<"\nTemperature conveted in Fahrenheit= "<< b;
        break;
        
    case'2':
        double c,d;
        c=KelvinToCelcius(temp);	
        cout<<"\nTemperature conveted in Celcius= "<< c;
        d=KelvinToFahrenheit(temp);
        cout<<"\nTemperature conveted in Fahrenheit= "<< d;
        break;
        
     case'3':
        double e,f;
        e=FahrenheitToCelcius(temp);	
        cout<<"\nTemperature conveted in Celcius= "<< e;
        f=FahrenheitToKelvin(temp);
        cout<<"\nTemperature conveted in Kelvin= "<< f;
        break;
    
    default:
    	cout<<"Invalid unit!";
    	break;
}
   // getch();
	return 0;
}

double CelciusToKelvin(double t){
	double a=t+273.15;
	return a;
}

double CelciusToFahrenheit(double t){
	double b=(t*9/5)+32;
	return b;
}

double KelvinToCelcius(double t){
	double a=t-273.15;
	return a;
}

double KelvinToFahrenheit(double t){
	double b,c;
	b=KelvinToCelcius(t);
	c=(b*9/5)+32;
	return c;
}
	
double FahrenheitToCelcius(double t){
	double b=(t-32)*5/9;
	return b;
}	
	
double FahrenheitToKelvin(double t){
	double b,c;
	b=FahrenheitToCelcius(t);
	c=b+273.15;
	return c;
}


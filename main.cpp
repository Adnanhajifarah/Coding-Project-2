#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  
  // Write your code for problem 1 below.
  /*defining max tank capacity and how many miles the car can drive on a full tank*/
  int maxcapacity;
  int milesonfull;
  std::cout<<"please enter the number of gallons of gas the car can hold "<<endl;
  std::cin>> maxcapacity;
  std::cout<<"please enter number of miles that the car can be driven on a full  tank "<<endl;
  std::cin>> milesonfull;
  //calculating and displaying the miles per gallon
  double mpg = milesonfull/maxcapacity;
  std::cout<<endl<<"Your car can drive "<<mpg<<" miles per gallon. "<<endl;
  // Write your code for problem 2 below.
  //declaring radius and height
  double r;
  double h;
  //prompting the user to enter height and radius
  std::cout<<endl<<"please enter the radius of the cylinder"<<endl;
  std::cin>>r;
  std::cout<<"please enter the height of the cylinder"<<endl;
  std::cin>>h;
  //declaring, calculating, and displaying the surface area
  double surface;
  const double PI = 3.14159;
  surface= (2 * PI * r * h) + (2 * PI * (r * r));
  std::cout<<endl<<"the surface area of the cylinder is "<<surface<<". "<<endl;
  // Write your code for problem 3 below.
  /* define the amount of cookies in the bag the amount of calories per serving, and the amount of servings*/
  int ckeinbag=30;
  int servcal= 300;
  int servings=10;
  /*calculating the amount of calories per cookie and defining it as calperckc and calculating the cookies in one serving and defining it as servsize*/
 int servsize= ckeinbag / servings;
 int calperckc= servcal / servsize;
/*asking the user for the amount of cookies eaten then calculating and displaying the amount of calories eaten*/
cout<<endl<<" How many cookies did you eat? "<<endl;
int ckcsate;
cin>>ckcsate;
int cal= ckcsate * calperckc;
cout<<endl<<"You ate "<< cal <<" calories."<<endl;
  // Write your code for problem 4 below.
  // defining celcius and Farenheit as F an C
  int C;
  int F;
  //asking the user for the temperature in celcius
  cout<<endl<<"Enter the Temperature in Celcius."<<endl;
  cin>>C;
  //Calculating the temp in Farenheit then displaying it
  F=((9.0/5.0) * C) + 32;
  cout<<endl<<C<<" degrees Celcius is "<< F<<" degrees Farenheit."<<endl;
  // Write your code for problem 5 below.
  /* Declare the two numbers that will be added and ask the user to define them*/
  int a;
  int b;
  cout<<endl<<"type in the first number"<< endl;
  cin>>a;
  cout<<endl<<"type in the second number"<<endl;
  cin>>b;
  /*Display the equation and pause for the user to do the math*/
cout<<endl<<setw(4)<<a<<endl<<setw(4)<<b<<endl<<setw(4)<<"+___"<<endl;
char ent;
cout<<endl<<"press enter when you are ready to see the answer"<<endl<<endl;
cin.get(ent);
int ans=a + b;
cout<<endl<<setw(4)<<a;
cout<<endl<<setw(4)<<b;
cout<<endl<<setw(4)<<"+___";
cout<<endl<<setw(4)<<ans<<endl;
  
}
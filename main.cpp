#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  
  // Write your code for problem 1 below.
  /*defining max tank capacity and how many miles the car can drive on a full tank*/
  
  int maxcapacity;
  int milesonfull;
  cout<<"please enter the number of gallons of gas the car can hold "<<endl;
  cin>> maxcapacity;
  cout<<"please enter number of miles that the car can be driven on a full  tank "<<endl;
  cin>> milesonfull;
  //calculating and displaying the miles per gallon
  double mpg = milesonfull/maxcapacity;
  cout<<endl<<"Your car can drive "<<mpg<<" miles per gallon. "<<endl;
  // Write your code for problem 2 below.
  //declaring radius and height
  double r;
  double h;
  //prompting the user to enter height and radius
  cout<<endl<<"please enter the radius of the cylinder"<<endl;
  cin>>r;
  cout<<"please enter the height of the cylinder"<<endl;
  cin>>h;
  //declaring, calculating, and displaying the surface area
  double surface;
  const double PI = 3.14159;
  surface= (2 * PI * r * h) + (2 * PI * (r * r));
  cout<<endl<<"the surface area of the cylinder is "<<surface<<". "<<endl;
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

cout<<endl<<setw(4)<<a<<endl<<"+"<<setw(3)<<b<<endl<<setw(4)<<"___"<<endl;
char ent;
cout<<endl<<"press enter when you are ready to see the answer"<<endl<<endl;
cin.ignore(1);
cin.get(ent);
int ans=a + b;
cout<<endl<<setw(4)<<a;
cout<<endl<<"+"<<setw(3)<<b;
cout<<endl<<setw(4)<<"___";
cout<<endl<<setw(4)<<ans<<endl;

//assignment 3 part 2 


cout<<setw(40)<<"FoodStore"<<endl;
cout<<setw(45)<<"2322 Business Lane"<<endl;
cout<<setw(47)<<"Atlanta, Georgia 30038";
cout<<setw(59)<<"Receipt"<<endl;

cout<<endl<<endl<<setw(38)<<"Items"<<endl;

cout<<"___________________________________________________________________";
cout<<"___________________________________________________________________"<<endl;
cout<<"|"<<"Burger"<<setw(60)<<"$13.80|"<<endl;
cout<<"|"<<"Wings "<<setw(60)<<"$10.39|"<<endl;
cout<<"|"<<"Sprite"<<setw(60)<<"$3.49|"<<endl;
cout<<"|     "<<setw(61)<<"     |"<<endl;
cout<<"|     "<<setw(61)<<"     |"<<endl;
cout<<"|"<<"Tax  "<<setw(61)<<"$2.97|"<<endl;
cout<<"|"<<"Service Fee"<<setw(55)<<"$4.16|"<<endl;
cout<<"|"<<"Delivery Fee"<<setw(54)<<"$1.49|"<<endl;
cout<<"|"<<"Tip  "<<setw(61)<<"$6.54|"<<endl;
cout<<"|     "<<setw(61)<<"     |"<<endl;
cout<<"|     "<<setw(61)<<"     |"<<endl;
cout<<"|"<<"Total"<<setw(61)<<"|";
cout<<"|"<<"$42.92"<<setw(60)<<"|";
cout<<"___________________________________________________________________";
cout<<"___________________________________________________________________"<<endl;
}
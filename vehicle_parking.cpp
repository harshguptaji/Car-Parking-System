#include<iostream>
#include<cstdlib>
#include<fstream>
#include<istream>
#include<ctime>
using namespace std;
void insert_car(int car,int count,int c[])
{
int var1=0,var2=0;
var1 = count;
var2 = count;
if(var1<car)
{
c[var1] = var1 + 1;
}
cout<<"\ntotal number of cars : "<<count + 1<<endl;
}
void insert_bike(int bike,int count1,int b[])
{
int var1=0,var2=0;
var1 = count1;
var2 = count1;
if(var1<bike)
{
b[var1] = var1 + 1;
}

cout<<"\ntotal number of bike : "<<count1 + 1<<endl;
}


int main()
{
int i,car,bike,n,count = 0,count1 = 0,total_car_price = 0,total_bike_price = 0;
cout<<"enter the size of the parking of car :  ";
cin>>car;
cout<<"enter the size of the parking of bike : ";
cin>>bike;
int c[car],b[bike];
starting:
{
cout<<"\nWELCOME TO OUR  AVON PARKING  COMPANY"<<endl;
cout<<"\n---------------MENU-------------------\n"<<endl;
cout<<"1 . MONEY OF PARKING OF CAR IS 50"<<endl;
cout<<"2. MONEY OF PARKING OF BIKE IS 30"<<endl;
cout<<"please enter 1 for parking of car "<<endl;
cout<<"please enter 2 for parking of bike "<<endl;
cout<<"please enter 3 for removing a car  "<<endl;
cout<<"please enter 4 for removing bike  "<<endl;
cout<<"please enter 0 for exit from the system "<<endl;
cout<<"please enter 5 for present total profit "<<endl;
cout<<"please enter 6 for storing data of parking "<<endl;
cin>>n;
switch(n)
{
case 1:
{
insert_car(car,count,c);
total_car_price += 50 ;
count++;
break;
}
case 2:
{
insert_bike(bike,count1,b);
total_bike_price += 30;
count1++;
break;
}
case 3:
{
count--;
break;
}
case 4:
{
count1--;
break;
}
case 5:
{
cout<<"\ntotal profit in car is : "<<total_car_price<<endl;
cout<<"total profit in bike is : "<<total_bike_price<<endl;
break;
}
case 6:
{
time_t now = time(0);
char* dt = ctime(&now);
ofstream reg("parking_details.txt",ios::app);
reg<<"----------------"<<dt<<"-------------"<<"\nTOTAL NUMBER OF PARKING PLACE FOR CAR "<<car<<"\n TOTAL NUMBER OF PARKING PLACE FOR BIKE : "<<bike<<"\nNUMBER OF CARS PRESENT IN PARKING : "<<count <<"\nNUMBER OF BIKES PRESENT IN PARKING : "<<count1 <<"\nTOTAL NUMBER OF PROFIT IN CAR : "<<total_car_price<<"\nTOTAL NUMBER OF PROFIT IN BIKE : "<<total_bike_price<<endl;
exit(10);
break;
}
case 0:
{
exit(10);
break;
}
default:
{
cout<<"\nYOU HAVE ENTERED WRONG CASE PLEASE TYPE IT AGAIN : "<<endl;
goto starting;
}
}
}
goto starting;
return 0;
}
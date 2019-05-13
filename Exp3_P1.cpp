#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int i, n;
float array[10], sum = 0, ave, tot, minimum, maximum;

for(i = 0; i < 10; ++i)
{
cout<<"Enter Number "<<i + 1<<" : ";
cin>> array[i];
sum += array[i];
}
for(i=1; i<10; ++i)
{
if(array[0] < array[i]) (array[0] = array[i]);
maximum = array[0];
}
for(i = 1;i < 10; ++i)
{
if(array[0] > array[i]) (array[0] = array[i]);
minimum = array[0];
}
ave = sum / 10;
tot= sum;
cout << "The Largest element is: " <<maximum<<endl;
cout<<"The smallest element is: "<<minimum<<endl;
cout<<"The total sum of the elements is: "<<tot<<endl;
cout<< "The Average of all the elements: "<<ave<<endl;
getch();
return 0;
}



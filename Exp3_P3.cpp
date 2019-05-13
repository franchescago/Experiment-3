#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	
int val;
char i,j,temp, array[100];

cout <<"Array Size:";
cin>>val;

cout<<"Enter Elements:"<<endl;

for (i=0; i<val; i++)
{
cin>>array[i];
}cout<<"Sorting Entered Elements"<<endl;
for(i = 0; i<val ; i++)
{
for (j = i+1 ; i<val ; i++)
{


for(j = i+1 ; j<val ; j++)
{	
if (array[i] > array[j])
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
}}}}
cout<<"List of Array: { ";
for (i=0;i<val;i++)
{
cout<<array[i]<<",";
}
getch();
return 0;
  }


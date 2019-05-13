#include<iostream>
#include<conio.h>

using namespace std;

const int province = 3;
const int day = 7;
int main()
{
	
int deg[province][day];

cout<< "Enter the temperature for a week in each Provinces. \n";

for(int i = 0; i<province; ++i)
{for(int j = 0; j<day; ++j)
{

cout<<"Province "<< i + 1<<", Day "<< j + 1<<" : ";
cin>> deg[i][j];
}
}
cout<<"Week Temperature:\n";

for (int i = 0; i < province; ++i)
{

for(int j = 0; j < day; ++j)
{
cout<<"Province "<<i+1<<" Day "<<j+1<<" = "<<deg[i][j]<<endl;
}

}

getch ();
return 0;
}

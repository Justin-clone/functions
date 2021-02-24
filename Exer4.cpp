#include <iostream>
#include <conio.h>
using namespace std;
int find_Oddeven(int);
int main()
{
    int num;
    cout << "Enter a number to ceck odd or even" << endl;
    cin>>num;
    find_Oddeven(num);
    getch();
    return 0;
}

int find_Oddeven(int num){
if(num%2==0)
  cout<<num<<"is an even";
else
    cout<<num<<"is an odd";
}

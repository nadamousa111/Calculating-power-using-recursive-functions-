#include <iostream>

using namespace std;

int powerEquation1(int a, int n){
if(n<0) return 0;
if (n==0)
    return 1 ;
else
    return a*powerEquation1(a,n-1) ;

}

int powerEquation2(int a, int n){

if(n<0)return 0;
if (n==1)
    return a ;

 int result = powerEquation2(a,n/2) ;
result = result * result ;

 if (n%2==1)
    result = result*a ;

    return result ;
}



int main()
{

  int number , powerOfNumber ;
  cout << "Enter the number" ;
  cin >> number ;
  cout << "Enter the power" ;
  cin >>  powerOfNumber ;
  cout <<"the result of the first equation is" <<' ' << powerEquation1(number,powerOfNumber)<< endl ;
  cout << "Enter the number" ;
  cin >> number ;
  cout << "Enter the power" ;
  cin >>  powerOfNumber ;
  cout <<"the result of the second equation is" <<' ' << powerEquation2(number,powerOfNumber)<< endl ;

    return 0;
}

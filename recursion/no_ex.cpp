#include <iostream>
using namespace std;

// write a function that takes in a number and print it
// print first 5 numbers: 1 2 3 4 5

int number(int n)
{
  cout<<n <<" \n" ;
  // if(n==5){
  if (n == 0)
  {

    return ;
  }
  number(n-1);

}

int main()
{

  number(5);

  return 0;
}

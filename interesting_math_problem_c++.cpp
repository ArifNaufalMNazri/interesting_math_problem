#include <iostream>
#include <string>
using namespace std;

int f(int a, int b){
  int x = a;
  int y = b;

  while(true){

    if(x > y){
      x = x - y;
    }
    else if(y > x){
      int xr = x;
      x = y - x;
      y = xr;
    }
    else{
      break;
    }
  }

  return x;
}

int main(){
  int a;
  int b;

  cout<<"A function f for any two positive integers a and b is defined as:\n f(a, b)="<<endl;
  cout<<" a if a = b\n f(a - b, b) if a > b\n f(b - a, a) if a < b"<<endl;
  while(true){
    cout<<"Enter a: ";
    cin >>a;
    if(cin.fail()){
      cout<<"Invalid value. Try again."<<endl;
      cin.clear();
      cin.ignore(100, '\n');
    }
    else{
      break;
    }
  }

    while(true){
    cout<<"Enter b: ";
    cin >>b;
    if(cin.fail()){
      cout<<"Invalid value. Try again."<<endl;
      cin.clear();
      cin.ignore(100, '\n');
    }
    else{
      break;
    }
  }

  cout<<"The answer is: "<<f(a, b)<<"\n";

  return 0;

}
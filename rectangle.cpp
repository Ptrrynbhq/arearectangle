#include <iostream>
#include "./header/formula.h"

using namespace std;

int main (){
  
  int pSize = 100;
  int lSize = 50 ;
  float pFSize = 100;
  float lFSize = 50 ;


  cout<<"using header function for integer :> "<<iRectangle(pSize,lSize)<<"\n";
  cout<<"using header function for float   :> "<<fRectangle(pFSize,lFSize)<<"\n\n";

  for (int i=50;i<1000;i=i+50)
   cout << "luas(" << i <<",50)= " << i*50 << endl;

 
 
return 0;
}

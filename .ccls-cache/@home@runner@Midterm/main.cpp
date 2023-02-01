#include <iostream>
#include <cmath>

using namespace std;

 int main (){

  float sumarr=0;// you can just declare datatypes 
  float beta [40] {};
  for(int  index=0; index <20; index++)//index can't be greater than 40 //start at 0  go to 40
    // want the value of the index itself, not the value 
   beta [index]= pow( index , 2);
   
for (int index=20; index <40; index ++)
  beta [index]= pow (index,3 );
  
for (int index=0;index <40; index++)
  sumarr+= beta[index];
  cout<< sumarr<<endl;
   


return 0;
 }
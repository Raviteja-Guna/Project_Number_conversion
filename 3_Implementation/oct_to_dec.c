#include"number.h"
int oct_to_dec(int oct) {
      // CHECKING INPUT IS IN OCTAL FORM
 int decimal=0,i=0,num,ans,check=oct;
while(check!=0) {
num=check%10;
if(num>7){
 return -1; }
else{
check=check/10;
}
}
while(oct!=0)
{
ans=oct % 10;
decimal = decimal + ans * pow(8,i);
    i++;
    oct = oct/10;
    }
    return decimal;
}

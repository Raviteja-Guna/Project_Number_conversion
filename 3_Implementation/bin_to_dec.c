#include"number.h"
int bin_to_dec(char * s) {

int i,j,num_int=0,rem_int=0;

char a[strlen(s)];
for(i=0,j=0;i<strlen(s);i++) {
        if(s[i]!='0' && s[i]!='1'&& s[i]!='.'){
          return -1;   }
           a[j++]=s[i]-48;}
num_int=j;
for(j=0,i=num_int-1;j<num_int;j++,i--) {
    rem_int=rem_int+(a[j] * pow(2,i));   }

return rem_int;
}



 

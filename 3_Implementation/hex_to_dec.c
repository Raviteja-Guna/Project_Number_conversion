#include"number.h"
#include<ctype.h>
//This function converts Hexadecimal number to decimal number
int hex_to_dec(char *s) {

int op,i,j,k,num_int=0,rem_int=0,rem;
float rem_frac=0.0;
char a[strlen(s)],b[strlen(s)];
for(i=0,j=0,k=0;i<strlen(s);i++) {
        if(isxdigit(s[i])==0){
          return -1; }
       rem = s[i];
        if(rem>=48 && rem<=57)
             rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
               rem = rem-87;
        a[j++]=rem;
            }
num_int=j;
for(j=0,i=num_int-1;j<num_int;j++,i--) {
    rem_int=rem_int+(a[j] * pow(16,i));   }
return rem_int;
}


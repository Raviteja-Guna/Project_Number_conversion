#include"number.h"
int bin_to_dec(char * s) {

int i,j,k,num_int=0,num_fra=0,flag=0,rem_int=0;
float rem_frac=0.0;

char a[strlen(s)],b[strlen(s)];
for(i=0,j=0,k=0;i<strlen(s);i++) {
        if(s[i]!='0' && s[i]!='1'&& s[i]!='.'){
          return -1;   }
           a[j++]=s[i]-48;}
num_int=j; num_fra=k;
for(j=0,i=num_int-1;j<num_int;j++,i--) {
    rem_int=rem_int+(a[j] * pow(2,i));   }
for(k=0,i=1;k<num_fra;k++,i++)  { rem_frac= rem_frac +(b[k]/pow(2,i)); }
rem_frac= rem_int+rem_frac;
return rem_int;
}

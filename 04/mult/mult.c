#include <stdio.h>

/*
R0=1
while (1){
    R0=R0+1;
}*/

int main(){
    int R0 = 1;
    //while (1){
LOOP:
     R0=R0+1;
     printf("R0=%d\n",R0);
     goto LOOP;
    //}
}

R2=R0*R1
@5
D=A
@0
M=D
(loop)
@2
D;JLE  //if R0>0


@3
D=A
@1
M=D



if



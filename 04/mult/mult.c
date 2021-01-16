#include <stdio.h>

int main() {
    int R0 = 5;
    int R1 = 3;
    int R2 = 0;
loop:    
    // while (R0 > 0) { //
    if (R0<=0) goto endLoop; 
      R2 = R2 + R1;             //用加法實現乘法
      R0 = R0 - 1;
      printf("R0=%d R1=%d R2=%d\n", R0, R1, R2);
    // }
    goto loop;
endLoop:    
    printf("R2=%d\n", R2);
}


/*
R0=1
while (1){
    R0=R0+1;
}

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
M=D/*



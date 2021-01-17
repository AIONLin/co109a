// 參考老師與網路上其他解答後 寫出來的 以課堂上的5*3當例子
#include <stdio.h>

int main() {
    int R0 = 5;      
    int R1 = 3;
    int R2 = 0;  //15
loop:    
    // while (R0 > 0) { //
    if (R0<=0) goto endLoop; 
      R2 = R2 + R1;             //用加法實現乘法
      R0 = R0 - 1;              // 加過後-1
      printf("R0=%d R1=%d R2=%d\n", R0, R1, R2);
    // }
    goto loop;
endLoop:    
    printf("R2=%d\n", R2);
}



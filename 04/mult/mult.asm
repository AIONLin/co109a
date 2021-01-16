// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/04/Mult.asm

// Multiplies R0 and R1 and stores the result in R2.
// (R0, R1, R2 refer to RAM[0], RAM[1], and RAM[2], respectively.)

// Put your code here.


//#include <stdio.h>

//int main() {
//    int R0 = 5;               
//    int R1 = 3;
//    int R2 = 0;  //15

@R0
D=A
@R2
M=D 


// LOOP 開始要縮排直到跳出
//loop:    
    (loop)
//    // while (R0 > 0) { //
//    if (R0<=0) goto endLoop; 
    @0
    D=M 
    @endLoop
    D;JLE

//      R2 = R2 + R1;             //用加法實現乘法

    @1
    D=M
    @2
    M=D+M


//      R0 = R0 - 1;              // 加過後-1

    @0 
    M=M-1

//      printf("R0=%d R1=%d R2=%d\n", R0, R1, R2);
//    // }
//    goto loop;

    @loop 
    0;JMP

//endLoop: 
(endLoop)  
@endLoop 
0;JMP 
//    printf("R2=%d\n", R2);
//}
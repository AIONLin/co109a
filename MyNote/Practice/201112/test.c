WHILE1:                 //(WHILE1)
  int i = 16384;        //  @16384, D=A , @i, M=D

  WHILE2:
    if (i >= 24576)     //  @24576, D=A, @i, D=D-M
      goto WEND2;
    int color = 0;
    if (M[24576]==0)
      goto NEXt;
    color = -1;
  NEXT:
    M[i] = color;
    i++;
    goto WHILE2;
  WEND2:

  gotot WHILE1; 
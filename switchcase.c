 #include <math.h>
 #include <stdio.h>

 void main()
 {
    int a, b, sum, sub, multi, div;
    char operator;
    printf("Enter operator:");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%d %d", &a, &b);
    switch(operator)
    {
      case '+' : sum = a+b;
      printf("sum = %d", sum);
      break;
      case '-' : sub = a-b;
      printf("sub = %d", sub);
      break;
      case '*' : multi = a*b;
      printf("multi = %d", multi);
      break;
      case 'div' : div = a/b;
      printf("div = %d", div);
      break;
    }
    
 }
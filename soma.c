   #include <stdio.h>
   int main(){
   int a, b,c, d, e;
   
   printf("Digite tres números inteiros:\n");
    //Entrada
   scanf("%d %d %d", &a, &b, &d);
    
    //Processamento
    c = a + b;
    e = c * d;
    printf("A soma de a + b = %d", c);
    printf("\n");
    printf("A multiplicação de c * d = %d", e);
    return 0;
    
}

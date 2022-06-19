#include <stdio.h>
#include <math.h>

int main() {

  int num;
  printf("Digite um numero");
  scanf("%d", &num);

  if((num % 3 == 0) && (num % 7 == 0)){
    printf("\nO numero %d e divisil por 3 e 7\n", num);
    } else {
     printf("\nO numero %d nao e divisivel por 3 e  7\n",num);
    }
    
  return 0;
}
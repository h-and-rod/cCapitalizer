#include <stdio.h>
#define length 16

int main(){
	char palavra[length], palavraMaiuscula[length];
	int i;
	
	printf("Insira uma palavra em letras minusculas! ");
	scanf("%s", palavra);
	
	for(i=0;i<length;i++){
		if(palavra[i] == '\0'){
			i = length;
		}else{
		palavraMaiuscula[i] = palavra[i] - 32;
		}
	};
	palavraMaiuscula[i] = '\0';
	
	printf("%s", palavraMaiuscula);
	
	return 0;
}

/* 
1) Fa�a um algoritmo que leia 3 valores e preencha dois vetores diferentes.
Fa�a um terceiro vetor receber a soma dos elementos das mesmas posi��es dos dois vetores anteriores.
Imprima os 3 vetores. Use ponteiros!
*/
#include <stdio.h>
#include <locale.h>
#define MAX 3

main(void){
	setlocale(LC_ALL, "Portuguese");
	int i, vet1[MAX], vet2[MAX], vet3[MAX], *vetor2, *vetor3;
	
	for(i=0; i<MAX; i++){
	printf("Forne�a o %d� valor do 1� vetor: ", i+1);
	scanf("%d", &vet1[i]);
	fflush(stdin);
}
printf("\n\n");
for(i=0; i<MAX; i++){
	printf("Forne�a o %d� valor do 2� vetor: ", i+1);
	scanf("%d", &vet2[i]);
	fflush(stdin);
}
printf("\n\n");
 	printf("Vetor 1:   Vetor 2:   Vetor 3:\n");
 	for(i=0;i<MAX;i++){
 		vet3[i] = vet1[i]+vet2[i];
 		vetor2 = &vet2[i];
 		vetor3 = &vet3[i];
	    printf("%d     +     %d     =     %d\n", vet1[i], *vetor2, *vetor3);
	 }
}

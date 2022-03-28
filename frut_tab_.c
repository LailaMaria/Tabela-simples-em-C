#include <stdio.h>
#include <stdlib.h>

void sup(){	int i;
	printf("%c", 201);
	for (i=0; i<10; i++) printf("%c", 205);
		printf("%c", 203);
	for (i=0; i<16; i++) printf("%c", 205);
		printf("%c", 203);
	for (i=0; i<12; i++) printf("%c", 205);
		printf("%c", 203);
	for (i=0; i<15; i++) printf("%c", 205);
		printf("%c", 187);	}

void inf(){	int i;
	printf("%c", 200);
	for (i=0; i<10; i++) printf("%c", 205);
		printf("%c", 202);
	for (i=0; i<16; i++) printf("%c", 205);
		printf("%c", 202);
	for (i=0; i<12; i++) printf("%c", 205);
		printf("%c", 202);
	for (i=0; i<15; i++) printf("%c", 205);
		printf("%c", 188); }

void meio(){ int i;
	for (i=0; i<10; i++) printf("%c", 205);
		printf("%c", 206);
	for (i=0; i<16; i++) printf("%c", 205);
		printf("%c", 206);
	for (i=0; i<12; i++) printf("%c", 205);
		printf("%c", 206);
	for (i=0; i<15; i++) printf("%c", 205);
		printf("%c", 185); }

int main(){
	
	int qu, qb, qp;
	float vu, vb, vp, sub_t, imp, total;
	
	printf("Informe o valor da uva: ");
	scanf("%f", &vu);
	printf("Informe a quantidade de uva: ");
	scanf("%i", &qu);
	
	printf("Informe o valor da banana: ");
	scanf("%f", &vb);
	printf("Informe a quantidade de banana: ");
	scanf("%i", &qb);
	
	printf("Informe o valor do p%cssego: ", 136);
	scanf("%f", &vp);
	printf("Informe a quantidade de p%cssego: ", 136);
	scanf("%i", &qp);
	
	sub_t = ((vb*qb) + (vu*qu) + (vp*qp));
	imp = (sub_t*0.05);
	total = (imp+sub_t);
		
	system("cls");	
	sup();
	printf("\n%c Produto %2c Pre%co Unit%crio %c Quantidade %c  Pre%co Total  %c \n%c", 186, 186, 135, 134, 186, 186, 135, 186, 204); meio();
	printf("\n%c Banana  %2c R$%12.2f %c %10i %c R$%12.2f%c\n%c", 186, 186, vb, 186, qb, 186, vb*qb, 186, 204); meio();
	printf("\n%c Uva %6c R$%12.2f %c %10i %c R$%12.2f%c\n%c", 186, 186, vu, 186, qu, 186, vu*qu, 186, 204); meio();
	printf("\n%c P%cssego  %c R$%12.2f %c %10i %c R$%12.2f%c\n%c", 186, 136, 186, vp, 186, qp, 186, vp*qp, 186, 204); meio();
	printf("\n%c %10c %16c Sub-Total  %1c R$%12.2f%c\n%c", 186, 186, 186, 186, sub_t, 186, 204); meio();
	printf("\n%c %10c %16c Imposto(5%%)%c R$%12.2f%c\n%c", 186, 186, 186, 186, imp, 186, 204); meio();
	printf("\n%c %10c %16c Total %6c R$%12.2f%c\n", 186, 186, 186, 186, total, 186); inf();
		
	return 0;
} 

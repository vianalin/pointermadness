#include <stdio.h>

int main() {
	//1
	char a = 'a';
	int b = 13;
	long c = 131725;
	
	//2
	printf("hex char: %p\t decimal char: %lu\t", &a, &a);
	printf("hex int: %p\t decimal int: %lu\t", &b, &b);
	printf("hex long: %p\t decimal long: %lu\t", &c, &c);
    
    //3
    char *pa = &a;
    int *pb = &b;
    long *pc = &c;
    
    //4
    printf("pointer char: %c\t int: %d\t long: %ld\n", pa, pb, pc);
    
    //5
    *pa = 'b';
    *pb++;
    *pc--;
    printf("modified char: %c\t int: %d\t long: %ld\n", pa, pb, pc);
    
    //6
    unsigned int d = 578;
    int *pdi = &d;
    char *pdc = &d;
    
    //7
    printf("pdi: %p pdi points to: %c \n", pdi, *pdi);
    printf("pdf: %p pdf points to: %d \n", pdc, *pdc);
    
    //8
    printf("unsigned hex: %x, decimal: %u\n", d, d);
    
    //9
   	for(int i = 0; i < 4; i++) {
   		printf("hex byte: %hhx, dec: %hhu\n", *(d + i), *(d + i));
    }	
    
    //10
    for(int i = 0; i < 4; i++) {
    	*(pdc + i) += 1;
    	printf("unsigned hex: %x\t unsigned decimal: %u\n", d, d);
    	printf("hex: %hhx\t decimal: %hhu\n", (pdc + i), *(pdc + i));
    }
    
    //11
    for(int i = 0; i < 4; i++) {
    	*(pdc + i) += 16;
    	printf("unsigned hex: %x\t unsigned decimal: %u\n", d, d);
    	printf("hex: %hhx\t decimal: %hhu\n", *(pdc +i), *(pdc + i));
    } 
    
    return 0;
}

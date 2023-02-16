#include <cstdio>

int main(){
 // declaraçao as variáveis que vou usar
	int a1, a2, b1, b2;
 
scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
if(a1*a2>b1*b2){
printf("%d\n", a1*a2);
	}
else {
printf("%d\n", b1*b2);
}
return 0;

}
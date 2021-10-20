#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	float x,y,z;
	printf("informe tres valores\n");
	scanf("%f %f %f",&x,&y,&z);

	if(z==y&&z==x&&x==y){
		printf("os tres valores sao iguais");}
	else if(x>y&&x>z){
		printf("X eh o maior");}
	else if(y>x&&y>z){
		printf("Y eh o maior");}
	else if(z>x&&z>y){
		printf("Z eh o maior");}
	else if(x>z&&y>z&&x==y){
		printf("x e y sao os maiores");}
	else if(x>y&&z>y&&z==x){
		printf("X e z sao os maoires");}
	else if(y>x&&z>x&&z==y){
		printf("y e z sao os maiores");}
	else if(x>y&&x>z){
		printf("X eh o maior");}
	else if(x<y&&z<y){
		printf("Y eh o maior");}
	else if(z>x&&z>y){
		printf("Z eh o maior");}
}

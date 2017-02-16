#include<stdio.h>
int main(void) {
int i;
do{
	char cha[99]={},chb[99]={},ca,cb;
	int a=0,b=0,d=1,i=0,j=0,k;
	do{
		ca=getchar();
		switch(ca){
			case 73:case 86:case 88:case 76:
			case 67:case 68:case 77:
				cha[i++]=ca;	break;	
			case 35:	return 0; 
			default:	d=0;						
		}
	}while(d);
	do{
		cb=getchar();
		switch(cb){
			case 73:case 86:case 88:case 76:
			case 67:case 68:case 77:
				chb[j++]=cb;	break;					
		}
	}while(cb!='\n');
	
	for(k=0;k<=i;k++){
 
		if(cha[k]=='M'){
			a+=1000;
			if(cha[k-1]=='C')
			a-=200;			
		}
		else if(cha[k]=='D'){
			a+=500;
			if(cha[k-1]=='C')
			a-=200;			
		}
		else if(cha[k]=='C'){
			a+=100;
			if(cha[k-1]=='X')
			a-=20;			
		}
		else if(cha[k]=='L'){
			a+=50;
			if(cha[k-1]=='X')
			a-=20;			
		}
		else if(cha[k]=='X'){
			a+=10;
			if(cha[k-1]=='I')
			a-=2;			
		}
		else if(cha[k]=='V'){
			a+=5;
			if(cha[k-1]=='I')
			a-=2;			
		}
		else if(cha[k]=='I'){
			a+=1;			
		}		
	}
	for(k=0;k<=j;k++){
 
		if(chb[k]=='M'){
			b+=1000;
			if(chb[k-1]=='C')
			b-=200;			
		}
		else if(chb[k]=='D'){
			b+=500;
			if(chb[k-1]=='C')
			b-=200;			
		}
		else if(chb[k]=='C'){
			b+=100;
			if(chb[k-1]=='X')
			b-=20;			
		}
		else if(chb[k]=='L'){
			b+=50;
			if(chb[k-1]=='X')
			b-=20;			
		}
		else if(chb[k]=='X'){
			b+=10;
			if(chb[k-1]=='I')
			b-=2;			
		}
		else if(chb[k]=='V'){
			b+=5;
			if(chb[k-1]=='I')
			b-=2;			
		}
		else if(chb[k]=='I'){
			b+=1;			
		}	
	}
	d=a-b;
	if(d==0)
		printf("ZERO");
	while(d/1000>0){
		printf("M");
		d-=1000;
	}
	while(d/100==9){
		printf("CM");
		d-=900;
	}
	while(d/500>0){
		printf("D");
		d-=500;
	}
	while(d/100==4){
		printf("CD");
		d-=400;
	}
	while(d/100>0){
		printf("C");
		d-=100;
	}	
	while(d/10==9){
		printf("XC");
		d-=90;
	}
	while(d/50>0){
		printf("L");
		d-=50;
	}	
	while(d/10==4){
		printf("XL");
		d-=40;
	}
	while(d/10>0){
		printf("X");
		d-=10;
	}
	while(d/1==9){
		printf("IX");
		d-=9;
	}
	while(d/5>0){
		printf("V");
		d-=5;
	}	
	while(d/1==4){
		printf("IV");
		d-=4;
	}
	while(d/1>0){
		printf("I");
		d-=1;
	}
	printf("\n");
}while(1);
    return 0;
}


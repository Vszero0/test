#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
	printf("请提供计算表达式：");
	char express [10];
    scanf("%s",express);

	
	//找到运算符
	char* p2 = NULL;
	char ch;
		
	for(int index=0; index<strlen(express); index=index+1){
		ch = express[index];
		if (ch=='*'||ch=='/'||ch=='+'||ch=='-'){
			p2 = express+index;
			*p2 = 0;
			p2=p2+1;
			break;
		}
	}
	
	float f1, f2;
	f1 = atof(express);
	f2 = atof(p2);
	/*printf("%f\n", f1);
	printf("%f\n", f2);*/
	
	if (ch=='*'){
		printf("=%f", f1*f2);
	}
	else if (ch=='/'){
		printf("=%f", f1/f2);
	}
	else if (ch=='+'){
		printf("=%f", f1+f2);
	}
	if (ch=='-'){
		printf("=%f", f1-f2);
	}	 
}

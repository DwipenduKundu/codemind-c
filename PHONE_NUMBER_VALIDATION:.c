#include<stdio.h>
#include<string.h>

int main(){
	
	int len;
	char phnum[20];
	scanf("%[^
]%*c",phnum);
	
	len = strlen(phnum);
	
	if (phnum[0]!= '0'){
		if (len==10){
			printf("Valid
");
		}
		else{
			printf("Invalid
");
		}
	}
	else{
		printf("Invalid
");
	}
	
	return 0;
}
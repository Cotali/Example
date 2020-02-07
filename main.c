#include <stdio.h>
#include <string.h>

typedef struct{
	char name[256];
	char nameOfBank[256];
	long int account;
	char operation[256];
	float amount;
}CLIENT;

int main(){
	
	FILE *fp, *fp2;
	CLIENT client, client2;
	

	fp = fopen("infile", "r");
	if(fp == NULL){
		fprintf(stdout, "no such file\n");
		fclose(fp);
		return 0;
	}	
	fp2 = fopen("infile", "r");

	int num = 0;
	char ch1, ch2;	

	while(1)
	{
		ch1=fscanf(fp, "%s %s %li %s %f", client.name, client.nameOfBank, &client.account, client.operation, &client.amount);
		if(ch1==EOF)
			break;
		//fprintf(stdout, "%s %s %li %s %.2f\n", client.name, client.nameOfBank, client.account, client.operation, client.amount);
		rewind(fp2);
		while(1)
		{
			ch2=fscanf(fp2, "%s %s %li %s %f", client2.name, client2.nameOfBank, &client2.account, client2.operation, &client2.amount);
			if(ch2==EOF)
				break;

			if(strcmp(client.name, client2.name) == 0)
				fprintf(stdout, "%s\n", client2.name);
			//fprintf(stdout, "%s", client2.name);



		}
	}
	

	fclose(fp);
	fclose(fp2);
	return 0;

}

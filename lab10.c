/*#include<stdio.h>
int main(){

    //OVERWRITING
    char data[]=("H\n");
    FILE *ptr = fopen("file.txt","w");
    if(ptr == NULL){
        printf("file not created\n");
    }else{
        fputs(data,ptr);
    }
    fclose(ptr);

    // reading and returning
    FILE *pt = fopen("file.txt","r");
    char ch;
    while((ch = fgetc(pt)) != EOF){
        printf("%c",ch);
    }

    //Position
    printf("previous pos: %ld\n", ftell(pt));
    fseek(pt, 0, SEEK_SET);
    printf("curr pos: %ld\n", ftell(pt));

    fclose(pt);

}*/

#include<stdio.h>
int powe(int n ,int power_no , int *a){
	int power; 
	int *c = &a;
    
	do{
	if(power_no  < 1){
		return power;
	}else{
		power = power * (*c);
		power_no -=1;
		powe(power,power_no, &x);
	}
    }while(power_no > 0);
}
int main(){
	int pow_;
	int num;
	int *ptr;
	int pow_no;
    int x;
	printf(" number: ");
	scanf(" %d", &num);
	printf("\n");
    x = num;
	*ptr = &x;
	printf(" pow_no: ");
	scanf(" %d", &pow_no);
	printf("\n");

	pow_ = powe(num , pow_no , &x);
	printf(" power: %d",pow_);
}
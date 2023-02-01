#include<stdio.h>

main(){

    int i=1;
    int n; 
    
    printf("Enter a number : ");
    scanf("%d",&n);	
    	
    while(i<=n){
    	
    	if(n%2==0){
		printf("%d\n",n);
    	}
    	n--;
    	
	}
}
	
	


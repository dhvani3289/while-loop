#include<stdio.h>

main(){

    int i=1;
    int n,fact=1; 
    
    printf("Enter a number : ");
    scanf("%d",&n);	
    	
    while(i<=n){
    	fact=fact*i;
    	i++;
    }
   
    printf("%d\n",fact);
}
	

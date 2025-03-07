#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
    char songName[50];
    int songNumber;
    struct node *prev;
    struct node *next;
};

typedef struct node n;



int main()
{
	char c;
	int z,k;
    int x=1;
    int i=1;
    n *root=(n*)malloc(sizeof(n));
    n *iter=root;
    n *temp;
    n *l=root;
    n *temp1=root;
    char end[] = "-1";
    char list[10];
    gets(root->songName);
    x=strcmp(iter->songName,end);
    root->songNumber=i;
    while(x!=0){
        iter->next=(n*)malloc(sizeof(n));
        iter->next->prev = iter;
        iter=iter->next;
        i=i+1;
        iter->songNumber=i;
        gets(iter->songName);
        x=strcmp(iter->songName,end);
        
    }
     temp=iter;
    iter->next=NULL;
    root->prev=NULL;
    while (l->next != NULL) {
        l = l->next;
    	
	}
	if (l->prev != NULL) {
        l->prev->next = NULL;
        free(l);
    }
    
    iter=root;
    scanf("%c %d",&c,&z);
    if(c=='F'){
    	
    	while(iter->next!=NULL){
    	if(iter->songNumber%z==1){
    		puts(iter->songName);
    	
		}
			iter=iter->next;
	}
    	
	}
   else if(c=='L'){
   	
   	k=(temp->songNumber-1)%z;
   	while(temp->prev!=NULL){
   		if(temp->songNumber%z==k){
   			puts(temp->songName);
		   }
		   temp=temp->prev;
	   }
   	
   }
   else{
   	printf("Invalid");
   }
    return 0;
}
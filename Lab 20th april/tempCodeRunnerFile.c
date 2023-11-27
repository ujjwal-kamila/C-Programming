#include<stdio.h>
#include<string.h>

typedef struct adress
{
    char name[1000];
    int houseNo;
    int block;
    char city[1000];
    char state[1000];
}adress;

void printAdd(adress add){
    printf("name = %s\n",add.name);
    printf("House No : %d\n",add.houseNo);
    printf("block : %d\n",add.block);
    printf("city : %s\n",add.city);
    printf("state : %s\n",add.state);
    
}

int main(){
    adress adds[5];

    for(int i = 0; i<5; i++){
        printf("enter info for person %d\n",i+1);
        printf("enter name : ");
        scanf("%s", adds[i].name);
        printf("enter House No : ");
        scanf("%d", adds[i].houseNo);
        printf("enter block : ");
        scanf("%d", adds[i].block);
        printf("enter city : ");
        scanf("%s", adds[i].city);
        printf("enter state : ");
        scanf("%s", adds[i].state);
    }
    for(int i = 0; i<5; i++){
        printAdd(adds[i]);
    }
    return 0;
}
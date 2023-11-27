#include<stdio.h>
#include<string.h>
typedef struct empDetail 
{
    int id;
    char name[100];
    char deperment[100];
    float salary;
}ed;
void main(){
    ed empy[10];
    for(int i = 0; i<10; i++){
        printf("enter info for Employee %d\n",i+1);
        printf("enter employee id : ");
        scanf("%d", &empy[i].id);
        printf("enter employee name : ");
        scanf("%s", empy[i].name);
        printf("enter department : ");
        scanf("%s", empy[i].deperment);
        printf("enter salary : ");
        scanf("%f", &empy[i].salary);
    }
    for(int i = 0; i<10; i++){
        printf("id = %d\n",empy[i].id);
        printf("name = %s\n",empy[i].name);
        printf("department : %s\n",empy[i].deperment);
        printf("salary : %f\n",empy[i].salary);
        printf("\n");
    }
}
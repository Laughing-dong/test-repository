#include"stdio.h"

int main(){
    int num=1;
    // switch(num){
    //     case 1:
    //     printf("1\n");
    //     //break;
    //     case 2:
    //     printf("2\n");
    //     //break;
    //     case 3:
    //     printf("3\n");
    //     break;
    //     case 4:
    //     printf("4\n");
    //     break;
    //     default:
    //     printf("none\n");
    //     break;

    // }

    char ch[32]="";
    printf("size=%d\n",sizeof(ch));
    scanf("%s",ch);
    printf("size=%d\n",sizeof(ch));
    for(int i=0;i<31;i++){
        printf("ch=%c\n",ch[i]);
    }
    int *p=&num;
    printf("sizeof(p)=%d\n",sizeof(p));
    printf("ch=%s\n",ch);
    return 0;
}
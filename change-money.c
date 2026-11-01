#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("请输入商品价格\n");
    scanf("%d",&a);
    printf("请输入票面\n");
    scanf("%d",&b);
    if(b>a){
        printf("找您%d元",b-a);
    }else{
         printf("钱不够");
    }
    return 0;
}

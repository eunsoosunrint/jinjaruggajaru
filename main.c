#include <stdio.h>
#include <string.h>

void toLowercase(char *a) {
    for (int i=0; i<7; i++) {
        if('A' <= a[i] && a[i] <= 'Z') {
            a[i] += 32;
        }
    }
}

int main(void) {
    int len;
    scanf("%d", &len);

    int ggajaru = 0;
    int right = 0;
    for(int i =0; i<len; i++) {
        char ipt[8];
        scanf("%s", ipt);
        toLowercase(ipt);

        if(strcmp(ipt, "jinjaru")==0) {
            if(0<ggajaru) {
                right += ggajaru%2==0?1:-1;
                ggajaru = 0;
            }
            right++;
            printf("jinjaru 1\n");
        }else if(strcmp(ipt, "ggajaru")==0) {
            ggajaru++;
            printf("ggajaru %d\n", ggajaru%2==0?1:-1);
        }
    }
    if(0<ggajaru) right += ggajaru%2==0?1:-1;
    printf("%d", right);
    return 0;
}

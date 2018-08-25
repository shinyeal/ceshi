/*************************************************************************
	> File Name: 1004.c
	> Author: xinyue
	> Mail: shinyeal9@yeah.net
	> Created Time: 2018年08月25日 星期六 13时21分21秒
 ************************************************************************/

#include <stdio.h>
#define MAX 10000

int main() {
    int a, b, c, n;
    int num;
    scanf("%d", &num);
    //scanf("%d %d", &n, &a);
    while(num--) {

        scanf("%d %d", &n, &a);
        if(n == 0 || n > 2) {
            printf("-1 -1");
            continue;
        }
        
        if(n == 1) {
            for(b = 1; b <= MAX; b++) {
                c = a + b;
                printf("%d %d\n", b, c);
                break;
            }
            continue;
        }
        
        if(n == 2) {
            for (int i = 1; i < 32; i++) {
                for (int j = i + 1; j < 32; j++) {
                    b = 2 * i * j;
                    c = j * j + i * i;
                    if (a * a + b * b == c * c) {
                        printf("%d %d\n", b, c);
                        
                    }
                }
                break;
            }
            //continue;
        }
        //num--;
    }
    return 0;
}

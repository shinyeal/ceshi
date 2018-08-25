/*************************************************************************
	> File Name: 1003.c
	> Author: yufangze
	> Mail: 2224590123@qq.com
	> Created Time: 2018年08月25日 星期六 15时42分48秒
 ************************************************************************/

#include <stdio.h>
#define MAX 1500

/*int prime[MAX + 5] = {0};
int is_prime[MAX + 5] = {0};
void init() {
    is_prime[0] = 1;
    is_prime[1] = 1;
    for(int i = 2; i < MAX; i++) {
        if(!is_prime[i])
            prime[++prime[0]] = i;

        for(int j = 1; j <= prime[0]; j++) {
            if(i * prime[j] > MAX) break;
            is_prime[i * prime[j]] = 1;
            if(i % prime[j] == 0) break;
        }
    }
    return;
}
*/
int main() {

    //init();
    //printf("ok");
    int num, p;
    //int ans[MAX * 2][MAX];
    int ans;
    scanf("%d", &num);
    while(num--) {
        scanf("%d", &p);
       // if(is_prime[p] == 0) {
            for(int i = 1; i <= 2 * p; i++) {
                for(int j = 1; j <= p; j++) {
                    if(i <= p ) {
                        ans = (i - 1) + (j - 1);
                        if(ans >= p) {
                       while(ans >= p) {
                                
                                ans %= p;
                            }
                    } else {
                        ans = (i - 1) * (j - 1);
                        if(ans >= p) {
                            while(ans >= p) {
                                
                                ans %= p;
                            }
                        }
                    }
                    //printf("%d ", ans[i][j]);
                    if(j == p){
                        printf("%d\n",ans);
                    } else {
                        printf("%d ",ans);
                    }
                }
                    //printf("\n");
            }
       // }

       // for(int i = 1; i <= 2 * p; i++) {
       //     for(int j = 1; j <= p; j++) {
       //         printf("%d ", ans[i][j]);
       //     }
       //     printf("\n");
       // }
    }
    return 0;
}

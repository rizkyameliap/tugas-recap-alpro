# include <stdio.h>

int main(){
    int s1,t1;
    int v1,t2;
    int s2,v2;

    scanf("%d %d", &s1, &t1);
    scanf("%d %d", &v1, &t2);
    scanf("%d %d", &s2, &v2);

    float V= (float) s1/t1;
    float S= (float) v1*t2;
    float T= (float) s2/v2;

    printf("%f\n",V);
    printf("%f\n",S);
    printf("%f\n",T);

    return 0;
}
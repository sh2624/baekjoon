// [브론즈 3] 25285 - 심준의 병역판정검사

#include <stdio.h>

int main(void)
{
    int n;
    double height, weight;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        // 신장, 체중 입력
        scanf("%lf %lf", &height, &weight);
        double bmi = weight / (height * height) * 10000; // 신장은 m 기준

        // 신장/bmi 조건에 따른 등급 출력
        if (height < 140.1)
            printf("6 \n");
        else if (140.1 < height && height < 146)
            printf("5 \n");
        else if (146 <= height && height < 159)
            printf("4 \n");
        else if (159 <= height && height < 161)
        {
            if (16 <= bmi && bmi < 35)
                printf("3 \n");
            else
                printf("4 \n");
        }
        else if (161 <= height && height < 204)
        {
            if (20 <= bmi && bmi < 25)
                printf("1 \n");
            else if (18.5 <= bmi && bmi < 20 || 25 <= bmi && bmi < 30)
                printf("2 \n");
            else if (16 <= bmi && bmi < 18.5 || 30 <= bmi && bmi < 35)
                printf("3 \n");
            else
                printf("4 \n");
        }
        else
            printf("4 \n");
    }

    return 0;
}
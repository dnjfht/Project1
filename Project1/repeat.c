void repeatEx1(void)
{
    int result = 0;
    int normal = 0;
    int defect = 0;

    for (int i = 1; i <= 5; i++)
    {
        printf_s("%d번째 제품 (정상:1, 불량:0): ", i);
        scanf_s("%d", &result);

        if (result == 1)
            normal++;
        else
            defect++;
    }

    printf_s("정상 제품 수 : %d\n", normal);
    printf_s("불량 제품 수 : %d\n", defect);
}

void repeatEx2 (void)
{
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    printf_s("합은 %d입니다.", sum);
}

void repeatEx3(void)
{
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf_s("%d * %d = %d\n", i, j, (i * j));
        }
    }
}

void repeatWhileEx1(void)
{
    int num = 1;

    while (num <= 5) {
        printf_s("%d\n", num);
        num++;
    }
}

void repeatWhileEx2(void)
{
    int num = 5;

    while (num >= 1) {
        printf_s("%d\n", num);
        num--;
    }
}

void repeatEx4(void)
{
    for (int i = 5; i >= 1; i--) {
        printf_s("%d\n", i);
    }
}
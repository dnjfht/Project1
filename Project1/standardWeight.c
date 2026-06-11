void standardWeight(void) 
{
	double height = 0;
	double weight = 0;

	printf_s("키를 입력해주세요.\n");
	scanf_s("%lf", &height);
	weight = height - 110;
	printf_s("%.1lfcm의 표준 몸무게는 %.1lfkg 입니다.", height, weight);
}

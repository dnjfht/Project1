void calculateAge(void)
{
	int bornYear = 0;
	int age = 0;
	int internationalAge = 0;

	printf_s("태어난 년도를 입력하세요.\n");
	scanf_s("%d", &bornYear);
	age = 2026 - bornYear + 1;
	internationalAge = 2026 - bornYear;
	printf_s("%d?년에 태어난 사람의 나이는 %d살, 만 나이는 %d살 입니다.", bornYear, age, internationalAge);
}
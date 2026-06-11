void defineAdult (void)
{
	int age = 0;

	printf_s("나이를 입력해주세요.");
	scanf_s("%d", &age);

	if (age >= 20) printf_s("%d살은 성인입니다.", age);
	else printf_s("%d살은 미성년자입니다.", age);
}

void defineEven(void)
{
	int num = 0;

	printf_s("숫자를 입력해주세요.");

	scanf_s("%d", &num);

	if (num % 2 == 0) printf_s("%d는 짝수입니다.", num);
	else printf_s("%d는 홀수입니다.", num);
}

void defineGrade(void) 
{
	int score = 0;
	char grade = 'A';

	printf_s("시험 점수를 입력하세요.");
	scanf_s("%d", &score);

	if (score >= 90) grade = 'A';
	else if (score >= 80) grade = 'B';
	else if (score >= 70) grade = 'C';
	else if (score >= 60) grade = 'D';
	else score = 'E';

	printf_s("%d점은 %c등급입니다.", score, grade);
}
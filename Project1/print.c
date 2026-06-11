void print(void)
{
	int age = 25;
	float height = 175.5f;
	char grade = 'A';

	printf_s("나이 : %d살\n", age);
	printf_s("키 : %.1fcm\n", height);
	printf_s("학점 : %c\n", grade);
	printf_s("학점 : %d\n\n", grade);

	printf_s("%d\n", 100);
	printf_s("%.2f\n", 3.141592);
	printf_s("%c\n", 'A');
	printf_s("%s\n", "Hello");
}
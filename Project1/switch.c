void switchEx1 (void)
{
	int menu = 0;

	printf_s("메뉴 선택 : ");
	scanf_s("%d", &menu);

	switch (menu) {
	case 1: 
		printf_s("생산 시작\n");
		break;

	case 2:
		printf_s("생산 중지\n");
		break;

	case 3:
		printf_s("설비 상태 확인\n");
		break;

	default:
		printf_s("잘못된 입력\n");
	}
}

void switchEx1ChangeIf (void)
{
	int menu = 0;

	printf_s("메뉴 선택 : ");
	scanf_s("%d", &menu);

	if (menu  == 1) printf_s("생산 시작\n");
	else if (menu == 2) printf_s("생산 중지\n");
	else if (menu == 3) printf_s("설비 상태 확인\n");
	else printf_s("잘못된 입력\n");
}

void ifEx2 (void)
{
	int temp = 0;

	printf_s("온도를 입력하세요 : ");
	scanf_s("%d", &temp);

	if (temp >= 100) printf_s("위험합니다.");
	else if (temp >= 80) printf_s("주의가 필요합니다.");
	else printf_s("정상입니다.");
}
#include <iostream>

int main()
{
	int lucky_number = 3;

	std::cout << "내 비밀의 수를 맞추어 보세요" << std::endl;
	
	int user_input;

	while (1) {
		std::cout << "입력 : ";
		std::cin >> user_input;

		if (lucky_number == user_input)
		{
			std::cout << "맞추셨습니다." << std::endl;
			break;
		}
		else
		{
			std::cout << "다시 생각해보세요" << std::endl;
		}
	}

	return 0;
}
#include"common.h"
#include"account_struct.h"

//主菜单合法输入校验
int inin(int a) {
	string str;
	while(1) {
		getline(cin, str);
		if (str.size() > 1 || str[0] - '0' < 1 || str[0] - '0' > a) cout << "\n输入不合法，请重新输入:";
		else break;
	}
	return str[0] - '0';
}
//退出程序输入校验
char outout() {
	string str;
	while (1) {
		getline(cin, str);
		if (str.size() > 1 || toupper(str[0]) != 'Y' && toupper(str[0]) != 'N') cout << "\n输入不合法，请重新输入（Y/N）:";
		else break;
	}
	return str[0];
}
//记账金额输入校验
int input_amount() {
	int amount;
	string str;
	while (1)
	{
		getline(cin, str);
		try {
			amount = stoi(str);
			break;
		}
		catch (invalid_argument e) {
			cout << "\n请正确输入合法金额：";
		}
	}
	return amount;
}
#include"common.h"
#include"account_struct.h"

//���˵��Ϸ�����У��
int inin(int a) {
	string str;
	while(1) {
		getline(cin, str);
		if (str.size() > 1 || str[0] - '0' < 1 || str[0] - '0' > a) cout << "\n���벻�Ϸ�������������:";
		else break;
	}
	return str[0] - '0';
}
//�˳���������У��
char outout() {
	string str;
	while (1) {
		getline(cin, str);
		if (str.size() > 1 || toupper(str[0]) != 'Y' && toupper(str[0]) != 'N') cout << "\n���벻�Ϸ������������루Y/N��:";
		else break;
	}
	return str[0];
}
//���˽������У��
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
			cout << "\n����ȷ����Ϸ���";
		}
	}
	return amount;
}
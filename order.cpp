#include"common.h"
#include"account_struct.h"


//���˵�
void order_account(void) {
	system("cls");//����
	cout << "**************************\n\n";
	cout << "------- ��� 1 --\n";
	cout << "------- ��ѯ 2 --\n";
	cout << "------- �˳� 3 --\n\n";
	cout << "**************************\n";
	cout << "\n�����루1-3����";
}
//�����˵�--���
void change_order(void) {
	system("cls");//����
	cout << "..........................\n\n";
	cout << "---- ������� 1 --\n";
	cout << "---- ���֧�� 2 --\n";
	cout << "---- �˳�     3 --\n\n";
	cout << "..........................\n";
	cout << "\n�����루1-3����";
}
//�����˵�--��ѯ
void select_order(void) {
	system("cls");//����
	cout << "..........................\n\n";
	cout << "---- ͳ����Ŀ 1 --\n";
	cout << "---- ͳ������ 2 --\n";
	cout << "---- ͳ��֧�� 3 --\n";
	cout << "---- �˳�     4 --\n\n";
	cout << "..........................\n";
	cout << "\n�����루1-4����";
}
//�����˵�--��ӳɹ�����
void flash_order(account accx) {
	string type;
	if (accx.itemtype == INCOME) {
		type = "����";
	} 
	else {
		type = "֧��";
	}
	cout << "\n----------------��¼�ɹ�------------------\n\n";
	cout << "��Ŀ���ͣ�"<<type << "     ��" << accx.amount << "     ��ע��" << accx.detail;
	cout << "\n\n----------------��¼�ɹ�------------------\n\n";
	cout << "����������أ�";
	string str; 
	getline(cin,str);
}

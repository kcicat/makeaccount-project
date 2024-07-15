#include"common.h"
#include"account_struct.h"

//�����뵽����
void datafrombook(vector<account>& accs) {
	
	//����һ��������
	fstream input(FILENAME);
	account accx;
	//������������
	while (input>>accx.itemtype>>accx.amount>>accx.detail) accs.push_back(accx);
	//�ر�������
	input.close();
}

//===================================================================����
//���������
void change_account(vector<account>& accs) {
	while (1) {
		//��ȡ�û��Ϸ�����
		change_order();
		int choice = inin(3);
		//ѡ����ģ��
		switch (choice) {
		case 1:
			//�����빦��
			income(accs);
			break;
		case 2:
			//��֧������
			expand(accs);
			break;
		case 3:
			//�˳�����
			return;
		}
		cout << endl;
	}
}
//��������--��¼����
void income(vector<account>& accs) {
	account accx;
	accx.itemtype = INCOME;
	cout << "\n�������";
	//�Ϸ���������
	accx.amount = input_amount();
	cout << "\n�����뱸ע��";
	getline(cin, accx.detail);
	accs.push_back(accx);
	insert_book(accx);
	flash_order(accx);
}
//��������--��¼֧��
void expand(vector<account>& accs) {
	account accx;
	accx.itemtype = EXPAND;
	cout << "\n�������";
	//�Ϸ���������
	accx.amount = input_amount();
	cout << "\n�����뱸ע��";
	getline(cin, accx.detail);
	accs.push_back(accx);
	insert_book(accx);
	flash_order(accx);
	
	
}
//��������--��������ļ�
void insert_book(const account& accx) {
	ofstream output(FILENAME, ios::out | ios::app);
	output << accx.itemtype << '\t' << accx.amount << '\t' << accx.detail << endl;
	output.close();
}

//===================================================================��ѯ
//���������
void select_account(vector<account> accs) {
	while (1) {
		//��ȡ�û��Ϸ�����
		select_order();
		int choice = inin(4);
		//ѡ����ģ��
		switch (choice) {
		case 1:
			//ͳ��������Ŀ
			count_account(accs);
			break;
		case 2:
			//ͳ����������
			count_account(accs,INCOME);
			break;
		case 3:
			//ͳ������֧��
			count_account(accs,EXPAND);
			break;
		default:
			return;
		}
		cout << endl;
	}
}
//ͳ��������Ŀ
void count_account(vector<account> accs) {
	int total=0;
	system("cls");
	cout << "\n================�˵�����======================\n" << endl;
	cout << "��Ŀ����/\t���/\t\t��ע/\n\n";
	for (auto acc : accs) {
		print_result(acc);
		total += acc.amount;
	}
	cout << "\n============================================\n" << endl;
	cout << "\n===========��ѯ���==========\n\n";
	cout << "����ˮ��" << total;
	cout << "\n\n=============================\n\n";
	cout << "\n\n����������أ�";
	string str;
	getline(cin, str);
}
//ͳ�����������֧��
void count_account(vector<account> accs,string itmetype) {
	int total = 0;
	system("cls");
	cout << "\n================�˵�����======================\n" << endl;
	cout << "��Ŀ����\t���\t\t��ע\n\n";
	for (auto acc : accs) {
		if (itmetype == acc.itemtype)
		{
			print_result(acc);
			total += acc.amount;
		}
	}
	cout << "\n============================================\n" << endl;
	cout << "\n===========��ѯ���==========\n\n";
	if(itmetype==INCOME) cout << "��"<< INCOME << "��ˮ��" << total;
	else cout << "��" << EXPAND << "��ˮ��" << total;
	cout << "\n\n=============================\n\n";
	cout << "\n\n����������أ�";
	string str;
	getline(cin, str);
}
//��ӡ��ѯ���
void print_result(account acc) {
	cout << acc.itemtype << "\t\t" << acc.amount << "\t\t" << acc.detail << "\n";
}



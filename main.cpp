#include "account_struct.h"
#include "common.h"

int main()
{
	//�������ݽṹvector
	vector<account> accs;
	//��account_book.txt�ļ��е���Ŀ���ݼ��ص�������ȥ
	datafrombook(accs);
	//������־��
	bool key; key = 1;
	//������ѭ����
	while (key==1) {
		//�˵�
		order_account();
		//��ȡ�û��Ϸ�����
		int choice=inin(3);
		//ѡ����ģ��
		switch (choice) {
		case 1:
			//����Ŀ����
			change_account(accs);
			break;
		case 2:
			//����Ŀ����
			select_order();
			select_account(accs);
			break;
		case 3:
			//�˳�����
			cout << "ȷ���Ƿ��˳���Y/N����";
			if (toupper(outout()) == 'Y') key = 0;
			break;
		}
		cout << endl;
		
	}
	cout << "�´��ټ�";
	return 0;
}	

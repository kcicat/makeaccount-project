#pragma once

#include "common.h"

//��Ŀ�Ľṹ�崴��
struct account
{
	int amount;
	string itemtype;
	string detail;
};


//=====================================================���˹���
//�����
void change_account(vector<account>& accs);
//�������
void income(vector<account>& accs);
//֧������
void expand(vector<account>& accs);
//=====================================================���˹���
void select_account(vector<account> accs);
//����Ŀ���ͳ��
void count_account(vector<account> accs);
//�������֧�����ͳ��
void count_account(vector<account> accs, string itmetype);


//�����ģ��
void insert_book(const account& accx);
//������ģ��
void datafrombook(vector<account>& accs);

//============================================�����ӡ
//������ɲ˵�
void flash_order(account accx);
//��ӡ��ѯ���
void print_result(account acc);
#pragma once


//������Ŀ��Ҫ��IDE�Դ�ͷ�ļ�
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

//������Ŀ��ȫ�ֺ궨��
#define INCOME "����"
#define EXPAND "֧��"
#define FILENAME "D:\\account_book.txt"

//     �������෽��
//=========================��ӡģ��
//���˵�
void order_account(void);
//�������˲˵�
void change_order(void);
//������ѯ�˵�
void select_order(void);



//========================����Ϸ���֤ģ��
//�˵�ѡ��У��
int inin(int a);
//�˵��˳�У��
char outout();
//������˽��У��
int input_amount();



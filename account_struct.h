#pragma once

#include "common.h"

//账目的结构体创建
struct account
{
	int amount;
	string itemtype;
	string detail;
};


//=====================================================记账功能
//主入口
void change_account(vector<account>& accs);
//收入记账
void income(vector<account>& accs);
//支出记账
void expand(vector<account>& accs);
//=====================================================查账功能
void select_account(vector<account> accs);
//总账目金额统计
void count_account(vector<account> accs);
//总收入或支出金额统计
void count_account(vector<account> accs, string itmetype);


//输出流模块
void insert_book(const account& accx);
//输入流模块
void datafrombook(vector<account>& accs);

//============================================特殊打印
//操作完成菜单
void flash_order(account accx);
//打印查询结果
void print_result(account acc);
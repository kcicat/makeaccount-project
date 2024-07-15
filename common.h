#pragma once


//声明项目需要的IDE自带头文件
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

//声明项目的全局宏定义
#define INCOME "收入"
#define EXPAND "支出"
#define FILENAME "D:\\account_book.txt"

//     声明各类方法
//=========================打印模块
//主菜单
void order_account(void);
//二级记账菜单
void change_order(void);
//二级查询菜单
void select_order(void);



//========================输入合法验证模块
//菜单选择校验
int inin(int a);
//菜单退出校验
char outout();
//输入记账金额校验
int input_amount();



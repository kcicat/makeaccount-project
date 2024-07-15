#include"common.h"
#include"account_struct.h"


//主菜单
void order_account(void) {
	system("cls");//清屏
	cout << "**************************\n\n";
	cout << "------- 添加 1 --\n";
	cout << "------- 查询 2 --\n";
	cout << "------- 退出 3 --\n\n";
	cout << "**************************\n";
	cout << "\n请输入（1-3）：";
}
//二级菜单--添加
void change_order(void) {
	system("cls");//清屏
	cout << "..........................\n\n";
	cout << "---- 添加收入 1 --\n";
	cout << "---- 添加支出 2 --\n";
	cout << "---- 退出     3 --\n\n";
	cout << "..........................\n";
	cout << "\n请输入（1-3）：";
}
//二级菜单--查询
void select_order(void) {
	system("cls");//清屏
	cout << "..........................\n\n";
	cout << "---- 统计账目 1 --\n";
	cout << "---- 统计收入 2 --\n";
	cout << "---- 统计支出 3 --\n";
	cout << "---- 退出     4 --\n\n";
	cout << "..........................\n";
	cout << "\n请输入（1-4）：";
}
//三级菜单--添加成功结算
void flash_order(account accx) {
	string type;
	if (accx.itemtype == INCOME) {
		type = "收入";
	} 
	else {
		type = "支出";
	}
	cout << "\n----------------记录成功------------------\n\n";
	cout << "账目类型："<<type << "     金额：" << accx.amount << "     备注：" << accx.detail;
	cout << "\n\n----------------记录成功------------------\n\n";
	cout << "按任意键返回：";
	string str; 
	getline(cin,str);
}

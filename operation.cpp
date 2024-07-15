#include"common.h"
#include"account_struct.h"

//流输入到程序
void datafrombook(vector<account>& accs) {
	
	//创建一个输入流
	fstream input(FILENAME);
	account accx;
	//按单词流输入
	while (input>>accx.itemtype>>accx.amount>>accx.detail) accs.push_back(accx);
	//关闭流对象
	input.close();
}

//===================================================================记账
//主函数入口
void change_account(vector<account>& accs) {
	while (1) {
		//获取用户合法输入
		change_order();
		int choice = inin(3);
		//选择功能模块
		switch (choice) {
		case 1:
			//记收入功能
			income(accs);
			break;
		case 2:
			//记支出功能
			expand(accs);
			break;
		case 3:
			//退出功能
			return;
		}
		cout << endl;
	}
}
//二级函数--记录收入
void income(vector<account>& accs) {
	account accx;
	accx.itemtype = INCOME;
	cout << "\n请输入金额：";
	//合法性输入检查
	accx.amount = input_amount();
	cout << "\n请输入备注：";
	getline(cin, accx.detail);
	accs.push_back(accx);
	insert_book(accx);
	flash_order(accx);
}
//二级函数--记录支出
void expand(vector<account>& accs) {
	account accx;
	accx.itemtype = EXPAND;
	cout << "\n请输入金额：";
	//合法性输入检查
	accx.amount = input_amount();
	cout << "\n请输入备注：";
	getline(cin, accx.detail);
	accs.push_back(accx);
	insert_book(accx);
	flash_order(accx);
	
	
}
//三级函数--流输出到文件
void insert_book(const account& accx) {
	ofstream output(FILENAME, ios::out | ios::app);
	output << accx.itemtype << '\t' << accx.amount << '\t' << accx.detail << endl;
	output.close();
}

//===================================================================查询
//主函数入口
void select_account(vector<account> accs) {
	while (1) {
		//获取用户合法输入
		select_order();
		int choice = inin(4);
		//选择功能模块
		switch (choice) {
		case 1:
			//统计所有账目
			count_account(accs);
			break;
		case 2:
			//统计所有收入
			count_account(accs,INCOME);
			break;
		case 3:
			//统计所有支出
			count_account(accs,EXPAND);
			break;
		default:
			return;
		}
		cout << endl;
	}
}
//统计所有账目
void count_account(vector<account> accs) {
	int total=0;
	system("cls");
	cout << "\n================账单详情======================\n" << endl;
	cout << "账目类型/\t金额/\t\t备注/\n\n";
	for (auto acc : accs) {
		print_result(acc);
		total += acc.amount;
	}
	cout << "\n============================================\n" << endl;
	cout << "\n===========查询结果==========\n\n";
	cout << "总流水金额：" << total;
	cout << "\n\n=============================\n\n";
	cout << "\n\n按任意键返回：";
	string str;
	getline(cin, str);
}
//统计所有收入或支出
void count_account(vector<account> accs,string itmetype) {
	int total = 0;
	system("cls");
	cout << "\n================账单详情======================\n" << endl;
	cout << "账目类型\t金额\t\t备注\n\n";
	for (auto acc : accs) {
		if (itmetype == acc.itemtype)
		{
			print_result(acc);
			total += acc.amount;
		}
	}
	cout << "\n============================================\n" << endl;
	cout << "\n===========查询结果==========\n\n";
	if(itmetype==INCOME) cout << "总"<< INCOME << "流水金额：" << total;
	else cout << "总" << EXPAND << "流水金额：" << total;
	cout << "\n\n=============================\n\n";
	cout << "\n\n按任意键返回：";
	string str;
	getline(cin, str);
}
//打印查询结果
void print_result(account acc) {
	cout << acc.itemtype << "\t\t" << acc.amount << "\t\t" << acc.detail << "\n";
}



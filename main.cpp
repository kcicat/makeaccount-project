#include "account_struct.h"
#include "common.h"

int main()
{
	//创建数据结构vector
	vector<account> accs;
	//将account_book.txt文件中的账目数据加载到向量中去
	datafrombook(accs);
	//创建标志符
	bool key; key = 1;
	//进入主循环体
	while (key==1) {
		//菜单
		order_account();
		//获取用户合法输入
		int choice=inin(3);
		//选择功能模块
		switch (choice) {
		case 1:
			//改账目功能
			change_account(accs);
			break;
		case 2:
			//查账目功能
			select_order();
			select_account(accs);
			break;
		case 3:
			//退出功能
			cout << "确定是否退出（Y/N）：";
			if (toupper(outout()) == 'Y') key = 0;
			break;
		}
		cout << endl;
		
	}
	cout << "下次再见";
	return 0;
}	

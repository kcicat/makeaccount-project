# makeaccount-project
c++编写，基于命令行的简单记账小项目，实验此项目需要c++基础语法和stl库的知识储备
# 基本介绍
1.本项目只有六个主文件和一个自述文件

2.account_struct.h是账本数据的结构体定义和一些核心功能函数的声明

3.common.h是项目的通用功能函数的声明

4.main.cpp是项目的主入口，也是项目的基本大框架

5.input.cpp是用户输入时的合法校验功能函数的定义--声明在common.h中

6.operation.cpp是项目的核心功能函数的定义--声明在account_struct.h中

7.order.cpp是项目的各种菜单页面函数的定义--声明在common.h中

8.本项目引用到的自带文件有：<iostream>,<string>,<vector>,<system>
## 项目功能说明
### 核心功能：
记账和查账
### 详细实现：
在程序打开调用初始化函数：自动读取本地文件存放到vector中

记账功能：将数据写入本地文件，并且将数据添加到vector中，并反馈到命令行窗口上

查账功能：遍历vector统计各种类型的金额总数，并显示到命令行窗口上
# !!!最后欢迎各位同学拓展此项目!!!

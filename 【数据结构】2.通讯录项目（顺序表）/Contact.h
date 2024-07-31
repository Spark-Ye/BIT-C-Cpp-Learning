#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
//#include "SeqList.h" /* 头文件嵌套问题 解决方法：前置声明 */

#define NAME_MAX 100
#define GENDER_MAX 10
#define TEL_MAX 12
#define ADDR_MAX 100

// 通讯录数据类型
typedef struct PersonInfo
{
	char name[NAME_MAX];
	int age;
	char gender[GENDER_MAX];
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}Info;

// 使用顺序表的前置声明
struct SeqList;
typedef struct SeqList Contact;

// 通讯录的初始化和销毁
void ContactInit(Contact* pcon);// 实际初始化的还是顺序表
void ContactDestroy(Contact* pcon);

// 增加、删除、修改、查找、查看通讯录
void ContactAdd(Contact* pcon);
void ContactDel(Contact* pcon);
void ContactModify(Contact* pcon);
void ContactFind(Contact* pcon);
void ContactShow(Contact* pcon);



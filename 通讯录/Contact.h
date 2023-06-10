#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact
{
	PeoInfo data[MAX];//存放人的信息
	int count;//记录当前通讯录中实际人的人数
}Contact;

//初始化通讯录
void InitContact(Contact* pc);//这里con需要被修改，所以不能加const

void AddContact(Contact* pc);

void ShowContact(const Contact* pc);//因为此时con不需要别修改

void DelContact(Contact* pc);

void SearchContact(Contact* pc);

void ModifyContact(Contact* pc);

//按照名字排序
void SortContact(Contact* pc);
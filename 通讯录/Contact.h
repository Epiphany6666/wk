#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<assert.h>
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>
#define DEFULT_SZ 3
#define INC_SZ 2
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

//��̬�汾
//typedef struct Contact
//{
//	PeoInfo data[MAX];//����˵���Ϣ
//	int count;//��¼��ǰͨѶ¼��ʵ���˵�����
//}Contact;

//��̬�汾
typedef struct Contact
{
	PeoInfo* data;
	int count;
	//��ǰͨѶ¼������
	int capacity;
}Contact;

//��ʼ��ͨѶ¼
int InitContact(Contact* pc);//����con��Ҫ���޸ģ����Բ��ܼ�const
void DestroyContact(Contact* pc);

void AddContact(Contact* pc);

void ShowContact(const Contact* pc);//��Ϊ��ʱcon����Ҫ���޸�

void DelContact(Contact* pc);

void SearchContact(Contact* pc);

void ModifyContact(Contact* pc);

//������������
void SortContact(Contact* pc);
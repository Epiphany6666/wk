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
	PeoInfo data[MAX];//����˵���Ϣ
	int count;//��¼��ǰͨѶ¼��ʵ���˵�����
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);//����con��Ҫ���޸ģ����Բ��ܼ�const

void AddContact(Contact* pc);

void ShowContact(const Contact* pc);//��Ϊ��ʱcon����Ҫ���޸�

void DelContact(Contact* pc);

void SearchContact(Contact* pc);

void ModifyContact(Contact* pc);

//������������
void SortContact(Contact* pc);
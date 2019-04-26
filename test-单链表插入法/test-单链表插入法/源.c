#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct node{
	int data;
	struct node *next;
}Lnode,*LinkList;

//初始化链表
int init(LinkList Head){
	if (Head){
		Head->next = NULL;
		return 1;
	}
	else
		return 0;
}

//前插法：
LinkList Inserthead(LinkList Head){
	LinkList L;
	Lnode* s=NULL;
	int flag = 1;
	char c;
	int count = 0;

	L = (LinkList)malloc(sizeof(Lnode));
	L->next = NULL;
	while (flag){
		scanf("%c", &c);
		s = (LinkList)malloc(sizeof(Lnode));
		if (c != '$'){
			s->data = c;
			L->next = s;
			L = s;
			count++;
		}
		else{
			flag = 0;
			L->data = count;
			L->next = NULL;
		}
		                                                                                    
	}
	return L;
}

//后插法：
LinkList Insertlast(LinkList Head){
	LinkList L;
	Lnode* s=NULL;
	int flag = 1;
	char c;
	int count = 0;

	L = (LinkList)malloc(sizeof(Lnode));
	L->next = NULL;
	while (flag){
		scanf("%c", &c);
		s = (LinkList)malloc(sizeof(Lnode));
		if (c != '$'){
			s->data = c;
			L->next = s;
			s->next = NULL;
			L = s;
			count++;
		}
		else{
			flag = 0;
			L->data = count;
		}

	}
	return L;
}

//打印链表
void print(LinkList Head){
	LinkList Lb;
	Lb = Head;
	if ((Head->next) != NULL){
		do{
			printf("%c", Lb->data);
			Lb = Lb->next;
		} while ((Lb->next) != NULL);
	}
}
int mian(){
	LinkList Head;
	Head = (LinkList)malloc(sizeof(Lnode));
	init(Head);
	Inserthead(Head);
	Insertlast(Head);
	print(Head);


	system("pause");
	return 0;
}
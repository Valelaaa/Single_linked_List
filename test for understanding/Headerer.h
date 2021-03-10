#pragma once
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <fstream>
#include <stdio.h>

using namespace std;

struct Product {
	string name;
	string country;
	string fabricator;
	string articul;
	float cost;
	Product* next;
	void print()
	{
		cout << "| " << setw(25) << left << name;
		cout << "| " << setw(17) << left << country;
		cout << "| " << setw(16) << left << fabricator;
		cout << "| " << setw(11) << left << articul;
		cout << "| " << setw(14) << left<<fixed<< setprecision(0) << cost;
		cout << "| " << setw(14) << left << next << "|\n";
		cout << "|———————————————————————————————————————————————";
		cout << "—————————————————————————————————————————————————————————————|\n";
	}
};
void PrintElement(Product& head,int numb);
void loading(int n, double f);
int linked_lenght(Product& head);

//Âñåâîçìîæíûå ìåíþ
int Menu1(int numberrr);
int Finding();
int Redact();
int Sorting();
int Inserting();
int Adding();
int FileReading();
int FileRead();
int mainmenu(int size);

//Îïåðàöèè ââîäà
void Insert(Product& head,int count=0);
void add_last(Product*& header, int len = 0);
void AddFirst(Product& head, int len = 0);
void Enteringring(Product* node, int len = 0);

//Ôàéëîâûå îïåðàöèè
int FileInsert(Product& head,int count=0);
int FileAddFirst(Product& head);
int FileAddLast(Product& head);
int FileLastUntillEnd(Product& head);
int FileLastUntillN(Product& head);
int FileInsertUntillN(Product& head,int count);
int FileFirstUntillN(Product& head);
int FileFirstUntillEnd(Product& head);
void FileRecord(Product& head,string str);

///ïîèñêîâûå îïåðàöèè
int FindName(Product& head);
int FindCountry(Product& head);
int FindFabricator(Product& head);
int FindArticul(Product& head);
int FindCost(Product& head);
int FindNamez(Product& head);
//Ñëèÿíèå äâóõ ñïèñêîâ

//Óäàëåíèå
int DeleteElement(Product& head);
void DeleteList(Product& head);
void EditElement(Product& head,int num,int action);
void EditElement(Product& head,int num);

//Ñîðòèðîâêà
int SortingCost(Product& head);
int SortingCostdecrease(Product& head);
int Sorter(Product& head, int iteration);
int SorterDecrease(Product& head, int iteration);
void Change(Product& head);

int mainFirstList(Product& head,int num);


int fusion(Product head1, Product head2,Product& fus);
int dicrfusion(Product head1, Product head2, Product& fus);
int disfusionOneTwo(Product head, Product& head1, Product& head2);
int disfusionUntilN(Product head, Product& head1, Product& head2);

Product* NewList(Product*& head, int& size);
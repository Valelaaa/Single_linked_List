#include "Headerer.h"
int linked_lenght(Product& head) {
	Product* p;
	p = &head;
	int g = 0;
	while (p)
	{
		g++;
		p = p->next;
	}
	return g;
}
void add_last(Product*& header,int len)
{
	while (!header)
		header = header->next;
	header->next = new Product();
	header = header->next;
	header->next = NULL;
	Enteringring(header, len);
	
}
int Menu1(int numberrr)
{
	int choise;
	
		cout << "-----------------------------------------" << endl;
		cout << "|     ������ " << numberrr << "                          | " << endl;
		cout << "-----------------------------------------" << endl;
		cout << "| 1  - ���������� ��������              |" << endl
			<< "| 2  - ���������� ���������             |" << endl
			<< "| 3  - ����� ���� �����                 |" << endl
			<< "| 4  - ������������� �������            |" << endl
			<< "| 5  - ����� ��������                   |" << endl
			<< "| 6  - ������� ���� �������             |" << endl
			<< "| 7  - ������� �������                  |" << endl
			<< "| 8  - ���������� ������ �� ���         |" << endl
			<< "| 9  - ������ � ����                    |" << endl
			<< "| 10 - ��������� �� �����               |" << endl
			<< "| 11 - ������ �� �����                  |" << endl
			<< "| 12 - ������������ ������              |" << endl
			<< "| 13 - ������� ����                     |" << endl
			<< "| 14 - ���������� ���������             |" << endl;
		cout << "-----------------------------------------" << endl << endl;
		cout << ">>> "; if (cin >> choise, !cin.good()) {
		cout << "������, ������� �����!"; loading(4, 0.4); return NULL;
	}
	return choise;
}
int Finding()
{
	int choise;
	cout << "�������������������������������������" << endl;
	cout << "|   �������� �������� ������:       |" << endl;
	cout << "�������������������������������������" << endl;
	cout << "| 1. - ����� �� ����� ������        |" << endl;
	cout << "| 2. - ����� �� ������ ������������ |" << endl;
	cout << "| 3. - ����� �� �������������       |" << endl;
	cout << "| 4. - ����� �� ��������            |" << endl;
	cout << "| 5. - ����� �� ��������� ������    |" << endl
		<< "| 6. - ��������� �����              |" << endl;
	cout << "�������������������������������������" << endl;
	cout << ">>> "; if (cin >> choise, !cin.good()) {
		cout << "������, ������� �����!"; loading(4, 0.4); return NULL;
	}
	return choise;
}
int FindNamez(Product& head)
{
	string named;
	cin.get();
	cout << "������� ��� ��������: "; getline(cin, named);
	int numb = 0;
	Product* node;
	node = &head;
	while (node)
	{
		numb++;
		if (node->name == named)
		{
			return numb;
		}
		node = node->next;
	}
	cout << "������ ����� �������� ���"; loading(4, 0.4);
	return(0);
}
int Redact()
{//� ������� ��������� ������� ������ �������, ������� ���������� ��������������� 
	int var;
	cout << "�������������������������������������" << endl;
	cout << "|   ��� ���������� ������������� ?  |" << endl;
	cout << "�������������������������������������" << endl;
	cout << "| 1. - ������������� ���� �����     |" << endl;
	cout << "| 2. - ������������� ��������       |" << endl;
	cout << "| 3. - ������������� ������         |" << endl;
	cout << "| 4. - ������������� �������������  |" << endl;
	cout << "| 5. - �������������� ��������      |" << endl;
	cout << "| 6. - �������������� ���������     |" << endl;
	cout << "| 7. - ��������� �����              |" << endl;
	cout << "�������������������������������������" << endl;
	cout << ">>> "; if (cin >> var, !cin.good()) {
		cout << "������, ������� �����!"; loading(4, 0.4); return NULL;
	}
	return var;
}
int Sorting()
{
	int var;
	cout << "�������������������������������������" << endl;
	cout << "|   ��� ���������� ������������� ?  |" << endl;
	cout << "�������������������������������������" << endl;
	cout << "| 1. - ���������� �� ��������       |" << endl;
	cout << "| 2. - ���������� �� ������         |" << endl;
	cout << "| 3. - ���������� �� �������������  |" << endl;
	cout << "| 4. - ���������� �� ��������       |" << endl;
	cout << "| 5. - ���������� �� ���������      |" << endl;
	cout << "| 6. - ��������� �����              |" << endl;
	cout << "�������������������������������������" << endl;
	cout << ">>> ";
	if (cin >> var, !cin.good()) {
		cout << "������, ������� �����!"; loading(4, 0.4); return NULL;
	}
	return(var);
}
int Inserting()
{
	int choise;
	cout << "�������������������������������������" << endl
		<< "|   ��� ���������� ��������      ?  |" << endl
		<< "�������������������������������������" << endl
		<< "| 1. - ������� ����� ��������       |" << endl
		<< "| 2. - ������� ����� ���������      |" << endl
		<< "| 3. - ��������� �����              |" << endl
		<< "�������������������������������������" << endl;
	//������� ����� ��������/����� ��������� 
	cout << ">>> "; if (cin >> choise, !cin.good()) {
		cout << "������, ������� �����!"; loading(4, 0.4); return NULL;
	}
	return choise;
}
int Adding() {
	int choise;
	cout << "���������������������������������������������������" << endl
		<< "|   ��� ���������� ��������       ?               |" << endl
		<< "���������������������������������������������������" << endl
		<< "| 1  - ���������� �������� � ������               |" << endl
		<< "| 2  - ���������� �������� � �����                |" << endl
		<< "| 3  - ���������� ���������� ���������  � ������  |" << endl
		<< "| 4  - ���������� ���������� ���������  � �����   |" << endl
		<< "| 5  - ������� ��������                           |"<<endl
		<< "| 6  - ��������� �����                            |" << endl
		<< "���������������������������������������������������" << endl;
	//������� ����� ��������/����� ��������� 
	cout << ">>> "; if (cin >> choise, !cin.good()) {
		cout << "������, ������� �����!"; loading(4, 0.4); return NULL;
	}
	return choise;
}
int FileReading() 
{
	int choise;
	cout << "���������������������������������������������������" << endl
		<< "|   ��� ���������� ��������       ?               |" << endl
		<< "���������������������������������������������������" << endl
		<< "| 1  - ���������� �������� � ������               |" << endl
		<< "| 2  - ���������� �������� � �����                |" << endl
		<< "| 3  - ������� �������� � ������                  |" << endl
		<< "| 4  - ������� ���������� ��������� � ������      |" << endl
		<< "| 5  - ���������� ���������� ���������  � ������  |" << endl
		<< "| 6  - ���������� ���������� ���������  � �����   |" << endl
		<< "| 7  - ��������� �����                            |" << endl
		<< "���������������������������������������������������" << endl
		<< ">>> "; if (cin >> choise, !cin.good()) {
		cout << "������, ������� �����!"; loading(4, 0.4); return NULL;
	}
	return choise;
}
int FileRead() 
{
	int choise;
	cout << "����������������������������������������������������������������" << endl
		<< "|  ������� ��������� ���������� ��������       ?               |" << endl
		<< "����������������������������������������������������������������" << endl
		<< "| 1  - ���������� ���������� ����������� ���������             |" << endl
		<< "| 2  - ���������� ���� ��������� �� �����                      |" << endl
		<< "����������������������������������������������������������������" << endl
	 <<">>> "; if (cin >> choise, !cin.good()) {
		cout << "������, ������� �����!"; loading(4, 0.4); return NULL;
	}
	return choise;
}
//�������� �� n ������
void loading(int n, double f) 
{	//�������� �������� � n ����� � f ������ �������
	for (int i = 0; i < n; i++)
	{
		cout << "."; Sleep(1000 * f);;
	}
	return;
}
void Enteringring(Product* node,int len) 
{
	cin.get();
	cout << "������� �������������� " << len << "-�� ������:" << endl;
	cout << "�������� ������: ";	getline(cin, node->name);
	cout << "������ �������������: "; getline(cin, node->country);
	cout << "�������������: "; getline(cin, node->fabricator);
	cout << "��������: "; getline(cin, node->articul);
	cout << "��������� ������: "; cin >> node->cost;
}
void AddFirst(Product& head,int len)
{
	Product* newnode;
	newnode = new Product();
	Enteringring(newnode,len);
	newnode->next = head.next;
	head.next = newnode;
}
int FileAddFirst(Product& head) 
{
	int sn;
	string sin;
	cout << endl << "� ������ ����� ���������� ����?"<<endl;
	cout << "1. - ���� �� ��������� Input.txt" << endl;
	cout << "2. - ���� �� ��������� Input1.txt" << endl;
	cout << "3. - ��������� ���� (������� ���� � �����������) "<< endl;
	cout << ">>> "; if (cin>>sn,!cin.good())
	{
		cout << "���������� ������ �����!"; return(0);
	}
	if (sn == 1) sin = "Input.txt";
	else if (sn == 2) sin = "Input1.txt";
	else {
		cin.ignore();
		getline(cin, sin);
	}
	ifstream file(sin);
	if (!file.is_open())
	{
		cout << "������! ���� �� ������!" << endl;
		return 0;
	}
	Product* newnode;
	newnode = new Product();
	getline(file, newnode->name);
	getline(file, newnode->country);
	getline(file, newnode->fabricator);
	getline(file, newnode->articul);
	(file >> newnode->cost).get();
	string space;
	getline(file, space);
	newnode->next = head.next;
	head.next = newnode;
	file.close();									//��������� ����
	return 1;
}
int FileAddLast(Product& head) 
{
	int sn;
	string sin;
	cout << endl << "� ������ ����� ���������� ����?" << endl;
	cout << "1. - ���� �� ��������� Input.txt" << endl;
	cout << "2. - ���� �� ��������� Input1.txt" << endl;
	cout << "3. - ��������� ���� (������� ���� � �����������) " << endl;
	cout << ">>> "; if (cin >> sn, !cin.good())
	{
		cout << "���������� ������ �����!"; return(0);
	}
	if (sn == 1) sin = "Input.txt";
	else if (sn == 2) sin = "Input1.txt";
	else {
		cin.ignore();
		getline(cin, sin);
	}
	ifstream file(sin);
	if (!file.is_open())
	{
		cout << "������! ���� �� ������!" << endl;
		return 0;
	}
	Product* newnode;
	newnode = new Product();
	getline(file, newnode->name);
	getline(file, newnode->country);
	getline(file, newnode->fabricator);
	getline(file, newnode->articul);
	(file >> newnode->cost).get();
	string space;
	getline(file, space);
	Product* p;
	p = &head;
	while (p->next)
		p=p->next;
	p->next = newnode;
	p = p->next;
	p->next = NULL;
	file.close();
	return 1;
}
int FileLastUntillN(Product& head) 
{
	int n=0;
	cout << "������� ��������� ���������� ���������? " << endl << ">>> "; if (cin >> n, !cin.good()) {
		cout << "������, ������� �����!"; loading(4, 0.4); return NULL;
	}
	if (n < 1) {
		cout << "������! ����������� ��������� ������ ���� ������ 0" << endl;
		return(0);
	}
	int sn;
	string sin;
	cout << endl << "� ������ ����� ���������� ����?" << endl;
	cout << "1. - ���� �� ��������� Input.txt" << endl;
	cout << "2. - ���� �� ��������� Input1.txt" << endl;
	cout << "3. - ��������� ���� (������� ���� � �����������) " << endl;
	cout << ">>> "; if (cin >> sn, !cin.good())
	{
		cout << "���������� ������ �����!"; return(0);
	}
	if (sn == 1) sin = "Input.txt";
	else if (sn == 2) sin = "Input1.txt";
	else {
		cin.ignore();
		getline(cin, sin);
	}
	ifstream file(sin);
	if (!file.is_open())
	{
		cout << "������! ���� �� ������!" << endl;
		return 0;
	}
	for (int i = 0; i < n && file; i++)
	{
		Product* newnode;
		newnode = new Product();
		getline(file, newnode->name);
		getline(file, newnode->country);
		getline(file, newnode->fabricator);
		getline(file, newnode->articul);
		(file >> newnode->cost).get();
		string space;
		getline(file, space);
		Product* p;
		p = &head;
		while (p->next)
			p = p->next;
		p->next = newnode;
		p = p->next;
		p->next = NULL;
	}
	file.close();
	return 1;
}
int FileLastUntillEnd(Product& head) 
{
	int sn;
	string sin;
	cout << endl << "� ������ ����� ���������� ����?" << endl;
	cout << "1. - ���� �� ��������� Input.txt" << endl;
	cout << "2. - ���� �� ��������� Input1.txt" << endl;
	cout << "3. - ��������� ���� (������� ���� � �����������) " << endl;
	cout << ">>> "; if (cin >> sn, !cin.good())
	{
		cout << "���������� ������ �����!"; return(0);
	}
	if (sn == 1) sin = "Input.txt";
	else if (sn == 2) sin = "Input1.txt";
	else {
		cin.ignore();
		getline(cin, sin);
	}
	ifstream file(sin);
	if (!file.is_open())
	{
		cout << "������! ���� �� ������!" << endl;
		return 0;
	}
	while (file)
	{
		Product* newnode;
		newnode = new Product();
		getline(file, newnode->name);
		getline(file, newnode->country);
		getline(file, newnode->fabricator);
		getline(file, newnode->articul);
		(file >> newnode->cost).get();
		string space;
		getline(file, space);
		Product* p;
		p = &head;
		while (p->next)
			p = p->next;
		p->next = newnode;
		p = p->next;
		p->next = NULL;
	}
	file.close();
	return 1;
}
int FileFirstUntillN(Product& head) 
{
	int n = 0;
	cout << "������� ��������� ���������� ���������? " << endl << ">>> "; if (cin >> n, !cin.good()) {
		cout << "������, ������� �����!"; loading(4, 0.4); return NULL;
	}
	if (n < 1) {
		cout << "������! ����������� ��������� ������ ���� ������ 0" << endl;
		return(0);
	}
	int sn;
	string sin;
	cout << endl << "� ������ ����� ���������� ����?" << endl;
	cout << "1. - ���� �� ��������� Input.txt" << endl;
	cout << "2. - ���� �� ��������� Input1.txt" << endl;
	cout << "3. - ��������� ���� (������� ���� � �����������) " << endl;
	cout << ">>> "; if (cin >> sn, !cin.good())
	{
		cout << "���������� ������ �����!"; return(0);
	}
	if (sn == 1) sin = "Input.txt";
	else if (sn == 2) sin = "Input1.txt";
	else {
		cin.ignore();
		getline(cin, sin);
	}
	ifstream file(sin);
	if (!file.is_open())
	{
		cout << "������! ���� �� ������!" << endl;
		return 0;
	}
	for (int i = 0; i < n && file; i++)
	{
		Product* newnode;
		newnode = new Product();
		getline(file, newnode->name);
		getline(file, newnode->country);
		getline(file, newnode->fabricator);
		getline(file, newnode->articul);
		(file >> newnode->cost).get();
		string space;
		getline(file, space);
		newnode->next = head.next;
		head.next = newnode;
	}
	file.close();
	return 1;
}
int FileFirstUntillEnd(Product& head) 
{
	int sn;
	string sin;
	cout << endl << "� ������ ����� ���������� ����?" << endl;
	cout << "1. - ���� �� ��������� Input.txt" << endl;
	cout << "2. - ���� �� ��������� Input1.txt" << endl;
	cout << "3. - ��������� ���� (������� ���� � �����������) " << endl;
	cout << ">>> "; if (cin >> sn, !cin.good())
	{
		cout << "���������� ������ �����!"; return(0);
	}
	if (sn == 1) sin = "Input.txt";
	else if (sn == 2) sin = "Input1.txt";
	else {
		cin.ignore();
		getline(cin, sin);
	}
	ifstream file(sin);
	if (!file.is_open())
	{
		cout << "������! ���� �� ������!" << endl;
		return 0;
	}
	while (file)
	{
		Product* newnode;
		newnode = new Product();
		getline(file, newnode->name);
		getline(file, newnode->country);
		getline(file, newnode->fabricator);
		getline(file, newnode->articul);
		(file >> newnode->cost).get();
		string space;
		getline(file, space);
		newnode->next = head.next;
		head.next = newnode;
	}
	file.close();
	return 1;
}
int FindName(Product& head) 
{
	string named;
	cin.get();
	cout << "������� ��� ��������: "; getline(cin, named);
	int numb = 0;
	Product* node;
	node = &head;
	while (node)
	{
		numb++;
		if (node->name == named) 
		{
			cout << "������� " << node->name;
			return numb;
		}
		node = node->next;
	}
	cout << "������ ����� �������� ���";loading(4, 0.4);
	return(0);
}
int FindCountry(Product& head) 
{
	string named;
	cin.get();
	cout << "������� ������ ������������ ��������: "; getline(cin, named);
	int numb = 0;
	Product* node;
	node = &head;
	while (node->next)
	{
		numb++;
		if (node->country == named)
		{
			cout << "������� � ������� " << node->country;
			return numb;
		}
		node = node->next;
	}
	cout << "����� ������ ������������ �������� ���"; loading(5, 0.4);
	return(0);
}
int FindFabricator(Product& head)
{
	string named;
	cin.get();
	cout << "������� ������������� ��������: "; getline(cin, named);
	int numb = 0;
	Product* node;
	node = &head;
	while (node->next)
	{
		numb++;
		if (node->fabricator == named)
		{
			cout << "������������� " << node->fabricator;
			return numb;
		}
		node = node->next;
	}
	cout << "������ ������������� �������� ���"; loading(4, 0.4);
	return(0);
}
int FindArticul(Product& head)
{
	string named;
	cin.get();
	cout << "������� �������� ��������: "; getline(cin, named);
	int numb = 0;
	Product* node;
	node = &head;
	while (node->next)
	{
		numb++;
		if (node->articul == named)
		{
			cout << "������� � ��������� " << node->articul;
			return numb;
		}
		node = node->next;
	}
	cout << "������ �������� �������� ���"; loading(4, 0.4);
	return(0);
}
int FindCost(Product& head) 
{
	float costing;
	int num=0;
	cout << "������� ��������� ��������: "; if (cin >> costing, !cin.good()) {
		cout << "������, ������� �����!"; loading(4, 0.4); return NULL;
	}
	Product* node;
	node = &head;
		while (node) 
		{
			num++;
			if (node->cost == costing) 
			{
				cout << "������� � ���������� "<<costing;
				return(num);
			}
			node = node->next;
		}
		cout << "������ �������� ���"; loading(3, 0.4);
		return(0);
}

void PrintElement(Product &head,int numb) 
{
	Product* p; 
	p = &head;
	int num = 0;
	while (p) 
	{
		num++;
		if (num == numb) 
		{
			p->print();
			return;
		}
		p = p->next;
	}
}
void Insert(Product& head,int count) 
{

	Product* node,*newnode,*p;
	node = &head;
	int finded;
	if (!(finded = FindNamez(head)))
	{
		cout << "������ �������� ��� � ������ ���������"; loading(6, 0.3);
		return;
	}
	newnode = new Product();
	Enteringring(newnode);
	while (node) 
	{
		count++;
		if (finded == count) 
		{
			p = node->next;
			node->next = newnode;
			newnode->next = p;
			return;
		}
		node = node->next;
	}
	return;
}
int FileInsert(Product& head,int count)
{
	int sn;
	string sin;
	cout << endl << "� ������ ����� ���������� ����?" << endl;
	cout << "1. - ���� �� ��������� Input.txt" << endl;
	cout << "2. - ���� �� ��������� Input1.txt" << endl;
	cout << "3. - ��������� ���� (������� ���� � �����������) " << endl;
	cout << ">>> "; if (cin >> sn, !cin.good())
	{
		cout << "���������� ������ �����!"; return(0);
	}
	if (sn == 1) sin = "Input.txt";
	else if (sn == 2) sin = "Input1.txt";
	else {
		cin.ignore();
		getline(cin, sin);
	}
	ifstream file(sin);
	if (!file.is_open())
	{
		cout << "������! ���� �� ������!" << endl;
		return 0;
	}
	int finded;
	if (!(finded = FindNamez(head)))
	{
		cout << "������ �������� ��� � ������ ���������"; loading(6, 0.3);
		return(0);
	}
	Product* newnode;

	newnode = new Product();
	getline(file, newnode->name);
	getline(file, newnode->country);
	getline(file, newnode->fabricator);
	getline(file, newnode->articul);
	(file >> newnode->cost).get();
	string space;
	getline(file, space);

	Product* node, * p;
	node = &head;
	while (node)
	{
		count++;
		if (finded == count)
		{
			p = node->next;
			node->next = newnode;
			newnode->next = p;
		}
		node = node->next;
	}
	file.close();
	return 1;
}
int FileInsertUntillN(Product& head, int count)
{
	int sn;
	string sin;
	cout << endl << "� ������ ����� ���������� ����?" << endl;
	cout << "1. - ���� �� ��������� Input.txt" << endl;
	cout << "2. - ���� �� ��������� Input1.txt" << endl;
	cout << "3. - ��������� ���� (������� ���� � �����������) " << endl;
	cout << ">>> "; if (cin >> sn, !cin.good())
	{
		cout << "���������� ������ �����!"; return(0);
	}
	if (sn == 1) sin = "Input.txt";
	else if (sn == 2) sin = "Input1.txt";
	else {
		cin.ignore();
		getline(cin, sin);
	}
	ifstream file(sin);
	if (!file.is_open())
	{
		cout << "������! ���� �� ������!" << endl;
		return 0;
	}
	int finded;
	if (!(finded = FindNamez(head)))
	{
		cout << "������ �������� ��� � ������ ���������"; loading(6, 0.3);
		return(0);
	}
	
	int n;
	cout << "������� ��������� ���������� �������� �� �����?"<<endl; 
	
	cout << ">>> "; cin >> n;
	if (n < 1) {
		cout << "������! ����������� ��������� ������ ���� ������ 0" << endl;
		return(0);
	}
	for (int i = 0; i < n; i++)
	{
		Product* newnode;
		int ncount = count;
		newnode = new Product();
		getline(file, newnode->name);
		getline(file, newnode->country);
		getline(file, newnode->fabricator);
		getline(file, newnode->articul);
		(file >> newnode->cost).get();
		string space;
		getline(file, space);
		
		Product* node, * p;
		node = &head;
		while (node)
		{
			ncount++;
			if (finded == ncount)
			{
				p = node->next;
				node->next = newnode;
				newnode->next = p;
			}
			node = node->next;
		}
	}
	file.close();
	return 1;

}
void FileRecord(Product& head,string str) 
{
	ofstream fout;								//��������� ���� ��� ������
	fout.open(str);								//...��������� ���� ...
	if (!fout.is_open())
	{						//���� ���� �� ������, ��������� ���������
		cout << "������ �������� �����" << endl;
		exit(223);
	}
	fout << "|�����������������������������������������������";
	fout << "���������������������������������������������|\n";
	fout << "|" << setw(53) << right << "Count of products : ";
	fout << setw(3) << left << linked_lenght(head)-1;
	fout << "                                    |\n";
	fout << "|�����������������������������������������������";
	fout << "���������������������������������������������|\n";
	fout << "| Name                     | Country          |";
	fout << " Fabricator      | Articul    | Cost          |\n";
	fout << "|�����������������������������������������������";
	fout << "���������������������������������������������|\n";
	Product* node;
	node = head.next;
	while (node) {
		fout << "| " << setw(25) << left << node->name;
		fout << "| " << setw(17) << left << node->country;
		fout << "| " << setw(16) << left << node->fabricator;
		fout << "| " << setw(11) << left << node->articul;
		fout << "| " << setw(14) << left << fixed << setprecision(0) << node->cost << "|\n";
		node = node->next;
	}

	fout << "|�����������������������������������������������";
	fout << "���������������������������������������������|\n";
	fout.close();								
	return;
}
int DeleteElement(Product &head) 
{
	int num;
	if (!(num = FindNamez(head))) 
	{
		cout << "������ �������� ��� ��� � ������";
		return(0);
	}
	int count = 0;
	Product* node;
	node = &head;
	while (node) 
	{
		count++;
		if (count == num-1) 
		{
			node->next = node->next->next;
			return(1);
		}
		node = node->next;
	}
	return(0);
}
void DeleteList(Product& head)
{
	Product* node;
	while (head.next) 
	{
		node = &head;
		while (node->next->next)
			node = node->next;
		free(node->next);
		node->next = NULL;
	}
	
	head.next = NULL;
	return;
}
void EditElement(Product& head,int num) 
{
	Product* node;
	node = &head;
	int coutn=0;
	while (node) 
	{
		coutn++;
		if (coutn == num) 
		{
			Enteringring(node);
			return;
		}
		node = node->next;
	}
}
void EditElement(Product& head, int num, int action)
{
	if (action < 1 || action>6)
	{
		cout << "������ �������� �� ����������";
		return;
	}
	int cot = 0;
	Product* node;
	node = &head;
	cin.get();
	if (action == 2)
	{
		while (node)
		{
			cot++;
			if (cot == num) {
				cout << "��������: ";  getline(cin, node->name);
			}
			node = node->next;
		}
		return;
	}
	else if (action == 3)
	{
		while (node)
		{
			cot++;
			if (cot == num) {
				cout << "������: ";  getline(cin, node->country);
			}
			node = node->next;
		}
		return;
	}
	else if (action == 4)
	{
		while (node)
		{
			cot++;
			if (cot == num) {
				cout << "�������������: ";  getline(cin, node->fabricator);
			}
			node = node->next;
		}
		return;
	}
	else if (action == 5)
	{
		while (node)
		{
			cot++;
			if (cot == num) {
				cout << "�������: ";  getline(cin, node->articul);
			}
			node = node->next;
		}
		return;
	}
	else
	{
		while (node)
		{
			cot++;
			if (cot == num) {
				cout << "���������: ";  cin >> node->cost;
			}
			node = node->next;
		}
		return;
	}
	return;
}
int SortingCost(Product& head)
{

	int n = linked_lenght(head) - 1;

	for (int i = 0; i < n; i++)
		for (int i = 0; i < n; i++)
		{
			Product* f = head.next->next;
			Product* h = head.next;
			if (h->cost > f->cost) {
				Product* temp = f;
				h->next = temp->next;
				f->next = h;
				head.next = f;
			}
			Product* c = head.next->next;
			Product* b = head.next;
			Product* a = &head;

			while (c->next)
			{
				a = a->next;
				b = b->next;
				c = c->next;
				if (b->cost > c->cost)
				{
					a->next = c;
					b->next = c->next;
					c->next = b;
					break;
				}
			}

		}
	return 5;
}
int SortingCostdecrease(Product& head)
{

	int n = linked_lenght(head) - 1;

	for (int i = 0; i < n; i++)
		for (int i = 0; i < n; i++)
		{
			Product* f = head.next->next;
			Product* h = head.next;
			if (h->cost < f->cost) {
				Product* temp = f;
				h->next = temp->next;
				f->next = h;
				head.next = f;
			}
			Product* c = head.next->next;
			Product* b = head.next;
			Product* a = &head;

			while (c->next)
			{
				a = a->next;
				b = b->next;
				c = c->next;
				if (b->cost < c->cost)
				{
					a->next = c;
					b->next = c->next;
					c->next = b;
					break;
				}
			}

		}
	return 10;
}
int Sorter(Product& head,int iteration)
{
	int n = linked_lenght(head) - 1;
	if (iteration == 1)
	{
		for (int i = 0; i < n; i++)
			for (int i = 0; i < n; i++)
			{
				Product* f = head.next->next;
				Product* h = head.next;
				if (h->name < f->name) 
				{
					Product* temp = f;
					h->next = temp->next;
					f->next = h;
					head.next = f;
				}
				Product* c = head.next->next;
				Product* b = head.next;
				Product* a = &head;
				while (c->next)
				{
					a = a->next;
					b = b->next;
					c = c->next;
					if (b->name < c->name)
					{
						a->next = c;
						b->next = c->next;
						c->next = b;
						break;
					}
				}
			}
	}
	else if (iteration == 2) 
	{
		for (int i = 0; i < n; i++)
			for (int i = 0; i < n; i++)
			{
				Product* f = head.next->next;
				Product* h = head.next;
				if (h->country < f->country) {
					Product* temp = f;
					h->next = temp->next;
					f->next = h;
					head.next = f;
				}
				Product* c = head.next->next;
				Product* b = head.next;
				Product* a = &head;

				while (c->next)
				{
					a = a->next;
					b = b->next;
					c = c->next;
					if (b->country < c->country)
					{
						a->next = c;
						b->next = c->next;
						c->next = b;
						break;
					}
				}
			}
	}
	else if (iteration == 3) 
	{
		for (int i = 0; i < n; i++)
			for (int i = 0; i < n; i++)
			{
				Product* f = head.next->next;
				Product* h = head.next;
				if (h->fabricator < f->fabricator) {
					Product* temp = f;
					h->next = temp->next;
					f->next = h;
					head.next = f;
				}
				Product* c = head.next->next;
				Product* b = head.next;
				Product* a = &head;

				while (c->next)
				{
					a = a->next;
					b = b->next;
					c = c->next;
					if (b->fabricator < c->fabricator)
					{
						a->next = c;
						b->next = c->next;
						c->next = b;
						break;
					}
				}
			}
	}
	else
	{
		for (int i = 0; i < n; i++)
			for (int i = 0; i < n; i++)
			{
				Product* f = head.next->next;
				Product* h = head.next;
				if (h->articul < f->articul) {
					Product* temp = f;
					h->next = temp->next;
					f->next = h;
					head.next = f;
				}
				Product* c = head.next->next;
				Product* b = head.next;
				Product* a = &head;

				while (c->next)
				{
					a = a->next;
					b = b->next;
					c = c->next;
					if (b->articul < c->articul)
					{
						a->next = c;
						b->next = c->next;
						c->next = b;
						break;
					}
				}
			}
	}
	return(iteration);
}

int SorterDecrease(Product& head, int iteration)
{
	int n = linked_lenght(head) - 1;
	if (iteration == 1)
	{
		for (int i = 0; i < n; i++)
			for (int i = 0; i < n; i++)
			{
				Product* f = head.next->next;
				Product* h = head.next;
				if (h->name > f->name) {
					Product* temp = f;
					h->next = temp->next;
					f->next = h;
					head.next = f;
				}
				Product* c = head.next->next;
				Product* b = head.next;
				Product* a = &head;

				while (c->next)
				{
					a = a->next;
					b = b->next;
					c = c->next;
					if (b->name > c->name)
					{
						a->next = c;
						b->next = c->next;
						c->next = b;
						break;
					}
				}
			}
	}
	else if (iteration == 2)
	{
		for (int i = 0; i < n; i++)
			for (int i = 0; i < n; i++)
			{
				Product* f = head.next->next;
				Product* h = head.next;
				if (h->country > f->country) {
					Product* temp = f;
					h->next = temp->next;
					f->next = h;
					head.next = f;
				}
				Product* c = head.next->next;
				Product* b = head.next;
				Product* a = &head;

				while (c->next)
				{
					a = a->next;
					b = b->next;
					c = c->next;
					if (b->country > c->country)
					{
						a->next = c;
						b->next = c->next;
						c->next = b;
						break;
					}
				}
			}
	}
	else if (iteration == 3)
	{
		for (int i = 0; i < n; i++)
			for (int i = 0; i < n; i++)
			{
				Product* f = head.next->next;
				Product* h = head.next;
				if (h->fabricator > f->fabricator) {
					Product* temp = f;
					h->next = temp->next;
					f->next = h;
					head.next = f;
				}
				Product* c = head.next->next;
				Product* b = head.next;
				Product* a = &head;

				while (c->next)
				{
					a = a->next;
					b = b->next;
					c = c->next;
					if (b->fabricator > c->fabricator)
					{
						a->next = c;
						b->next = c->next;
						c->next = b;
						break;
					}
				}
			}
	}
	else
	{
		for (int i = 0; i < n; i++)
			for (int i = 0; i < n; i++)
			{
				Product* f = head.next->next;
				Product* h = head.next;
				if (h->articul > f->articul) {
					Product* temp = f;
					h->next = temp->next;
					f->next = h;
					head.next = f;
				}
				Product* c = head.next->next;
				Product* b = head.next;
				Product* a = &head;

				while (c->next)
				{
					a = a->next;
					b = b->next;
					c = c->next;
					if (b->articul > c->articul)
					{
						a->next = c;
						b->next = c->next;
						c->next = b;
						break;
					}
				}
			}
	}
	return iteration+10;
}
void Change(Product& head)
{
	int n1, n2;
	cout << "������ �������: "<<endl;
	n1 = FindNamez(head);
	cout << "������ �������: "<<endl;
	cout << "������� Enter ����� ���������� ����  ";
	n2 = FindNamez(head);
	if (n1 == n2)
	{
		cout << "������ !��� ���� � ��� �� ������� !"; return;
	}
	if (n2 < n1) {
		int tmp = n2;
		n2 = n1;
		n1 = tmp;
	}
	Product* a1, * a2, * b1, * b2;
	int max = 0;
	Product* node;
	node = head.next;
	while (node) {//������� �� ����� ������, ����� ������ ������� � ��� ���������
		max++;
		node = node->next;
	} 
	if (n1 == 2 && n2 == max + 1)
	{//���� ���������� ����� 1 � ���������� �������� 
		b2 = head.next;
		b1 = &head;
		while (b2->next)
		{
			b1 = b1->next;
			b2 = b2->next;
		}
		a1 = &head; a2 = head.next;
		a1->next = b2;
		b2->next = a2->next;
		b1->next = a2;
		a2->next = NULL;
		return;
	}
	if (n1 == 2 && n2 != 3)	//���� ���������� ����� ������� � �� ���������� ����� �������
	{
		int count = 1;
		a1 = &head;
		a2 = head.next;
		b2 = head.next;
		b1 = &head;
		while (b2->next)
		{
			count++;
			if (count == n2)
				break;
			b1 = b1->next;
			b2 = b2->next;
		}
		a1->next = b2;
		Product* temp = b2->next;
		b2->next = a2->next;
		a2->next = temp;
		b1->next = a2;
		return;
	}
	if (n1 == 2) //����� ����� ���������� ����� 1 � ������ ���������
	{
		Product* f = head.next->next;
		Product* h = head.next;
		Product* temp = f;
		h->next = temp->next;
		f->next = h;
		head.next = f;
		return;
	}
	if (n2 == max + 1 && n1 == n2 - 1)
	{ //����� ����� ���������� ����� ��������� � ������������� ���������
		b2 = head.next;
		b1 = &head;
		a1 = NULL;
		while (b2->next)
		{
			a1 = b1;
			b1 = b1->next;
			b2 = b2->next;
		}
		b2->next = b1;
		a1->next = b2;
		b1->next = NULL;
		return;
	}
	if (n2 == max + 1)//����� ����� ����� ����� � ��������� ���������
	{
		b2 = head.next;
		b1 = &head;
		while (b2->next)
		{
			b1 = b1->next;
			b2 = b2->next;
		}
		int count = 1;
		a1 = &head;
		a2 = head.next;
		while (a2->next)
		{
			count++;
			if (count == n1)
				break;
			a1 = a1->next;
			a2 = a2->next;
		}
		a1->next = b1->next;
		b2->next = a2->next;
		b1->next = a2;
		a2->next = NULL;
		return;
	}
	if (n1 + 1 == n2) //����� ����� ����� ����� ��������� ����������
	{
		int count = 1;
		a1 = &head;
		a2 = head.next;
		b2 = head.next->next->next;
		b1 = head.next->next;
		while (b2->next)
		{
			count++;
			if (count == n1)
				break;
			a1 = a1->next;
			a2 = a2->next;
			b1 = b1->next;
			b2 = b2->next;
		}
		a1->next = b1;
		b1->next = a2;
		a2->next = b2;
		return;
	}
	else
	{
		int counta = 1;
		a1 = &head;
		a2 = head.next;
		while (a2->next)
		{
			counta++;
			if (counta == n1)
				break;
			a1 = a1->next;
			a2 = a2->next;
		}
		int countb = 1;
		b1 = &head;
		b2 = head.next;
		while (b2->next)
		{
			countb++;
			if (countb == n2)
				break;
			b1 = b1->next;
			b2 = b2->next;
		}
		a1->next = b2;
		Product* temp = b2->next;
		b2->next = a2->next;
		b1->next = a2;
		a2->next = temp;
		return;
	}
}
Product* NewList(Product*& head, int& size)
{
	Product* temp;
	temp = new Product[size+1];
	for (int i = 0; i < size; i++)
	{
			temp[i] = head[i];
	}
	delete[] head;
	head = new Product[size++];
	return(temp);
}
int mainmenu(int size) {
	int var;
	cout << "-----------------------------------------" << endl;
	cout << "|              main menu                | " << endl;
	cout << "-----------------------------------------" << endl;
	cout << "| 1  - �������� ������ ������           |" << endl;
	if (size>=1)
		cout << "| 2  - ������� � ������� ����           |" << endl;
	 if (size>=2)
		cout << "| 3  - ������� � ������� ����           |" << endl;
	 if (size>=3)
		cout << "| 4  - ������� � �������� ����          |" << endl;
	 if (size>=4)
		cout << "| 5  - ������� � ���������� ����        |" << endl;
	 if (size >= 5)
		cout << "| 6  - ������� � ������ ����            |" << endl;
	cout << "| 7  - ���������� ���������             |" << endl;
	cout << "-----------------------------------------" << endl;
	cout<<">>> "; if (cin >> var, cin.good())
		return var;
}
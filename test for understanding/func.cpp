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
		cout << "|     Список " << numberrr << "                          | " << endl;
		cout << "-----------------------------------------" << endl;
		cout << "| 1  - Добавление элемента              |" << endl
			<< "| 2  - Сортировка элементов             |" << endl
			<< "| 3  - Обмен двух ячеек                 |" << endl
			<< "| 4  - Редактировать элемент            |" << endl
			<< "| 5  - Поиск элемента                   |" << endl
			<< "| 6  - Слияние двух списков             |" << endl
			<< "| 7  - Удалить элемент                  |" << endl
			<< "| 8  - Разделение списка на два         |" << endl
			<< "| 9  - Запись в файл                    |" << endl
			<< "| 10 - Прочитать из файла               |" << endl
			<< "| 11 - Печать на экран                  |" << endl
			<< "| 12 - Освобождение памяти              |" << endl
			<< "| 13 - Главное меню                     |" << endl
			<< "| 14 - Завершение программы             |" << endl;
		cout << "-----------------------------------------" << endl << endl;
		cout << ">>> "; if (cin >> choise, !cin.good()) {
		cout << "Ошибка, введите цифру!"; loading(4, 0.4); return NULL;
	}
	return choise;
}
int Finding()
{
	int choise;
	cout << "—————————————————————————————————————" << endl;
	cout << "|   Выберите параметр поиска:       |" << endl;
	cout << "—————————————————————————————————————" << endl;
	cout << "| 1. - Поиск по имени товара        |" << endl;
	cout << "| 2. - Поиск по стране производства |" << endl;
	cout << "| 3. - Поиск по производителю       |" << endl;
	cout << "| 4. - Поиск по артикулю            |" << endl;
	cout << "| 5. - Поиск по стоимости товара    |" << endl
		<< "| 6. - Вернуться назад              |" << endl;
	cout << "—————————————————————————————————————" << endl;
	cout << ">>> "; if (cin >> choise, !cin.good()) {
		cout << "Ошибка, введите цифру!"; loading(4, 0.4); return NULL;
	}
	return choise;
}
int FindNamez(Product& head)
{
	string named;
	cin.get();
	cout << "Введите имя предмета: "; getline(cin, named);
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
	cout << "Такого имени предмета нет"; loading(4, 0.4);
	return(0);
}
int Redact()
{//в главной программе сначала задаем элемент, который необходимо отредактировать 
	int var;
	cout << "—————————————————————————————————————" << endl;
	cout << "|   Что необходимо редактировать ?  |" << endl;
	cout << "—————————————————————————————————————" << endl;
	cout << "| 1. - Редактировать весь товар     |" << endl;
	cout << "| 2. - Редактировать название       |" << endl;
	cout << "| 3. - Редактировать страну         |" << endl;
	cout << "| 4. - Редактировать производителя  |" << endl;
	cout << "| 5. - Редактирование артикула      |" << endl;
	cout << "| 6. - Редактирование стоимости     |" << endl;
	cout << "| 7. - Вернуться назад              |" << endl;
	cout << "—————————————————————————————————————" << endl;
	cout << ">>> "; if (cin >> var, !cin.good()) {
		cout << "Ошибка, введите цифру!"; loading(4, 0.4); return NULL;
	}
	return var;
}
int Sorting()
{
	int var;
	cout << "—————————————————————————————————————" << endl;
	cout << "|   Как необходимо отсортировать ?  |" << endl;
	cout << "—————————————————————————————————————" << endl;
	cout << "| 1. - Сортировка по названию       |" << endl;
	cout << "| 2. - Сортировка по стране         |" << endl;
	cout << "| 3. - Сортировка по производителю  |" << endl;
	cout << "| 4. - Сортировка по артикулу       |" << endl;
	cout << "| 5. - Сортировка по стоимости      |" << endl;
	cout << "| 6. - Вернуться назад              |" << endl;
	cout << "—————————————————————————————————————" << endl;
	cout << ">>> ";
	if (cin >> var, !cin.good()) {
		cout << "Ошибка, введите цифру!"; loading(4, 0.4); return NULL;
	}
	return(var);
}
int Inserting()
{
	int choise;
	cout << "—————————————————————————————————————" << endl
		<< "|   Как необходимо вставить      ?  |" << endl
		<< "—————————————————————————————————————" << endl
		<< "| 1. - Вставка перед заданным       |" << endl
		<< "| 2. - Вставка после заданного      |" << endl
		<< "| 3. - Вернуться назад              |" << endl
		<< "—————————————————————————————————————" << endl;
	//вставка перед заданным/после заданного 
	cout << ">>> "; if (cin >> choise, !cin.good()) {
		cout << "Ошибка, введите цифру!"; loading(4, 0.4); return NULL;
	}
	return choise;
}
int Adding() {
	int choise;
	cout << "———————————————————————————————————————————————————" << endl
		<< "|   Как необходимо добавить       ?               |" << endl
		<< "———————————————————————————————————————————————————" << endl
		<< "| 1  - Добавление элемента в начало               |" << endl
		<< "| 2  - Добавление элемента в конец                |" << endl
		<< "| 3  - Добавление нескольких элементов  в начало  |" << endl
		<< "| 4  - Добавление нескольких элементов  в конец   |" << endl
		<< "| 5  - Вставка элемента                           |"<<endl
		<< "| 6  - Вернуться назад                            |" << endl
		<< "———————————————————————————————————————————————————" << endl;
	//вставка перед заданным/после заданного 
	cout << ">>> "; if (cin >> choise, !cin.good()) {
		cout << "Ошибка, введите цифру!"; loading(4, 0.4); return NULL;
	}
	return choise;
}
int FileReading() 
{
	int choise;
	cout << "———————————————————————————————————————————————————" << endl
		<< "|   Как необходимо добавить       ?               |" << endl
		<< "———————————————————————————————————————————————————" << endl
		<< "| 1  - Добавление элемента в начало               |" << endl
		<< "| 2  - Добавление элемента в конец                |" << endl
		<< "| 3  - Вставка элемента в список                  |" << endl
		<< "| 4  - Вставка нескольких элементов в список      |" << endl
		<< "| 5  - Добавление нескольких элементов  в начало  |" << endl
		<< "| 6  - Добавление нескольких элементов  в конец   |" << endl
		<< "| 7  - Вернуться назад                            |" << endl
		<< "———————————————————————————————————————————————————" << endl
		<< ">>> "; if (cin >> choise, !cin.good()) {
		cout << "Ошибка, введите цифру!"; loading(4, 0.4); return NULL;
	}
	return choise;
}
int FileRead() 
{
	int choise;
	cout << "————————————————————————————————————————————————————————————————" << endl
		<< "|  Сколько элементов необходимо добавить       ?               |" << endl
		<< "————————————————————————————————————————————————————————————————" << endl
		<< "| 1  - Добавление введенного колличества элементов             |" << endl
		<< "| 2  - Добавление всех элементов из файла                      |" << endl
		<< "————————————————————————————————————————————————————————————————" << endl
	 <<">>> "; if (cin >> choise, !cin.good()) {
		cout << "Ошибка, введите цифру!"; loading(4, 0.4); return NULL;
	}
	return choise;
}
//Загрузка на n секунд
void loading(int n, double f) 
{	//Печатает загрузку в n точек и f единиц времени
	for (int i = 0; i < n; i++)
	{
		cout << "."; Sleep(1000 * f);;
	}
	return;
}
void Enteringring(Product* node,int len) 
{
	cin.get();
	cout << "Введите характеристики " << len << "-го товара:" << endl;
	cout << "Название товара: ";	getline(cin, node->name);
	cout << "Страна производитель: "; getline(cin, node->country);
	cout << "Производитель: "; getline(cin, node->fabricator);
	cout << "Артикуль: "; getline(cin, node->articul);
	cout << "Стоимость товара: "; cin >> node->cost;
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
	cout << endl << "С какого файла произвести ввод?"<<endl;
	cout << "1. - Файл по умолчанию Input.txt" << endl;
	cout << "2. - Файл по умолчанию Input1.txt" << endl;
	cout << "3. - Кастомный файл (указать путь с расширением) "<< endl;
	cout << ">>> "; if (cin>>sn,!cin.good())
	{
		cout << "Необходимо ввести цифру!"; return(0);
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
		cout << "Ошибка! Файл не найден!" << endl;
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
	file.close();									//Закрываем файл
	return 1;
}
int FileAddLast(Product& head) 
{
	int sn;
	string sin;
	cout << endl << "С какого файла произвести ввод?" << endl;
	cout << "1. - Файл по умолчанию Input.txt" << endl;
	cout << "2. - Файл по умолчанию Input1.txt" << endl;
	cout << "3. - Кастомный файл (указать путь с расширением) " << endl;
	cout << ">>> "; if (cin >> sn, !cin.good())
	{
		cout << "Необходимо ввести цифру!"; return(0);
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
		cout << "Ошибка! Файл не найден!" << endl;
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
	cout << "Сколько элементов необходимо прочитать? " << endl << ">>> "; if (cin >> n, !cin.good()) {
		cout << "Ошибка, введите цифру!"; loading(4, 0.4); return NULL;
	}
	if (n < 1) {
		cout << "Ошибка! Колличество элементов должно быть больше 0" << endl;
		return(0);
	}
	int sn;
	string sin;
	cout << endl << "С какого файла произвести ввод?" << endl;
	cout << "1. - Файл по умолчанию Input.txt" << endl;
	cout << "2. - Файл по умолчанию Input1.txt" << endl;
	cout << "3. - Кастомный файл (указать путь с расширением) " << endl;
	cout << ">>> "; if (cin >> sn, !cin.good())
	{
		cout << "Необходимо ввести цифру!"; return(0);
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
		cout << "Ошибка! Файл не найден!" << endl;
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
	cout << endl << "С какого файла произвести ввод?" << endl;
	cout << "1. - Файл по умолчанию Input.txt" << endl;
	cout << "2. - Файл по умолчанию Input1.txt" << endl;
	cout << "3. - Кастомный файл (указать путь с расширением) " << endl;
	cout << ">>> "; if (cin >> sn, !cin.good())
	{
		cout << "Необходимо ввести цифру!"; return(0);
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
		cout << "Ошибка! Файл не найден!" << endl;
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
	cout << "Сколько элементов необходимо прочитать? " << endl << ">>> "; if (cin >> n, !cin.good()) {
		cout << "Ошибка, введите цифру!"; loading(4, 0.4); return NULL;
	}
	if (n < 1) {
		cout << "Ошибка! Колличество элементов должно быть больше 0" << endl;
		return(0);
	}
	int sn;
	string sin;
	cout << endl << "С какого файла произвести ввод?" << endl;
	cout << "1. - Файл по умолчанию Input.txt" << endl;
	cout << "2. - Файл по умолчанию Input1.txt" << endl;
	cout << "3. - Кастомный файл (указать путь с расширением) " << endl;
	cout << ">>> "; if (cin >> sn, !cin.good())
	{
		cout << "Необходимо ввести цифру!"; return(0);
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
		cout << "Ошибка! Файл не найден!" << endl;
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
	cout << endl << "С какого файла произвести ввод?" << endl;
	cout << "1. - Файл по умолчанию Input.txt" << endl;
	cout << "2. - Файл по умолчанию Input1.txt" << endl;
	cout << "3. - Кастомный файл (указать путь с расширением) " << endl;
	cout << ">>> "; if (cin >> sn, !cin.good())
	{
		cout << "Необходимо ввести цифру!"; return(0);
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
		cout << "Ошибка! Файл не найден!" << endl;
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
	cout << "Введите имя предмета: "; getline(cin, named);
	int numb = 0;
	Product* node;
	node = &head;
	while (node)
	{
		numb++;
		if (node->name == named) 
		{
			cout << "Элемент " << node->name;
			return numb;
		}
		node = node->next;
	}
	cout << "Такого имени предмета нет";loading(4, 0.4);
	return(0);
}
int FindCountry(Product& head) 
{
	string named;
	cin.get();
	cout << "Введите страну производства предмета: "; getline(cin, named);
	int numb = 0;
	Product* node;
	node = &head;
	while (node->next)
	{
		numb++;
		if (node->country == named)
		{
			cout << "Элемент с страной " << node->country;
			return numb;
		}
		node = node->next;
	}
	cout << "Такой страны поризводства предмета нет"; loading(5, 0.4);
	return(0);
}
int FindFabricator(Product& head)
{
	string named;
	cin.get();
	cout << "Введите производителя предмета: "; getline(cin, named);
	int numb = 0;
	Product* node;
	node = &head;
	while (node->next)
	{
		numb++;
		if (node->fabricator == named)
		{
			cout << "Производитель " << node->fabricator;
			return numb;
		}
		node = node->next;
	}
	cout << "Такого производителя предмета нет"; loading(4, 0.4);
	return(0);
}
int FindArticul(Product& head)
{
	string named;
	cin.get();
	cout << "Введите артикуль предмета: "; getline(cin, named);
	int numb = 0;
	Product* node;
	node = &head;
	while (node->next)
	{
		numb++;
		if (node->articul == named)
		{
			cout << "Элемент с артикулем " << node->articul;
			return numb;
		}
		node = node->next;
	}
	cout << "Такого артикуля предмета нет"; loading(4, 0.4);
	return(0);
}
int FindCost(Product& head) 
{
	float costing;
	int num=0;
	cout << "Введите стоимость предмета: "; if (cin >> costing, !cin.good()) {
		cout << "Ошибка, введите цифру!"; loading(4, 0.4); return NULL;
	}
	Product* node;
	node = &head;
		while (node) 
		{
			num++;
			if (node->cost == costing) 
			{
				cout << "Предмет с стоимостью "<<costing;
				return(num);
			}
			node = node->next;
		}
		cout << "Такого предмета нет"; loading(3, 0.4);
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
		cout << "Такого предмета нет в списке предметов"; loading(6, 0.3);
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
	cout << endl << "С какого файла произвести ввод?" << endl;
	cout << "1. - Файл по умолчанию Input.txt" << endl;
	cout << "2. - Файл по умолчанию Input1.txt" << endl;
	cout << "3. - Кастомный файл (указать путь с расширением) " << endl;
	cout << ">>> "; if (cin >> sn, !cin.good())
	{
		cout << "Необходимо ввести цифру!"; return(0);
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
		cout << "Ошибка! Файл не найден!" << endl;
		return 0;
	}
	int finded;
	if (!(finded = FindNamez(head)))
	{
		cout << "Такого предмета нет в списке предметов"; loading(6, 0.3);
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
	cout << endl << "С какого файла произвести ввод?" << endl;
	cout << "1. - Файл по умолчанию Input.txt" << endl;
	cout << "2. - Файл по умолчанию Input1.txt" << endl;
	cout << "3. - Кастомный файл (указать путь с расширением) " << endl;
	cout << ">>> "; if (cin >> sn, !cin.good())
	{
		cout << "Необходимо ввести цифру!"; return(0);
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
		cout << "Ошибка! Файл не найден!" << endl;
		return 0;
	}
	int finded;
	if (!(finded = FindNamez(head)))
	{
		cout << "Такого предмета нет в списке предметов"; loading(6, 0.3);
		return(0);
	}
	
	int n;
	cout << "Сколько элементов необходимо вставить из файла?"<<endl; 
	
	cout << ">>> "; cin >> n;
	if (n < 1) {
		cout << "Ошибка! Колличество элементов должно быть больше 0" << endl;
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
	ofstream fout;								//Открываем файл для записи
	fout.open(str);								//...Открываем файл ...
	if (!fout.is_open())
	{						//Если файл не найден, выключаем программу
		cout << "Ошибка открытия файла" << endl;
		exit(223);
	}
	fout << "|———————————————————————————————————————————————";
	fout << "—————————————————————————————————————————————|\n";
	fout << "|" << setw(53) << right << "Count of products : ";
	fout << setw(3) << left << linked_lenght(head)-1;
	fout << "                                    |\n";
	fout << "|———————————————————————————————————————————————";
	fout << "—————————————————————————————————————————————|\n";
	fout << "| Name                     | Country          |";
	fout << " Fabricator      | Articul    | Cost          |\n";
	fout << "|———————————————————————————————————————————————";
	fout << "—————————————————————————————————————————————|\n";
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

	fout << "|———————————————————————————————————————————————";
	fout << "—————————————————————————————————————————————|\n";
	fout.close();								
	return;
}
int DeleteElement(Product &head) 
{
	int num;
	if (!(num = FindNamez(head))) 
	{
		cout << "Такого элемента уже нет в списке";
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
		cout << "Такого критерия не существует";
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
				cout << "Название: ";  getline(cin, node->name);
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
				cout << "Страна: ";  getline(cin, node->country);
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
				cout << "Производитель: ";  getline(cin, node->fabricator);
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
				cout << "Артикул: ";  getline(cin, node->articul);
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
				cout << "Стоимость: ";  cin >> node->cost;
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
	cout << "Первый предмет: "<<endl;
	n1 = FindNamez(head);
	cout << "Второй предмет: "<<endl;
	cout << "Нажмите Enter чтобы продолжить ввод  ";
	n2 = FindNamez(head);
	if (n1 == n2)
	{
		cout << "Ошибка !Это один и тот же предмет !"; return;
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
	while (node) {//прохожу до конца списка, чтобы понять сколько в нем элементов
		max++;
		node = node->next;
	} 
	if (n1 == 2 && n2 == max + 1)
	{//если происходит обмен 1 и последнего элемента 
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
	if (n1 == 2 && n2 != 3)	//Если происходит обмен первого и не последнего кроме второго
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
	if (n1 == 2) //когда обмен происходит между 1 и вторым элементом
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
	{ //когда обмен происходит между последним и предпоследним элементом
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
	if (n2 == max + 1)//Когда обмен между любым и последним элементом
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
	if (n1 + 1 == n2) //когда обмен между двумя соседними элементами
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
	cout << "| 1  - Создание нового списка           |" << endl;
	if (size>=1)
		cout << "| 2  - Перейти к первому узлу           |" << endl;
	 if (size>=2)
		cout << "| 3  - Перейти к второму узлу           |" << endl;
	 if (size>=3)
		cout << "| 4  - Перейти к третьему узлу          |" << endl;
	 if (size>=4)
		cout << "| 5  - Перейти к четвертому узлу        |" << endl;
	 if (size >= 5)
		cout << "| 6  - Перейти к пятому узлу            |" << endl;
	cout << "| 7  - Завершение программы             |" << endl;
	cout << "-----------------------------------------" << endl;
	cout<<">>> "; if (cin >> var, cin.good())
		return var;
}
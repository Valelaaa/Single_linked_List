#include "Headerer.h"
int mainFirstList(Product& head, int numbr) {
	Product* node;
	int retur=0;
	node = &head;
	do {
		system("cls");
		switch (Menu1(numbr))
		{
		case 1: //Добавление элементов
		{
			if (!&head) {
				cout << "Ошибка 17! Списка не существует!" << endl;
				return(17);
			}
			system("cls");
			switch (Adding())
			{
			case 1: //Вставка элемента в начало
			{

				AddFirst(head, linked_lenght(head));
				cout << "Ячейка успешно введена";
				cout << "Общяя затраченная память составляет " << linked_lenght(head) * sizeof(Product) << " байт"; loading(4, 0.4);
				break;
			}
			case 2://Вставка элемента в конец
			{
				add_last(node, linked_lenght(head));
				cout << "Ячейка успешно введена";
				cout << "Общая затраченная память составляет " << linked_lenght(head) * sizeof(Product) << " байт"; loading(4, 0.4);
				break;
			}
			case 3: //Вставка нескольких элементов в начало
			{
				int n;
				cout << "Сколько товаров необходимо ввести ?" << endl << ">>> "; if (cin >> n, !cin.good()) {
					cout << "Ошибка, введите цифру!"; loading(4, 0.4); break;
				}
				if (n < 1) {
					cout << "Ошибка! Колличество элементов должно быть больше 0" << endl; loading(4, 0.4);
					break;
				}
				for (int i = 0; i < n; i++)
				{
					AddFirst(head, linked_lenght(head));
					cout << endl;
				}
				cout << n << " Товаров успешно введены " << endl;
				cout << "Общая затраченная память составляет " << linked_lenght(head) * sizeof(Product) << " байт"; loading(4, 0.4);
				break;
			}
			case 4: //Вставка нескольких элементов в конец
			{
				int n;
				cout << "Сколько товаров необходимо ввести ?" << endl << ">>> "; if (cin >> n, !cin.good()) {
					cout << "Ошибка, введите цифру!"; loading(4, 0.4); break;
				}
				if (n < 1) {
					cout << "Ошибка! Колличество элементов должно быть больше 0" << endl;
					return(0);
				}
				cout << "Нажмите Enter чтобы начать ввод";
				for (int i = 0; i < n; i++)
				{
					add_last(node, linked_lenght(head));
					cout << endl;
				}
				cout << n << " Товаров успешно введены " << endl;
				cout << "Общая затраченная память составляет " << linked_lenght(head) * sizeof(Product) << " байт"; loading(4, 0.4);
				break;
			}
			case 5://Вставка элемента
			{
				system("cls");
				switch (Inserting())
				{
				case 1:
				{
					Insert(head, 1);
					cout << "Элемент успешно вставлен"; loading(3, 0.4);
					break;
				}
				case 2:
				{
					Insert(head, 0);
					cout << "Элемент успешно вставлен"; loading(3, 0.4);
					break;
				}
				case 3:
					break;
				default:
				{
					cout << "Такого варианта не было!"; loading(3, 0.4);
					break;
				}
				}
				break;
			}
			case 6: //Просто возвращение
			{
				break;
			}
			default:
			{
				cout << "Такого варианта не было!"; loading(3, 0.4);
				break;
			}
			}
			break;
		}
		case 2://Сортировка 
		{
			if (linked_lenght(head) == 1) {
				cout << "Список пуст"; loading(3, 0.4);
				break;
			}
			system("cls");
			int option;
			switch (option = Sorting())
			{
			case 1:
			case 2:
			case 3:
			case 4:
			{
				int crt;
				cout << "Как необходимо сортировать?" << endl << " 1 - По возрастанию" << endl
					<< " 2 - По убыванию" << endl << ">>> "; if (cin >> crt, !cin.good()) {
					cout << "Необходимо писать цифру!"; loading(4, 0.4); break;
				}
				if (crt < 1 || crt > 2) {
					cout << "Такого варианта предложено не было!"; loading(4, 0.4);
					break;
				}
				if (crt == 1)
					retur=SorterDecrease(head, option);
				else
					retur=Sorter(head, option);
				cout << "Список успешно отсортирован"; loading(4, 0.4);
				break;
			}
			case 5:
			{
				int crt;
				cout << "Как необходимо сортировать?" << endl << " 1 - По возрастанию" << endl
					<< " 2 - По убыванию" << endl << ">>> "; if (cin >> crt, !cin.good())
				{
					cout << "Необходимо писать цифру!"; loading(4, 0.4); break;
				}
				if (crt < 1 || crt > 2)
				{
					cout << "Такого варианта предложено не было!"; loading(4, 0.4);
					break;
				}
				if (crt == 1)
					retur=SortingCost(head);
				else
					retur=SortingCostdecrease(head);
				cout << "Список успешно отсортирован"; loading(4, 0.4);
				break;
			}
			case 6: 
				break;
			default:
			{
				cout << "Критерий сортировки введен неверно!"; loading(4, 0.4);
				break;
			}
			}
			break;
		}
		case 3: //обмен элементами
		{
			if (linked_lenght(head) == 1) {
				cout << "Ошибка! Список пуст!"; loading(4, 0.4);
				break;
			}
			Change(head);
			cout << "Обмен элементами произошел успешно!"; loading(4, 0.4);
			break;
		}
		case 4: //Редактирование элемента
		{
			if (linked_lenght(head) == 1) {
				cout << "Список пуст"; loading(3, 0.4);
				break;
			}
			int nam;    //какой элемент сортировать
			if (!(nam = FindName(head)))
				break;
			system("cls");
			int var;    //Вариант для выбора действий
			var = Redact();
			switch (var)
			{
			case 1:
			{
				EditElement(head, nam);
				cout << "Элемент отредактирован"; loading(3, 0.4);
				break;
			}
			case 2:
			{
				EditElement(head, nam, var);
				cout << "Элемент отредактирован"; loading(3, 0.4);
				break;
			}
			case 3:
			{
				EditElement(head, nam, var);
				cout << "Элемент отредактирован"; loading(3, 0.4);
				break;
			}
			case 4:
			{
				EditElement(head, nam, var);
				cout << "Элемент отредактирован"; loading(3, 0.4);
				break;
			}
			case 5:
			{

				EditElement(head, nam, var);
				cout << "Элемент отредактирован"; loading(3, 0.4);
				break;
			}
			case 6:
			{

				EditElement(head, nam, var);
				cout << "Элемент отредактирован"; loading(3, 0.4);
				break;
			}
			case 7:
				break;
			default:
			{
				cout << "Других вариантов не дано"; loading(3, 0.4);
				break; }
			}
			break;
		}
		case 5: //Поиск элемента
		{
			if (linked_lenght(head) == 1)
			{
				cout << "Ошибка 92! Списка не существует!" << endl;
				return(92);
			}
			system("cls");
			switch (Finding())
			{
			case 1:
			{
				int finded;
				if (!(finded = FindName(head)))
					break;
				cout << " расположен в " << finded - 1 << "-той ячейке" << endl;
				int ch;
				cout << "Распечатать элемент ?" << endl << "1. - Да" << endl << "2. - Нет" << endl;
				cout << ">>> "; if (cin >> ch, !cin.good()) {
					cout << "Ошибка, введите цифру!"; loading(4, 0.4); break;
				}
				if (ch == 1)
				{
					cout << "|———————————————————————————————————————————————";
					cout << "—————————————————————————————————————————————————————————————|\n";
					PrintElement(head, finded);
				}
				system("pause");
				break;
			}
			case 2:
			{
				int finded;
				if (!(finded = FindCountry(head)))
					break;
				cout << " расположен в " << finded - 1 << "-той ячейке" << endl;
				int ch;
				cout << "Распечатать элемент ?" << endl << "1. - Да" << endl << "2. - Нет" << endl;
				cout << ">>> "; if (cin >> ch, !cin.good()) {
					cout << "Ошибка, введите цифру!"; loading(4, 0.4); break;
				}
				if (ch == 1)
				{
					cout << "|———————————————————————————————————————————————";
					cout << "—————————————————————————————————————————————————————————————|\n";
					PrintElement(head, finded);
				}
				system("pause");
				break;
			}
			case 3:
			{
				int finded;
				if (!(finded = FindFabricator(head)))
					break;
				cout << " расположен в " << finded - 1 << "-той ячейке" << endl;
				int ch;
				cout << "Распечатать элемент ?" << endl << "1. - Да" << endl << "2. - Нет" << endl;
				cout << ">>> "; if (cin >> ch, !cin.good()) {
					cout << "Ошибка, введите цифру!"; loading(4, 0.4); break;
				}
				if (ch == 1) {
					cout << "|———————————————————————————————————————————————";
					cout << "—————————————————————————————————————————————————————————————|\n";
					PrintElement(head, finded);
				}
				system("pause");
				break;
				break;
			}
			case 4:
			{
				int finded;
				if (!(finded = FindArticul(head)))
					break;
				cout << " расположен в " << finded - 1 << "-той ячейке" << endl;
				int ch;
				cout << "Распечатать элемент ?" << endl << "1. - Да" << endl << "2. - Нет" << endl;
				cout << ">>> "; if (cin >> ch, !cin.good()) {
					cout << "Ошибка, введите цифру!"; loading(4, 0.4); break;
				}
				if (ch == 1)
				{
					cout << "|———————————————————————————————————————————————";
					cout << "—————————————————————————————————————————————————————————————|\n";
					PrintElement(head, finded);
				}
				system("pause");
				break;
				break;
			}
			case 5:
			{
				int finded;
				if (!(finded = FindCost(head)))
					break;
				cout << " расположен в " << finded - 1 << "-той ячейке" << endl;
				int ch;
				cout << "Распечатать элемент ?" << endl << "1. - Да" << endl << "2. - Нет" << endl;
				cout << ">>> "; if (cin >> ch, !cin.good()) {
					cout << "Ошибка, введите цифру!"; loading(4, 0.4); break;
				}
				if (ch == 1)
				{
					cout << "|———————————————————————————————————————————————";
					cout << "—————————————————————————————————————————————————————————————|\n";
					PrintElement(head, finded);
				}
				system("pause");
				break;
			}
			case 6:
			{
				cout << "LOADING"; loading(3, 0.4);
				break;
			}
			default:
			{
				break;
			}
			}
			break;
		}
		case 6://Слияние списка
		{
			return(282);
		}
		case 7://Удалить элемент
		{
			if (linked_lenght(head) == 1)
			{
				cout << "В списке нет элементов";
				return(239);
			}
			DeleteElement(head);
			cout << "Элемент успешно удален"; loading(3, 0.4);
			cout << "\rОбщая оставшаяся память составляет " << linked_lenght(head) * sizeof(Product) << " байт"; loading(4, 0.4);
			break;
		}
		case 8://Разделение списка на два
		{
			if (!&head)
			{
				cout << "Не удалось создать список " << endl << "Повторите запрос позже" << endl;
				return(210);
			}
			return(366);
			break;
		}
		case 9://Записать в файл
		{
			if (linked_lenght(head) == 1)
			{
				cout << "Ошибка! Списка не существует!"; loading(3, 0.6);
				break;
			}
			int h;
			cout << "Выберите путь записи файла: " << endl;
			cout << "1 - Сохранить в файл Output.txt" << endl;
			cout << "2 - Указать другой путь файла (Без ковычек и с расширением)" << endl;
			cout << ">>> ";
			if (cin >> h, !cin.good()) {
				cout << "Ошибка, введите цифру!"; loading(4, 0.4); break;
			}
			if (h <= 0 || h > 2) break;
			if (h == 2)
			{
				cin.get();
				string strt;
				cout << "Введите путь файла:"; getline(cin, strt);
				FileRecord(head, strt);
				cout << "Происходит запись файла"; loading(5, 0.6);
				break;
			}
			else		//Едем по моему навигатору
			{
				FileRecord(head, "Output.txt");
				cout << "Происходит запись файла"; loading(5, 0.6);
				break;
			}
			break;
			break;
		}
		case 10: //Прочитать из файла
		{
			if (!&head)
			{
				cout << "Ошибка 150! Списка не существует!" << endl;
				return(150);
			}
			system("cls");
			switch (FileReading())
			{
			case 1:
			{
				if (!FileAddFirst(head))
					break;
				cout << "Значение прочитано успешно"; loading(3, 0.4);
				cout << "\rОбщая затраченная память составляет " << linked_lenght(head) * sizeof(Product) << " байт"; loading(4, 0.4);
				break;
			}
			case 2:
			{
				if (!FileAddLast(head))
					break;
				cout << "Значение прочитано успешно"; loading(3, 0.4);
				cout << "\rОбщая затраченная память составляет " << linked_lenght(head) * sizeof(Product) << " байт"; loading(4, 0.4);
				break;
			}
			case 3:
			{
				system("cls");
				switch (Inserting())
				{
				case 1:
				{
					FileInsert(head, 1);
					cout << "Элемент успешно вставлен"; loading(3, 0.4);
					cout << "\rОбщая затраченная память составляет " << linked_lenght(head) * sizeof(Product) << " байт"; loading(4, 0.4);
					break;
				}
				case 2:
				{
					FileInsert(head, 0);
					cout << "Элемент успешно вставлен"; loading(3, 0.4);
					cout << "\rОбщая затраченная память составляет " << linked_lenght(head) * sizeof(Product) << " байт"; loading(4, 0.4);
					break;
				}
				default:
				{
					cout << "Такого варианта не было!"; loading(3, 0.4);
					break;
				}
				}
				break;
			}
			case 4:
			{

				system("cls");
				switch (Inserting())
				{
				case 1:
				{
					FileInsertUntillN(head, 1);
					cout << "Элементы успешно вставлены"; loading(3, 0.4);
					cout << "\rОбщая затраченная память составляет " << linked_lenght(head) * sizeof(Product) << " байт"; loading(4, 0.4);
					break;
				}
				case 2:
				{
					FileInsertUntillN(head, 0);
					cout << "Элементы успешно вставлены"; loading(3, 0.4);
					cout << "\rОбщая затраченная память составляет " << linked_lenght(head) * sizeof(Product) << " байт"; loading(4, 0.4);
					break;
				}
				default:
				{
					cout << "Такого варианта не было!"; loading(3, 0.4);
					break;
				}
				}
				break;
			}
			case 5:
			{

				system("cls");
				switch (FileRead())
				{
				case 1:
				{
					if (!FileFirstUntillN(head))
						break;
					cout << "Данные введены успешно!"; loading(3, 0.4);
					cout << "\rОбщая затраченная память составляет " << linked_lenght(head) * sizeof(Product) << " байт"; loading(4, 0.4);
					break;
				}
				case 2:
				{
					if (!FileFirstUntillEnd(head))
						break;
					cout << "Данные введены успешно!"; loading(3, 0.4);
					cout << "\rОбщая затраченная память составляет " << linked_lenght(head) * sizeof(Product) << " байт"; loading(4, 0.4);
					break;
				}
				default:
				{
					cout << "Такого варианта не было!"; loading(3, 0.4);
					break;
				}
				}
				break;
			}
			case 6:
			{
				system("cls");
				switch (FileRead())
				{
				case 1:
				{
					if (!FileLastUntillN(head))
						break;
					cout << "Данные введены успешно!"; loading(3, 0.4);
					cout << "\rОбщая затраченная память составляет " << linked_lenght(head) * sizeof(Product) << " байт"; loading(4, 0.4);
					break;
				}
				case 2:
				{
					if (!FileLastUntillEnd(head))
						break;
					cout << "Данные введены успешно!"; loading(3, 0.4);
					cout << "\rОбщая затраченная память составляет " << linked_lenght(head) * sizeof(Product) << " байт"; loading(4, 0.4);
					break;
				}
				default:
				{
					cout << "Такого варианта не было!"; loading(4, 0.4);
					break;
				}
				}
				break;
			}
			case 7:
				break;
			}
			break;
		}
		case 11: //Вывод на экран
		{
			if (linked_lenght(head) == 1) {
				cout << "Ошибка 283! Списка не существует!" << endl;
				return(283);
			}
			cout << "|———————————————————————————————————————————————";
			cout << "—————————————————————————————————————————————————————————————|\n";
			cout << "|" << setw(53) << right << "Count of products : ";
			cout << setw(3) << left << linked_lenght(head) - 1;
			cout << "                                                    |\n";
			cout << "|———————————————————————————————————————————————";
			cout << "—————————————————————————————————————————————————————————————|\n";
			cout << "| Name                     | Country          |";
			cout << " Fabricator      | Articul    | Cost          | Next          |\n";
			cout << "|———————————————————————————————————————————————";
			cout << "—————————————————————————————————————————————————————————————|\n";
			cout << "|———————————————————————————————————————————————";
			cout << "—————————————————————————————————————————————————————————————|\n";
			node = head.next;
			while (node)
			{
				node->print();
				node = node->next;
			}
			system("pause");
			break;
		}
		case 12://Освобождение памяти
		{
			if (linked_lenght(head) == 1)
			{
				cout << "Память уже освобождена" << endl; loading(3, 0.4);
				break;
			}
			DeleteList(head);
			cout << "Память освобождена"; loading(3, 0.4);
			break;
		}
		case 13:
		{//переход к следущему списку
			return(retur+100);
		}
		default:
			if (linked_lenght(head) != 1) {
				cout << "В следующий раз, освободи память, перед тем как выходить!"; loading(5, 0.4);
				DeleteList(head);
				cout << endl << "Память освобождена"; loading(3, 0.4);
			}
			return(1001);
		}
	} while (true);
}

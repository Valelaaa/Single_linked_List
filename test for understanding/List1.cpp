#include "Headerer.h"
int mainFirstList(Product& head, int numbr) {
	Product* node;
	int retur=0;
	node = &head;
	do {
		system("cls");
		switch (Menu1(numbr))
		{
		case 1: //���������� ���������
		{
			if (!&head) {
				cout << "������ 17! ������ �� ����������!" << endl;
				return(17);
			}
			system("cls");
			switch (Adding())
			{
			case 1: //������� �������� � ������
			{

				AddFirst(head, linked_lenght(head));
				cout << "������ ������� �������";
				cout << "����� ����������� ������ ���������� " << linked_lenght(head) * sizeof(Product) << " ����"; loading(4, 0.4);
				break;
			}
			case 2://������� �������� � �����
			{
				add_last(node, linked_lenght(head));
				cout << "������ ������� �������";
				cout << "����� ����������� ������ ���������� " << linked_lenght(head) * sizeof(Product) << " ����"; loading(4, 0.4);
				break;
			}
			case 3: //������� ���������� ��������� � ������
			{
				int n;
				cout << "������� ������� ���������� ������ ?" << endl << ">>> "; if (cin >> n, !cin.good()) {
					cout << "������, ������� �����!"; loading(4, 0.4); break;
				}
				if (n < 1) {
					cout << "������! ����������� ��������� ������ ���� ������ 0" << endl; loading(4, 0.4);
					break;
				}
				for (int i = 0; i < n; i++)
				{
					AddFirst(head, linked_lenght(head));
					cout << endl;
				}
				cout << n << " ������� ������� ������� " << endl;
				cout << "����� ����������� ������ ���������� " << linked_lenght(head) * sizeof(Product) << " ����"; loading(4, 0.4);
				break;
			}
			case 4: //������� ���������� ��������� � �����
			{
				int n;
				cout << "������� ������� ���������� ������ ?" << endl << ">>> "; if (cin >> n, !cin.good()) {
					cout << "������, ������� �����!"; loading(4, 0.4); break;
				}
				if (n < 1) {
					cout << "������! ����������� ��������� ������ ���� ������ 0" << endl;
					return(0);
				}
				cout << "������� Enter ����� ������ ����";
				for (int i = 0; i < n; i++)
				{
					add_last(node, linked_lenght(head));
					cout << endl;
				}
				cout << n << " ������� ������� ������� " << endl;
				cout << "����� ����������� ������ ���������� " << linked_lenght(head) * sizeof(Product) << " ����"; loading(4, 0.4);
				break;
			}
			case 5://������� ��������
			{
				system("cls");
				switch (Inserting())
				{
				case 1:
				{
					Insert(head, 1);
					cout << "������� ������� ��������"; loading(3, 0.4);
					break;
				}
				case 2:
				{
					Insert(head, 0);
					cout << "������� ������� ��������"; loading(3, 0.4);
					break;
				}
				case 3:
					break;
				default:
				{
					cout << "������ �������� �� ����!"; loading(3, 0.4);
					break;
				}
				}
				break;
			}
			case 6: //������ �����������
			{
				break;
			}
			default:
			{
				cout << "������ �������� �� ����!"; loading(3, 0.4);
				break;
			}
			}
			break;
		}
		case 2://���������� 
		{
			if (linked_lenght(head) == 1) {
				cout << "������ ����"; loading(3, 0.4);
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
				cout << "��� ���������� �����������?" << endl << " 1 - �� �����������" << endl
					<< " 2 - �� ��������" << endl << ">>> "; if (cin >> crt, !cin.good()) {
					cout << "���������� ������ �����!"; loading(4, 0.4); break;
				}
				if (crt < 1 || crt > 2) {
					cout << "������ �������� ���������� �� ����!"; loading(4, 0.4);
					break;
				}
				if (crt == 1)
					retur=SorterDecrease(head, option);
				else
					retur=Sorter(head, option);
				cout << "������ ������� ������������"; loading(4, 0.4);
				break;
			}
			case 5:
			{
				int crt;
				cout << "��� ���������� �����������?" << endl << " 1 - �� �����������" << endl
					<< " 2 - �� ��������" << endl << ">>> "; if (cin >> crt, !cin.good())
				{
					cout << "���������� ������ �����!"; loading(4, 0.4); break;
				}
				if (crt < 1 || crt > 2)
				{
					cout << "������ �������� ���������� �� ����!"; loading(4, 0.4);
					break;
				}
				if (crt == 1)
					retur=SortingCost(head);
				else
					retur=SortingCostdecrease(head);
				cout << "������ ������� ������������"; loading(4, 0.4);
				break;
			}
			case 6: 
				break;
			default:
			{
				cout << "�������� ���������� ������ �������!"; loading(4, 0.4);
				break;
			}
			}
			break;
		}
		case 3: //����� ����������
		{
			if (linked_lenght(head) == 1) {
				cout << "������! ������ ����!"; loading(4, 0.4);
				break;
			}
			Change(head);
			cout << "����� ���������� ��������� �������!"; loading(4, 0.4);
			break;
		}
		case 4: //�������������� ��������
		{
			if (linked_lenght(head) == 1) {
				cout << "������ ����"; loading(3, 0.4);
				break;
			}
			int nam;    //����� ������� �����������
			if (!(nam = FindName(head)))
				break;
			system("cls");
			int var;    //������� ��� ������ ��������
			var = Redact();
			switch (var)
			{
			case 1:
			{
				EditElement(head, nam);
				cout << "������� ��������������"; loading(3, 0.4);
				break;
			}
			case 2:
			{
				EditElement(head, nam, var);
				cout << "������� ��������������"; loading(3, 0.4);
				break;
			}
			case 3:
			{
				EditElement(head, nam, var);
				cout << "������� ��������������"; loading(3, 0.4);
				break;
			}
			case 4:
			{
				EditElement(head, nam, var);
				cout << "������� ��������������"; loading(3, 0.4);
				break;
			}
			case 5:
			{

				EditElement(head, nam, var);
				cout << "������� ��������������"; loading(3, 0.4);
				break;
			}
			case 6:
			{

				EditElement(head, nam, var);
				cout << "������� ��������������"; loading(3, 0.4);
				break;
			}
			case 7:
				break;
			default:
			{
				cout << "������ ��������� �� ����"; loading(3, 0.4);
				break; }
			}
			break;
		}
		case 5: //����� ��������
		{
			if (linked_lenght(head) == 1)
			{
				cout << "������ 92! ������ �� ����������!" << endl;
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
				cout << " ���������� � " << finded - 1 << "-��� ������" << endl;
				int ch;
				cout << "����������� ������� ?" << endl << "1. - ��" << endl << "2. - ���" << endl;
				cout << ">>> "; if (cin >> ch, !cin.good()) {
					cout << "������, ������� �����!"; loading(4, 0.4); break;
				}
				if (ch == 1)
				{
					cout << "|�����������������������������������������������";
					cout << "�������������������������������������������������������������|\n";
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
				cout << " ���������� � " << finded - 1 << "-��� ������" << endl;
				int ch;
				cout << "����������� ������� ?" << endl << "1. - ��" << endl << "2. - ���" << endl;
				cout << ">>> "; if (cin >> ch, !cin.good()) {
					cout << "������, ������� �����!"; loading(4, 0.4); break;
				}
				if (ch == 1)
				{
					cout << "|�����������������������������������������������";
					cout << "�������������������������������������������������������������|\n";
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
				cout << " ���������� � " << finded - 1 << "-��� ������" << endl;
				int ch;
				cout << "����������� ������� ?" << endl << "1. - ��" << endl << "2. - ���" << endl;
				cout << ">>> "; if (cin >> ch, !cin.good()) {
					cout << "������, ������� �����!"; loading(4, 0.4); break;
				}
				if (ch == 1) {
					cout << "|�����������������������������������������������";
					cout << "�������������������������������������������������������������|\n";
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
				cout << " ���������� � " << finded - 1 << "-��� ������" << endl;
				int ch;
				cout << "����������� ������� ?" << endl << "1. - ��" << endl << "2. - ���" << endl;
				cout << ">>> "; if (cin >> ch, !cin.good()) {
					cout << "������, ������� �����!"; loading(4, 0.4); break;
				}
				if (ch == 1)
				{
					cout << "|�����������������������������������������������";
					cout << "�������������������������������������������������������������|\n";
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
				cout << " ���������� � " << finded - 1 << "-��� ������" << endl;
				int ch;
				cout << "����������� ������� ?" << endl << "1. - ��" << endl << "2. - ���" << endl;
				cout << ">>> "; if (cin >> ch, !cin.good()) {
					cout << "������, ������� �����!"; loading(4, 0.4); break;
				}
				if (ch == 1)
				{
					cout << "|�����������������������������������������������";
					cout << "�������������������������������������������������������������|\n";
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
		case 6://������� ������
		{
			return(282);
		}
		case 7://������� �������
		{
			if (linked_lenght(head) == 1)
			{
				cout << "� ������ ��� ���������";
				return(239);
			}
			DeleteElement(head);
			cout << "������� ������� ������"; loading(3, 0.4);
			cout << "\r����� ���������� ������ ���������� " << linked_lenght(head) * sizeof(Product) << " ����"; loading(4, 0.4);
			break;
		}
		case 8://���������� ������ �� ���
		{
			if (!&head)
			{
				cout << "�� ������� ������� ������ " << endl << "��������� ������ �����" << endl;
				return(210);
			}
			return(366);
			break;
		}
		case 9://�������� � ����
		{
			if (linked_lenght(head) == 1)
			{
				cout << "������! ������ �� ����������!"; loading(3, 0.6);
				break;
			}
			int h;
			cout << "�������� ���� ������ �����: " << endl;
			cout << "1 - ��������� � ���� Output.txt" << endl;
			cout << "2 - ������� ������ ���� ����� (��� ������� � � �����������)" << endl;
			cout << ">>> ";
			if (cin >> h, !cin.good()) {
				cout << "������, ������� �����!"; loading(4, 0.4); break;
			}
			if (h <= 0 || h > 2) break;
			if (h == 2)
			{
				cin.get();
				string strt;
				cout << "������� ���� �����:"; getline(cin, strt);
				FileRecord(head, strt);
				cout << "���������� ������ �����"; loading(5, 0.6);
				break;
			}
			else		//���� �� ����� ����������
			{
				FileRecord(head, "Output.txt");
				cout << "���������� ������ �����"; loading(5, 0.6);
				break;
			}
			break;
			break;
		}
		case 10: //��������� �� �����
		{
			if (!&head)
			{
				cout << "������ 150! ������ �� ����������!" << endl;
				return(150);
			}
			system("cls");
			switch (FileReading())
			{
			case 1:
			{
				if (!FileAddFirst(head))
					break;
				cout << "�������� ��������� �������"; loading(3, 0.4);
				cout << "\r����� ����������� ������ ���������� " << linked_lenght(head) * sizeof(Product) << " ����"; loading(4, 0.4);
				break;
			}
			case 2:
			{
				if (!FileAddLast(head))
					break;
				cout << "�������� ��������� �������"; loading(3, 0.4);
				cout << "\r����� ����������� ������ ���������� " << linked_lenght(head) * sizeof(Product) << " ����"; loading(4, 0.4);
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
					cout << "������� ������� ��������"; loading(3, 0.4);
					cout << "\r����� ����������� ������ ���������� " << linked_lenght(head) * sizeof(Product) << " ����"; loading(4, 0.4);
					break;
				}
				case 2:
				{
					FileInsert(head, 0);
					cout << "������� ������� ��������"; loading(3, 0.4);
					cout << "\r����� ����������� ������ ���������� " << linked_lenght(head) * sizeof(Product) << " ����"; loading(4, 0.4);
					break;
				}
				default:
				{
					cout << "������ �������� �� ����!"; loading(3, 0.4);
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
					cout << "�������� ������� ���������"; loading(3, 0.4);
					cout << "\r����� ����������� ������ ���������� " << linked_lenght(head) * sizeof(Product) << " ����"; loading(4, 0.4);
					break;
				}
				case 2:
				{
					FileInsertUntillN(head, 0);
					cout << "�������� ������� ���������"; loading(3, 0.4);
					cout << "\r����� ����������� ������ ���������� " << linked_lenght(head) * sizeof(Product) << " ����"; loading(4, 0.4);
					break;
				}
				default:
				{
					cout << "������ �������� �� ����!"; loading(3, 0.4);
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
					cout << "������ ������� �������!"; loading(3, 0.4);
					cout << "\r����� ����������� ������ ���������� " << linked_lenght(head) * sizeof(Product) << " ����"; loading(4, 0.4);
					break;
				}
				case 2:
				{
					if (!FileFirstUntillEnd(head))
						break;
					cout << "������ ������� �������!"; loading(3, 0.4);
					cout << "\r����� ����������� ������ ���������� " << linked_lenght(head) * sizeof(Product) << " ����"; loading(4, 0.4);
					break;
				}
				default:
				{
					cout << "������ �������� �� ����!"; loading(3, 0.4);
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
					cout << "������ ������� �������!"; loading(3, 0.4);
					cout << "\r����� ����������� ������ ���������� " << linked_lenght(head) * sizeof(Product) << " ����"; loading(4, 0.4);
					break;
				}
				case 2:
				{
					if (!FileLastUntillEnd(head))
						break;
					cout << "������ ������� �������!"; loading(3, 0.4);
					cout << "\r����� ����������� ������ ���������� " << linked_lenght(head) * sizeof(Product) << " ����"; loading(4, 0.4);
					break;
				}
				default:
				{
					cout << "������ �������� �� ����!"; loading(4, 0.4);
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
		case 11: //����� �� �����
		{
			if (linked_lenght(head) == 1) {
				cout << "������ 283! ������ �� ����������!" << endl;
				return(283);
			}
			cout << "|�����������������������������������������������";
			cout << "�������������������������������������������������������������|\n";
			cout << "|" << setw(53) << right << "Count of products : ";
			cout << setw(3) << left << linked_lenght(head) - 1;
			cout << "                                                    |\n";
			cout << "|�����������������������������������������������";
			cout << "�������������������������������������������������������������|\n";
			cout << "| Name                     | Country          |";
			cout << " Fabricator      | Articul    | Cost          | Next          |\n";
			cout << "|�����������������������������������������������";
			cout << "�������������������������������������������������������������|\n";
			cout << "|�����������������������������������������������";
			cout << "�������������������������������������������������������������|\n";
			node = head.next;
			while (node)
			{
				node->print();
				node = node->next;
			}
			system("pause");
			break;
		}
		case 12://������������ ������
		{
			if (linked_lenght(head) == 1)
			{
				cout << "������ ��� �����������" << endl; loading(3, 0.4);
				break;
			}
			DeleteList(head);
			cout << "������ �����������"; loading(3, 0.4);
			break;
		}
		case 13:
		{//������� � ��������� ������
			return(retur+100);
		}
		default:
			if (linked_lenght(head) != 1) {
				cout << "� ��������� ���, �������� ������, ����� ��� ��� ��������!"; loading(5, 0.4);
				DeleteList(head);
				cout << endl << "������ �����������"; loading(3, 0.4);
			}
			return(1001);
		}
	} while (true);
}

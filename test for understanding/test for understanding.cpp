#include "Headerer.h"

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    Product* head;
    int n = 1;
    head = new Product[n];
    head->next = NULL;
    int menu;
    do {
        system("cls");
        switch (mainmenu(n)) {
        case 1: 
        {
            if (n <= 5) {
                int m = n;
                head = NewList(head, n);
                for (int i = m; i < n; i++) head[i].next = NULL;
                break;
            }
            else {
                cout << "В данной версии программы доступно только 5 списков" << endl; loading(4, 0.4);
                return(0);
            }

        }
        case 2: 
        {
            menu = mainFirstList(head[0], 1);
            break;
        }
        case 3:
        {
            menu = mainFirstList(head[1], 2);
            if (menu == 282)
            {
                int choise;
                cout << "Выберите тип слияния:" << endl;
                cout << " 1  - В возрастающий" << endl;
                cout << " 2  - В убывающий" << endl;
                cout << ">>> "; if (cin >> choise,cin.good());
                switch (choise) {
                case 1:
                {
                    int m = n;
                    head = NewList(head, n);
                    for (int i = m; i < n; i++) head[i].next = NULL;
                    fusion(head[0], head[1], head[2]);
                    break;
                }
                case 2: {
                    int m = n;
                    head = NewList(head, n);
                    for (int i = m; i < n; i++) head[i].next = NULL;
                    dicrfusion(head[0], head[1], head[2]);
                    break;
                }
                default:
                {
                    cout << "Такого варианта нет" << endl;
                    break;
                }
                }
            }
            break;
        }
        case 4:
        {
            menu = mainFirstList(head[2], 3);
            if (menu == 366) {
                int valle;
                cout << "Как необходимо разделить список?" << endl;
                cout << " 1  - Разделить после введенного слова" << endl;
                cout << " 2  - Разделить поровну в каждый список" << endl;
                cout<<">>> "; if (cin>>valle,cin.good())
                    switch (valle) 
                    {
                    case 1: 
                    {
                        int m = n;
                        head = NewList(head, n);
                        for (int i = m; i < n; i++) head[i].next = NULL;
                        m = n;
                        head = NewList(head, n);
                        for (int i = m; i < n; i++) head[i].next = NULL;
                        disfusionUntilN(head[2],head[3], head[4]);
                        break;
                    }
                    case 2: 
                    {
                        int m = n;
                        head = NewList(head, n);
                        for (int i = m; i < n; i++) head[i].next = NULL;
                        m = n;
                        head = NewList(head, n);
                        for (int i = m; i < n; i++) head[i].next = NULL;
                        disfusionOneTwo(head[2], head[3], head[4]);
                    }
                    default:
                    {
                        cout << "Такого варианта нет" << endl;
                        break;
                    }
                    }
            }
            break;
        }
        case 5:
        {
            menu = mainFirstList(head[3], 4);
            break;
        }
        case 6: 
        {
            menu = mainFirstList(head[4], 5);
            break;
        }
        default: 
        {
            return(0);

        }
        }
    } while (true);
    /*
    disfusionUntilN(head[0], head[1], head[2]);*/
    //Если возращается 100, сортировка не произошла
 
    return(0);
   
}

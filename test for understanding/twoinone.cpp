#include "Headerer.h"
//с именами 
int fusion(Product head1, Product head2,Product &fus) 
{
	fus.next = NULL;
	Product* node1=NULL, * node2=NULL,*nodenew=NULL;
	node1 = head1.next;
	node2 = head2.next;
	nodenew = &fus;
	if ((node1->name < node1->next->name) && (node2->name < node2->next->name)) 
	{
		while (node1 && node2) 
		{
			nodenew->next = new Product();

			if (node1->name > node2->name) 
			{
				nodenew->next = node2;
				node2=node2->next;
			}
			else
			{
				nodenew->next = node1;
				node1 = node1->next;
			}
			nodenew = nodenew->next;
			nodenew->next = NULL;
		}
		while (node1) {
			nodenew->next = new Product();
			nodenew->next = node1;
			node1 = node1->next;
			nodenew = nodenew->next;
			nodenew->next = NULL;
		}
		while (node2) {
			nodenew->next = new Product();
			nodenew->next = node2;
			node2 = node2->next;
			nodenew = nodenew->next;
			nodenew->next = NULL;
		}
	}
	else if ((node1->name < node1->next->name) && (node2->name > node2->next->name))
	{
		int k = 0, count1 = linked_lenght(head2), ount1 = 0;
		while (node1 && (count1 - k>1))
		{
			nodenew->next = new Product();
			ount1 = 0;
			node2 = &head2;
			while (count1 - k > 1)
			{
				ount1++;
				if (ount1 == count1 - k)
					break;
				node2 = node2->next;
			}
			if (node1->name > node2->name && count1 - k > 1)
			{
					nodenew->next = node2;
					k++;
			}
			else
			{
				nodenew->next = node1;
				node1 = node1->next;
			}
			nodenew = nodenew->next;
			nodenew->next = NULL;
		}
		while (node1)
		{
			nodenew->next = new Product();
			nodenew->next = node1;
			node1 = node1->next;
			nodenew = nodenew->next;
			nodenew->next = NULL;
		}


		while (count1 - k > 1)
		{
			nodenew->next = new Product();
			ount1 = 0;
			node2 = &head2;
			while (count1 - k > 1) {
				ount1++;
				if (ount1 == count1 - k) {
					k++;
					break;
				}
				node2 = node2->next;
			}
			if (count1 - k >= 1)
			{
				nodenew->next = node2;
				nodenew = nodenew->next;
				nodenew->next = NULL;
			}
		}
	}
	else if ((node1->name > node1->next->name) && (node2->name < node2->next->name)) 
	{
		int k = 0, count1 = linked_lenght(head1), ount1 = 0;
		while (node2 && (count1 - k > 1))
		{
			nodenew->next = new Product();
			ount1 = 0;
			node1 = &head1;
			while (count1 - k > 1)
			{
				ount1++;
				if (ount1 == count1 - k)
					break;
				node1 = node1->next;
			}
			if (node1->name < node2->name && count1 - k > 1)
			{
				nodenew->next = node1;
				k++;
			}
			else
			{
				nodenew->next = node2;
				node2 = node2->next;
			}
			nodenew = nodenew->next;
			nodenew->next = NULL;
		}
		while (node2)
		{
			nodenew->next = new Product();
			nodenew->next = node2;
			node2 = node2->next;
			nodenew = nodenew->next;
			nodenew->next = NULL;
		}
		while (count1 - k > 1)
		{
			nodenew->next = new Product();
			ount1 = 0;
			node1 = &head1;
			while (count1 - k > 1) {
				ount1++;
				if (ount1 == count1 - k) {
					k++;
					break;
				}
				node1 = node1->next;
			}
			if (count1 - k >= 1)
			{
				nodenew->next = node1;
				nodenew = nodenew->next;
				nodenew->next = NULL;
			}
		}
	}else if ((node1->name > node1->next->name) && (node2->name > node2->next->name)) 
	{
		int k = 0, count1 = linked_lenght(head2), ount1 = 0;
		int n = 0, count2 = linked_lenght(head1), ount2 = 0;
		while (count2 - n > 1 && (count1 - k > 1))
		{
			nodenew->next = new Product();
			ount1 = 0; ount2 = 0;
			node2 = &head2; node1 = &head1;
			while (count2 - n > 1)
			{
				ount2++;
				if (ount2 == count2 - n)
					break;
				node2 = node2->next;
			}
			while (count1 - k > 1)
			{
				ount1++;
				if (ount1 == count1 - k)
					break;
				node1 = node1->next;
			}
			if (node1->name > node2->name && ount2 == count2 - n)
			{
				nodenew->next = node2;
				n++;
			}
			else if (count1 - k > 1)
			{
				nodenew->next = node1;
				k++;
			}
			nodenew = nodenew->next;
			nodenew->next = NULL;
		}
		while (count1 - k > 1)
		{
			nodenew->next = new Product();
			ount1 = 0;
			node1 = &head1;
			while (count1 - k > 1) {
				ount1++;
				if (ount1 == count1 - k) {
					k++;
					break;
				}
				node1 = node1->next;
			}
			if (count1 - k >= 1)
			{
				nodenew->next = node1;
				nodenew = nodenew->next;
				nodenew->next = NULL;
			}
		}
		while (count2 - n > 1)
		{
			nodenew->next = new Product();
			ount1 = 0;
			node2 = &head2;
			while (count2 - n > 1) {
				ount2++;
				if (ount2 == count2 - n) {
					n++;
					break;
				}
				node2 = node2->next;
			}
			if (count2 - n >= 1)
			{
				nodenew->next = node2;
				nodenew = nodenew->next;
				nodenew->next = NULL;
			}
		}
	}
	return(0);
}
int dicrfusion(Product head1, Product head2, Product& fus) {
	fus.next = NULL;
	Product* node1 = NULL, * node2 = NULL, * nodenew = NULL;
	node1 = head1.next;
	node2 = head2.next;
	nodenew = &fus;
	int k = 0, count1 = linked_lenght(head2), ount1 = 0;
	int n = 0, count2 = linked_lenght(head1), ount2 = 0;
	if ((node1->name < node1->next->name) && (node2->name < node2->next->name))
	{
		while (count2 - n > 1 && (count1 - k > 1))
		{
			nodenew->next = new Product();
			ount1 = 0; ount2 = 0;
			node2 = &head2; node1 = &head1;
			while (count2 - n > 1)
			{
				ount2++;
				if (ount2 == count2 - n)
					break;
				node2 = node2->next;
			}
			while (count1 - k > 1)
			{
				ount1++;
				if (ount1 == count1 - k)
					break;
				node1 = node1->next;
			}
			if (node1->name < node2->name && ount2 == count2 - n)
			{
				nodenew->next = node2;
				n++;
			}
			else if (count1 - k > 1)
			{
				nodenew->next = node1;
				k++;
			}
			nodenew = nodenew->next;
			nodenew->next = NULL;
		}
		while (count1 - k > 1)
		{
			nodenew->next = new Product();
			ount1 = 0;
			node1 = &head1;
			while (count1 - k > 1) {
				ount1++;
				if (ount1 == count1 - k) {
					k++;
					break;
				}
				node1 = node1->next;
			}
			if (count1 - k >= 1)
			{
				nodenew->next = node1;
				nodenew = nodenew->next;
				nodenew->next = NULL;
			}
		}
		while (count2 - n > 1)
		{
			nodenew->next = new Product();
			ount2 = 0;
			node2 = &head2;
			while (count2 - n >= 1) {
				ount2++;
				if (ount2 == count2 - n) {
					n++;
					break;
				}
				node2 = node2->next;
			}
			if (count2 - n >= 1)
			{
				nodenew->next = node2;
				nodenew = nodenew->next;
				nodenew->next = NULL;
			}
		}
	}
	else if ((node1->name < node1->next->name) && (node2->name > node2->next->name)) 
	{
		int k = 0, count1 = linked_lenght(head1), ount1 = 0;
		while (node2 && (count1 - k > 1))
		{
			nodenew->next = new Product();
			ount1 = 0;
			node1 = &head1;
			while (count1 - k > 1)
			{
				ount1++;
				if (ount1 == count1 - k)
					break;
				node1 = node1->next;
			}
			if (node1->name > node2->name && count1 - k > 1)
			{
				nodenew->next = node1;
				k++;
			}
			else
			{
				nodenew->next = node2;
				node2 = node2->next;
			}
			nodenew = nodenew->next;
			nodenew->next = NULL;
		}
		while (node2)
		{
			nodenew->next = new Product();
			nodenew->next = node2;
			node2 = node2->next;
			nodenew = nodenew->next;
			nodenew->next = NULL;
		}
		while (count1 - k > 1)
		{
			nodenew->next = new Product();
			ount1 = 0;
			node1 = &head1;
			while (count1 - k > 1) {
				ount1++;
				if (ount1 == count1 - k) {
					k++;
					break;
				}
				node1 = node1->next;
			}
			if (count1 - k >= 1)
			{
				nodenew->next = node1;
				nodenew = nodenew->next;
				nodenew->next = NULL;
			}
		}
	}
	else if ((node1->name > node1->next->name) && (node2->name < node2->next->name))
	{
		int k = 0, count1 = linked_lenght(head2), ount1 = 0;
		while (node1 && (count1 - k > 1))
		{
			nodenew->next = new Product();
			ount1 = 0;
			node2 = &head2;
			while (count1 - k > 1)
			{
				ount1++;
				if (ount1 == count1 - k)
					break;
				node2 = node2->next;
			}
			if (node1->name < node2->name && count1 - k > 1)
			{
				nodenew->next = node2;
				k++;
			}
			else
			{
				nodenew->next = node1;
				node1 = node1->next;
			}
			nodenew = nodenew->next;
			nodenew->next = NULL;
		}
		while (node1)
		{
			nodenew->next = new Product();
			nodenew->next = node1;
			node1 = node1->next;
			nodenew = nodenew->next;
			nodenew->next = NULL;
		}


		while (count1 - k > 1)
		{
			nodenew->next = new Product();
			ount1 = 0;
			node2 = &head2;
			while (count1 - k > 1) {
				ount1++;
				if (ount1 == count1 - k) {
					k++;
					break;
				}
				node2 = node2->next;
			}
			if (count1 - k >= 1)
			{
				nodenew->next = node2;
				nodenew = nodenew->next;
				nodenew->next = NULL;
			}
		}
	}
	else if ((node1->name > node1->next->name) && (node2->name > node2->next->name))
	{
		while (node1 && node2)
		{
			nodenew->next = new Product();

			if (node1->name < node2->name)
			{
				nodenew->next = node2;
				node2 = node2->next;
			}
			else
			{
				nodenew->next = node1;
				node1 = node1->next;
			}
			nodenew = nodenew->next;
			nodenew->next = NULL;
		}
		while (node1) {
			nodenew->next = new Product();
			nodenew->next = node1;
			node1 = node1->next;
			nodenew = nodenew->next;
			nodenew->next = NULL;
		}
		while (node2) {
			nodenew->next = new Product();
			nodenew->next = node2;
			node2 = node2->next;
			nodenew = nodenew->next;
			nodenew->next = NULL;
		}
	}
	return(0);
}

int disfusionOneTwo(Product head, Product& head1, Product& head2)
{
	Product* node = &head;
	int f = -1; 
	Product* node1 = &head1;
	Product* node2 = &head2;
	while (node->next)
	{
		if (f > 0)
		{
			Product *temp = node;
			node1->next = new Product();
			node1->next = temp->next;
			node1 = node1->next;
		}
		else
		{
			Product *temp = node;
			node2->next = new Product();
			node2->next = temp->next;
			node2 = node2->next;
		}
		f = -f;
		node = node->next;
	}
	node2->next = NULL;
	node1->next = NULL;
	return(0);
}
int disfusionUntilN(Product head, Product& head1, Product& head2)
{
	int n;
	cout << "Введите имя, до с которого будет начинаться второй список:" << endl;
	n = FindNamez(head);
	Product* node=&head;
	Product* node1 = &head1;
	Product* node2 = &head2;
	int count1 = 1;
	node1->next = new Product();
	node1->next = node->next;
	node1 = node1->next;
	node1 = &head1;
	while (node1)
	{
		count1++;
		if (count1 >= n) {
			node2->next = new Product();
			node2->next = node1->next;
			node1->next = NULL;
		}
		node1 = node1->next;
	}
	return(0);
}

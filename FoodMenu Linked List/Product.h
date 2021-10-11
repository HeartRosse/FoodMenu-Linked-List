#pragma once
#include <string>
using namespace std;
struct Node {
	string value;
	Node* next;

	Node(string _val) : value(_val), next(nullptr) {}
};

struct list {
	Node* first;
	Node* last;

	list() : first(nullptr), last(nullptr) {}

	bool is_empty() {
		return first == nullptr;
	}

	void push_back(string _val) {
		Node* p = new Node(_val);
		if (is_empty()) {
			first = p;
			last = p;
			return;
		}
		last->next = p;
		last = p;
	}

	void print() {
		if (is_empty()) return;
		Node* p = first;
		while (p) {
			cout << p->value << " " << "\n";
			p = p->next;
		}
		cout << endl;
	}
};
string product[9] = { "Пицца","Гамбургер","Картошка-Фри", "Пончик", "Шаурма", "Кока-Кола", "Пепси", "Наггетсы", "Чизбургер" };
int price[9] = { 85,50,65,40,75,55,55,60,55 };
int size_price = sizeof(price) / sizeof(price[0]);
int size_product = sizeof(product) / sizeof(product[0]);
void print_product_price() {
	for (int i = 0; i < size_price; i++) {
		cout << product[i] << " " << price[i] << " рублей." << endl;
	}
}

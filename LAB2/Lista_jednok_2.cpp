#include<iostream>
#include<string>
using namespace std;

struct zadanie {
        int liczba;
        struct zadanie *next;
};

void dodawanie(struct zadanie **head) {
		int liczba;    
        struct zadanie *n=new zadanie;
        cout << "Podaj liczby: ";
        cin>> liczba;
        n->liczba=liczba;
        n->next = NULL;
        if(*head==NULL) {
            *head=n;
        }
        else {
            struct zadanie *chwilowa;
            chwilowa = *head;
            while(chwilowa->next) {
                chwilowa=chwilowa->next;
            }
            chwilowa->next=n;
        }
}

void wypisywanie(struct zadanie *head) {
    while(head){
            cout<< head->liczba<<endl;
            head=head->next;
    }
}

int main(void) {
    struct zadanie *head = NULL;
    int zrob;
    int koniec=1;
    while(koniec==1) {
        cout<<endl<<"Podaj polecenie: " <<endl<<"1. Dodaj na koniec" <<endl<< "2. Wypisz"<<endl;
        cin>>zrob;
        switch(zrob) {
            case 1:
                dodawanie(&head);
                break;
            case 2:
                wypisywanie(head);
                break;
            default:
                break;
        }
    }
}


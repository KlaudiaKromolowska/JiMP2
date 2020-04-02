#include<iostream>
#include<string>
using namespace std;

struct zadanie {
        string przedmiot;
        string ocena;
        struct zadanie *next;
};

void dodawanie(struct zadanie **head) {
	 string przedmiot;
        string ocena;
    
        struct zadanie *n=new zadanie;
        cout << endl<<"Podaj nazwe przedmiotu: ";
        cin>> przedmiot;
		n->przedmiot=przedmiot;
        cout << "Podaj ocene: ";
        cin>> ocena;
		n->ocena=ocena;
        n->next = NULL;
        if(*head==NULL) {
            *head=n;
        }
        else {
            struct zadanie *tmp;
            tmp = *head;
            while(tmp->next) {
                tmp=tmp->next;
            }
            tmp->next=n;
        }
}

void wypisywanie(struct zadanie *head) {
    if(head!=NULL) {
        do {
            cout<< head->przedmiot<<" "<< head->ocena<<endl;
            head=head->next;
        }while(head);
    }
}

int main(void) {
    struct zadanie *head = NULL;
    int zrob;
    int koniec=1;
    while(koniec==1) {
        cout<<endl<<"Podaj polecenie: " <<endl<<"1. Dodaj na koniec" <<endl<< "2. Wypisz"<<endl<<"3. wyjdz\n"<<endl;
        cin>>zrob;
        switch(zrob) {
            case 1:
                dodawanie(&head);
                break;
            case 2:
                wypisywanie(head);
                break;
            case 3:
                koniec=0;
                break;
            default:
                break;
        }
    }
}


#include <iostream>
using namespace std;
template <int a>
class tab
{
    int zmienna;
	public:
	    tab()
	    {
	        zmienna = a;
	    }
	    int wyswietl()
	    {
	        return zmienna;
	    }
	    ~tab(){}
};
int main()
{
    tab<222>* nowa = new tab <222>;
    cout << nowa->wyswietl() << endl;
    
    return 0;
}
/*#include <iostream>
using namespace std;
template <typename T>


void Fun (T * p, T max, int n)
{
        max = p[0];
        for(int i=0; i<n; i++)
                if(p[i] > max) max = p[i];
		cout<<max;//w tym miejscu
        cout << "\n\n";
}

int main()
{
        int tab_int[5] = {3, 6, 15, 2, 4}, max_i;
        double tab_double[5] = {3.44, 12.22, 12.77, 8.64, 3.12}, max_d;
        Fun(tab_int, max_i);
        Fun(tab_double, max_d);
        return 0;
}


*/
/*#include <iostream>
using namespace std;
template <class typ>


class nowa_zmienna{
    typ zmienna;
	public:
	    int wyswietl();
	};

	template <class typ>
	int nowa_zmienna <typ>::wyswietl(){
	    cout << "sasasfsadgdfcnfghndfhb" << endl;
	}
int main()
{
    nowa_zmienna < int > nowa;
    nowa.wyswietl();
}*/

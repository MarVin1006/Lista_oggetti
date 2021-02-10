#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

class Lista {
	private:
	    int top = 0;
		int l;
		string *data;
	public:
		Lista(int lunghezza){
			l = lunghezza;
			data = new string[l];
		}
		int len()
		{
		    return l;
        }
		void stampa(){
		    for (int i=0; i<top; i++)
            {
                cout << data[i] << endl;
            }

		}

		void add(string stringa)
		{
		    if (top<=l)
            {
                data[top] = stringa;
                top++;
		    }
		    else
		    {
		        cout<<"Non puoi eccedere il limite del vettore (metodo add)"<< endl;
		    }
		}

        string get(int n)
        {
            return data[n];
        }
        void write(int n, string stringa)
        {
            if (n>=0 && n<l){
                data[n] = stringa;
            }
            else{
                cout << "Non puoi eccedere il limite del vettore (metodo write)" << endl;
            }
        }
};

int main()
{
	Lista v(6);
	v.add("ciao");
	v.add("qwertyuiop");
    string presa = v.get(1);
	v.add("test");
	cout << "Stringa prelevata: " << presa << endl;
    cout << "Stampa 1"<< endl;
    v.stampa();
    v.write(0, "arrivederci");
    cout << "Stampa 2" << endl;
    v.stampa();

    /* Generazione del seme casuale */
    srand (time(NULL));
    /* Scrittura di asterischi (incompleta) */
    /*
    int lunghezza_lista(15)
    Lista casuale(lunghezza_lista);
    for (int i=0; i<lunghezza_lista; i++){

        string stringa = ""

        = rand() % 10 + 1;
    }
    */

	return 0;
}

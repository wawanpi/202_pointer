#include <iostream>
using namespace std;

class mahasiswa {
public :
	int nim;
	void showNim();	//deklarasi method
}; 


void mahasiswa::showNim() {		//inplementasi method diluar class
	cout << "No induk = " << nim << endl;

}
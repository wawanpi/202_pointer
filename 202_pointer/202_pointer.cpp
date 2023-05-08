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
int main()
{
	mahasiswa mhs{ 1 };
	mhs.showNim();

	mahasiswa ref = mhs;
	ref.nim = 2;
	mhs.showNim();

	mahasiswa* pmhs = &mhs;
	pmhs->nim = 3;
	mhs.showNim();
	system("pause");
	return 0;
}
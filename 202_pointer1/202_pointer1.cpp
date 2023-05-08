#include <iostream>
using namespace std;

class mahasisswa {
public:
	int nim;
	void showNim() {
		cout << "No Induk = " << nim << endl;
	}
};

int main()
{
	mahasisswa* mhs = new mahasisswa{ 1 };
	mhs->nim = 2;
	mhs->showNim();
	delete mhs;
	system("pause");
	return 0;
}
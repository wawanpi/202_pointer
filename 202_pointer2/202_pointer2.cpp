#include <iostream>
using namespace std;

class siswa;

class orang {
private:
	string nama;
public:
	void seNama(string pNama);
	friend class siswa;
};

class siswa 
#include <iostream>
using namespace std;
class Door 
{
	private:
	bool isopen;
	bool isLocked;
	public:
	Door(); // Initializes the door as closed and unlocked
	void openDoor();
	void closeDoor()
	{
        isopen = false;
        cout << "Door is now closed." << endl;
    	}
	void lockDoor();
	void unlock();
	bool isDoorOpen() const;
	bool isDoorLocked() const;
};

int main()
{
	return 0;
}
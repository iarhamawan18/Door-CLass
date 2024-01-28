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
	void closeDoor();
	void lockDoor(){
		
		 if (!isopen) 
        {
            isLocked = true;
            cout << "Door is now locked." << endl;
        } 
        else 
        {
            cout << "Cannot lock the door. It is still open." << endl;
        }
	}
	void unlock();
	bool isDoorOpen() const;
	bool isDoorLocked() const;
};

int main()
{
	return 0;
}
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
	void lockDoor();
	void unlock();
	void lockDoor()
	{
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
	void unlock(){
		
        isLocked = false;
        cout << "Door is now unlocked." << endl;
	}
	bool isDoorOpen() const;
	}
	return isOpen;
	}
	bool isDoorLocked() const
	{
        return isLocked;
    	}
};

int main()
{
	return 0;
}

#include <iostream>
using namespace std;

class Entity
{
	public:
		float x, y;

		void Move(float xa, float ya)
		{
			x += xa;
			y += ya;
		}
};


class Player : public Entity
{
	public:
		const char* Name;

		void PrintName(){
			cout << Name << endl;
		}
};

int main()
{	
	Player player;
	player.Move(5, 5);	
	player.x = 5;
	player.Name = "Logan";
	player.PrintName();


	return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Player
{
	public:
		int x, y;
		int speed;
};

void Move(Player& player, int xa, int ya)
{
	player.x += xa;
	player.y += ya;
}

int main()
{
	srand(time(NULL));

	Player player;
	player.x = 5;
	player.y = 2;

	int move_x = rand() % 10 + 1;
	int move_y = rand() % 10 + 1;

	Move(player, move_x, move_y);

	cout << "x pos: " << player.x << endl;
	cout << "y pos: " << player.y << endl;


	return 0;
}

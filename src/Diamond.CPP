
//	Author : Kevin C. Magnifico
//	Copyright : Kevin C. Magnifico
//	Title : Diamond Pattern, rainbow color, with position
//	Hackers Community : GHM

#include <iostream.h>
#include <iomanip.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void draw_diamond(int n, int x, int y)
{
	int c, k, space = 1;
	for (int i = 1; i <= y; i++)
	{
		cout << endl;
	}
	space = n - 1;
	for (k = 1; k <= n; k++)
	{
		for (c = 1; c <= (space + (x * 2)); c++)
		{
			cout << " ";
		}
		space--;
		for (c = 1; c <= ((2 * k) - 1); c++)
		{
			textcolor(rand() % 12 + 1);
			cprintf("*");
		}
		cout << endl;
	}
	space = 1;
	for (k = 1; k <= (n - 1); k++)
	{
		for (c = 1; c <= (space + (x * 2)); c++)
		{
			cout << " ";
		}
		space++;
		for (c = 1 ; c<= ((2 * (n - k)) - 1); c++)
		{
			textcolor(rand() % 12 + 1);
			cprintf("*");
		}
		cout << endl;
	}
}

int main()
{
	int n, x, y;
	clrscr();
	srand(time(NULL));
	cout << "Enter number of rows  : ";
	cin >> n;
	cout << "Enter your x position : ";
	cin >> x;
	cout << "Enter your y position : ";
	cin >> y;
	clrscr();
	draw_diamond(n, x, y);
	getch();
	return 0;
}

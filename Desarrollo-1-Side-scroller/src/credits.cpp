#include "include/raylib.h"

#include "credits.h"
#include "game.h"

Vector2 mousePoint;
Rectangle rec1;

namespace Juego
{
	
	void CreditsUpdate()
	{
		CreditsDraw();
		mousePoint = GetMousePosition();

		rec1.x = 25;
		rec1.y = 25;
		rec1.height = 50;
		rec1.width = 100;

		if (CheckCollisionPointRec(mousePoint, rec1))
		{

			if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
			{
				Screens = menu;
			}
		}
	}


	void CreditsDraw() 
	{
		BeginDrawing();

		DrawRectangle(rec1.x, rec1.y, rec1.width, rec1.height, BLACK);

		ClearBackground(RAYWHITE);
		DrawText("Funciones creadas porIan Eito, Albert Martos y Ramon Santamaria", 20, 200, 20, BLACK);
		DrawText("Copyright (c) 2015 Ramon Santamaria (@raysan5)", 20, 220, 20, BLACK);

		DrawText("atras", rec1.x + 18, rec1.y + 10, 20, WHITE);

		DrawText("Asteroids, por Martin Concetti", 20, 260, 20, BLACK);
		DrawText("Creado usando raylib", 130, 280, 20, BLACK);
		DrawText("Consultantes: Baretto, Sergio", 130, 300, 20, BLACK);
		DrawText("Version 0.2.1", 130, 320, 20, BLACK);

		EndDrawing();
	}
}
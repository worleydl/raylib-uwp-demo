#include <Windows.h>
#include "libuwp.h"
#include "raylib.h"

int bootstrap()
{
	InitWindow(0, 0, "Raylib UWP Demo");

	while (true) {
		BeginDrawing();
			ClearBackground(DARKBLUE);
			DrawText("Congrats! You're running raylib on UWP!", 190, 200, 50, RAYWHITE);
		EndDrawing();
	}

	CloseWindow();
}

int CALLBACK WinMain(HINSTANCE, HINSTANCE, LPSTR argv, int argc)
{
	uwp_main(bootstrap);
}
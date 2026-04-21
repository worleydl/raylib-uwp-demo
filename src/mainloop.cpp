#include "mainloop.h"
#include "raylib.h"

namespace uwp
{
	void tick()
	{
		BeginDrawing();
			ClearBackground(DARKBLUE);
			DrawText("Congrats! You're running raylib on UWP!", 190, 200, 50, RAYWHITE);
		EndDrawing();
	}
}

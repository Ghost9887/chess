#include "raylib.h"

int main()
{
    InitWindow(1200, 800, "Chess");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(WHITE);
            DrawText("Hello, World", 200, 200, 30, BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}

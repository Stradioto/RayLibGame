#include"raylib.h"

//g++ main.cpp -o game.exe -std=c++17 -Wall -I"C:/raylib/raylib/src" -L"C:/raylib/raylib/src" -lraylib -lopengl32 -lgdi32 -lwinmm
int main()
{
    int ballx = 400;
    int bally = 225;
    Color red{255, 0 , 0, 255};
    // Window setup
    const int screenWidth = 800;
    const int screenHeight = 450;

    

    InitWindow(screenWidth, screenHeight, "My First raylib Window");

    SetTargetFPS(60); 

    // Main game loop - this runs every frame until you close the window
    while (!WindowShouldClose())   // Returns true when ESC pressed or window closed
    {
        // ----- You can add game logic/updates here later -----

        // Draw everything
        BeginDrawing();             // Start drawing to the screen

            //ClearBackground(RAYWHITE);   // Fill background with white (or try BLACK, DARKGRAY, etc.)

            // Simple text so you know it's working
            //DrawText("Welcome to game.", 
                     //100, 200, 30, DARKGRAY);

            //DrawText("Press ESC to close", 
                     //100, 250, 20, GRAY);
            DrawCircle(ballx, bally, 10, WHITE);
            if(IsKeyDown(KEY_RIGHT)){
                ballx += 3;
            }
            if(IsKeyDown(KEY_LEFT)){
                ballx -= 3;
            }
            if(IsKeyDown(KEY_DOWN)){
                bally += 3;
            }
            if(IsKeyDown(KEY_UP)){
                bally -= 3;
            }
            ClearBackground(red);


        EndDrawing();               // Finish drawing and show the frame
    }

    // Clean up when loop ends
    CloseWindow();

    return 0;
}
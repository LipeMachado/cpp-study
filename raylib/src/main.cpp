namespace ray {
  #include "raylib.h"
}

int main(){
  ray::InitWindow(1280, 720, "Raylib bro");

  ray::Texture sprite = ray::LoadTexture("./assets/sprite.png"); // Criando instancia de textura
  ray::Texture bg = ray::LoadTexture("./assets/bg.png");
  
  float positionX = -sprite.width;

  while (!ray::WindowShouldClose()){

    positionX += 0.06f;
    if (positionX > 1280)
    {
      positionX = -sprite.width;
    }

    ray::BeginDrawing();
    ray::ClearBackground(ray::RAYWHITE);
    ray::DrawText("Hello World!", 50, 50, 30, ray::BLACK); // Desenhar Textos
    ray::DrawTexture(bg, 0, 0, ray::WHITE);
    ray::DrawTexture(sprite, positionX, 630 - sprite.height, ray::WHITE); // Desenhar Texturas (images)
    ray::EndDrawing();
  }

  ray::CloseWindow();

  return 0;
}
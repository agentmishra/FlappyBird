#include "android_native_app_glue.h"
#include <GLES2/gl2.h>
#include "game.h"
#include "utils.h"
#include "texture.h"
#include "audio.h"
#include "init.h"

//buttons
GLuint t_pause;
GLuint t_ok;
GLuint t_menu;
GLuint t_resume;
GLuint t_score;
GLuint t_share;
GLuint t_start;

//sprites
GLuint t_0;
GLuint t_1;
GLuint t_2;
GLuint t_3;
GLuint t_4;
GLuint t_5;
GLuint t_6;
GLuint t_7;
GLuint t_8;
GLuint t_9;

GLuint t_0_small;
GLuint t_1_small;
GLuint t_2_small;
GLuint t_3_small;
GLuint t_4_small;
GLuint t_5_small;
GLuint t_6_small;
GLuint t_7_small;
GLuint t_8_small;
GLuint t_9_small;

GLuint t_background_day;
GLuint t_base;
GLuint t_bronze_medal;
GLuint t_gameover;
GLuint t_gold_medal;
GLuint t_logo;
GLuint t_message;
GLuint t_new;
GLuint t_panel;
GLuint t_pipe_green;
GLuint t_platinum_medal;
GLuint t_silver_medal;
GLuint t_sparkle_sheet;
GLuint t_yellowbird_downflap;
GLuint t_yellowbird_midflap;
GLuint t_yellowbird_upflap;


bool InitGame()
{
    //buttons
    t_pause = LoadTexture("buttons/pause.png");
    t_ok = LoadTexture("buttons/ok.png");
    t_menu = LoadTexture("buttons/menu.png");
    t_resume = LoadTexture("buttons/resume.png");
    t_score = LoadTexture("buttons/score.png");
    t_share = LoadTexture("buttons/share.png");
    t_start = LoadTexture("buttons/start.png");

    //sprites
    t_0 = LoadTexture("sprites/0.png");
    t_1 = LoadTexture("sprites/1.png");
    t_2 = LoadTexture("sprites/2.png");
    t_3 = LoadTexture("sprites/3.png");
    t_4 = LoadTexture("sprites/4.png");
    t_5 = LoadTexture("sprites/5.png");
    t_6 = LoadTexture("sprites/6.png");
    t_7 = LoadTexture("sprites/7.png");
    t_8 = LoadTexture("sprites/8.png");
    t_9 = LoadTexture("sprites/9.png");

    t_0_small = LoadTexture("sprites/0_small.png");
    t_1_small = LoadTexture("sprites/1_small.png");
    t_2_small = LoadTexture("sprites/2_small.png");
    t_3_small = LoadTexture("sprites/3_small.png");
    t_4_small = LoadTexture("sprites/4_small.png");
    t_5_small = LoadTexture("sprites/5_small.png");
    t_6_small = LoadTexture("sprites/6_small.png");
    t_7_small = LoadTexture("sprites/7_small.png");
    t_8_small = LoadTexture("sprites/8_small.png");
    t_9_small = LoadTexture("sprites/9_small.png");

    t_background_day = LoadTexture("sprites/background-day.png");
    t_base = LoadTexture("sprites/base.png");
    t_bronze_medal = LoadTexture("sprites/bronze-medal.png");
    t_gameover = LoadTexture("sprites/gameover.png");
    t_gold_medal = LoadTexture("sprites/gold-medal.png");
    t_logo = LoadTexture("sprites/logo.png");
    t_message = LoadTexture("sprites/message.png");
    t_new = LoadTexture("sprites/new.png");
    t_panel = LoadTexture("sprites/panel.png");
    t_pipe_green = LoadTexture("sprites/pipe-green.png");
    t_platinum_medal = LoadTexture("sprites/platinum-medal.png");
    t_silver_medal = LoadTexture("sprites/silver-medal.png");
    t_sparkle_sheet = LoadTexture("sprites/sparkle-sheet.png");
    t_yellowbird_downflap = LoadTexture("sprites/yellowbird-downflap.png");
    t_yellowbird_midflap = LoadTexture("sprites/yellowbird-midflap.png");
    t_yellowbird_upflap = LoadTexture("sprites/yellowbird-upflap.png");


    return true;
}

uint64_t updtime = 0;
bool lol = false;
void Render()
{
	//RenderTexture(t_pause, 200, 200, 100, 100);
    //
    //if (!lol)
    //{
    //    updtime = getTickCount();
    //    lol = true;
    //}
    //
    //if (getTickCount() - updtime > 1500)
    //{
    //    PlayAudio("audio/point.mp3");
    //    Log("robet?");
    //    updtime = getTickCount();
    //}

    //background
    RenderTexture(t_background_day, 0, 0, WindowSizeX, WindowSizeY);


    RenderTexture(t_base, 0, WindowSizeY - 400, WindowSizeX, 400);





    RenderTexture(t_yellowbird_downflap, 200, 200, 200, 200);


    

}

void ShutdownGame()
{
    // Delete textures
    glDeleteTextures(1, &t_pause);
}
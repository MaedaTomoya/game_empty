#define _変身
#ifdef _変身
#include"libOne.h"
void gmain() {
    window(800, 600, full);
    int buta1Img = loadImage("assets\\buta1.png");
    int buta2Img = loadImage("assets\\buta2.png");
    int img;
    float px = 400, py = 300, angle = 0, scale = 1;
    while (notQuit) {
        if (isPress(KEY_SPACE)) { img = buta2Img; }
        else                    { img = buta1Img; }
        clear(60);
        angleMode(DEGREES);
        rectMode(CENTER);
        image(img, px, py, angle, scale);
    }
}
#endif

#ifdef _移動
#include"libOne.h"
void gmain() {
    window(1600, 900, full);
    int buta1Img = loadImage("assets\\buta1.png");
    angleMode(DEGREES);
    rectMode(CENTER);
    //初期値
    float px = 800, py = 450, angle = 0, scale = 1;
    while (notQuit) {
        //更新
        //px += 5;
        //angle += 5;
         scale += 0.01;
        //描画
        clear(60);
        image(buta1Img, px, py, angle, scale);
    }
}
#endif

#ifdef _豚表示
#include"libOne.h"
void gmain() {
    window(800, 600);
    int backImg = loadImage("assets\\background.png");
    int buta1Img = loadImage("assets\\buta1.png");
    image(backImg, 0, 0);
    angleMode(DEGREES);
    image(buta1Img, 400, 300, 0, 2);

    pause();
}
#endif
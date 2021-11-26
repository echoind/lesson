#include <GL/glut.h>
#include <cmath>
#include <drawLib_Evdokimov.h>
/*
    место для творчества
*/


void renderScene(void);

void processKeys(unsigned char key, int x, int y); // определение фнкции перед фукнцией main
/*
void renderScene(){

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // эта функция должна здесь жить

    drawTreugolnik();


    drawFON();

    glPushMatrix();
    glTranslatef(-0.45,-0.05,0);
    glScalef(0.5,0.5,1);
    for (int x=0; x<5; x++)
    drawTrees(x*0.6,0);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.62,-0.2,0);
    glScalef(0.8,0.8,1);
    for (int x=0; x<5; x++)
    drawTrees(x*0.37,0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.8,-0.4,0);
    for (int x=0; x<5; x++)
    drawTrees(x*0.3,0);
    glPopMatrix();

    glPushMatrix();
    drawSUN();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2,0.6,0);
    drawAirplane();
    glPopMatrix();

     glPushMatrix();
     drawCat1(0.5,-0.6,0,//смещение
                 0,0,0,0,//вращение
               0.2,0.2,1);//масштаб
    glPopMatrix();

    glPushMatrix();
    drawDog(0,-0.5,0,//смещение
           180,0,1,0,//вращение
           0.3,0.3,1);//масштаб
    glPopMatrix();

    glPushMatrix();
    drawHouse (0.7,0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2,-0.4,0);
    for (int i =0; i<20; i++)
    drawZABOR(0.04*i,0);
    glPopMatrix();

    glPushMatrix();
    drawCat2(-0.42,0.3,0,//смещение
               -76,0,0,1,//вращение
               0.5,0.5,1);//масштаб
    glPopMatrix();


    glPushMatrix();
    drawGrafik();
    glPopMatrix();

    // эта функция должна здесь жить
    glutSwapBuffers();
    }
*/


int main(int argc, char* argv[])
    {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("Lesson - 0, Start");
    glutDisplayFunc(renderScene);
    glutKeyboardFunc(processKeys);
    glutMainLoop();
    return 0;
    }

bool isRight;
float pos_x,pos_y;
float angle = 0.0;

void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    if(isRight){
        glRotatef(5d,1,0,0);
    }
    glPushMatrix();

    drawTrees(pos_x,pos_y);
    glPopMatrix();

    glutSwapBuffers();
}

void processKeys(unsigned char key, int x, int y) {

    if (key == 100) {
       glRotatef(-5,0,0,1);
       isRight = true;
    }

    if (key == 97) {
       glRotatef(5,0,0,1);
       isRight = true;
    }

    if (key == 119) {
       pos_y = pos_y + 0.01;
       isRight = false;
    }

    if (key == 115) {
       pos_y = pos_y - 0.01;
       isRight = false;
    }

    if (key == 82) { //R СБРОС ВСЕГО В 0
       pos_y = 0;
       pos_x = 0;
       angle = 0;
    }
    if (key == 81) { //Q ПОВОРАЧИВАТЬ НА 5 ГРАДУСОВ ВЛЕВО
       glRotatef(angle+5,0,0,1);
    }
    if (key == 69) { //E ПОВОРАЧИВАТЬ НА 5 ГРАДУСОВ ВПРАВО
       glRotatef(angle-5,0,0,1);
    }

    if (key == 13)
        exit(0); // close app

    glutPostRedisplay();
}


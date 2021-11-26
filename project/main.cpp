#include <GL/glut.h>
#include <cmath>

/*
    место для творчества
*/
    void drawFON();
    void drawCat1(float a,float b,float c,float d,float e, float f,float g,float h,float i, float j);
    void drawCat2(float a,float b,float c,float d,float e, float f,float g,float h,float i, float j);
    void drawHouse(float x,float y );

void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT); // эта функция должна здесь жить

        glFlush();
    }

void drawFON()  {

        glBegin(GL_TRIANGLES);

        glColor3f(0,0,1);//небо
        glVertex2f(-1,1);
        glVertex2f(1,1);
        glVertex2f(1,0);
        glVertex2f(-1,0);
        glVertex2f(-1,1);
        glVertex2f(1,0);

        glColor3f(0,0.5,0);//земля
        glVertex2f(-1,0);
        glVertex2f(1,0);
        glVertex2f(1,-1);
        glVertex2f(1,-1);
        glVertex2f(-1,-1);
        glVertex2f(-1,0);

        glColor3f(3,1,0);//горы
        glVertex2f(-1,0);
        glVertex2f(-0.7,0);
        glVertex2f(-0.85,0.5);
        glVertex2f(-0.7,0);
        glVertex2f(-0.6,0.4);
        glVertex2f(-0.5,0);
        glEnd();

    }



 void drawCat1(float a,float b,float c,
                  float d,float e, float f,float g,
                  float h,float i, float j)

    {

    glTranslatef(a,b,c);
    glRotatef(d,e,f,g);
    glScalef(h,i,j);

    glBegin(GL_TRIANGLES);

    glVertex2f(-.2,-.3);//тело
    glColor3f(.4,.7,.8);
    glVertex2f( .2,-0.3);
    glColor3f(.7,.2,.6);
    glVertex2f( 0,.2);
    glColor3f(.9,.1,.4);

    glVertex2f(-.3,.4);//голова
    glVertex2f(.3,.4);
    glVertex2f(0,.2);

    glVertex2f(-.3,.4);//ухо 1
    glVertex2f(-.225,.4);
    glVertex2f(-.25,.6);

    glVertex2f(.3,.4);//ухо 2
    glVertex2f(.225,.4);
    glVertex2f(.25,.6);

    glColor3f(.0,.0,.9);//глаз 1
    glVertex2f(-.1,.3);
    glVertex2f(-.075,.375);
    glVertex2f(-.05,.3);

    glVertex2f(.1,.3);//глаз 2
    glVertex2f(.075,.375);
    glVertex2f(.05,.3);

    glVertex2f(.02,.3);//нос
    glVertex2f(0,.275);
    glVertex2f(-.02,.3);

    glColor3f(.1,.8,.2);//хвост
    glVertex2f(-.2,-.3);
    glVertex2f(-.5,-.3);
    glVertex2f(-.45,-.25);

    glEnd();

    }

void drawCat2(float a,float b,float c,
                  float d,float e, float f,float g,
                  float h,float i, float j)

    {
    glTranslatef(a,b,c);
    glRotatef(d,e,f,g);
    glScalef(h,i,j);

    glBegin(GL_TRIANGLES);

    glVertex2f(-.2,-.3);//тело
    glColor3f(.5,.2,.3);
    glVertex2f( .2,-0.3);
    glColor3f(.2,.5,.8);
    glVertex2f( 0,.2);
    glColor3f(.3,.2,.5);

    glVertex2f(-.3,.4);//голова
    glVertex2f(.3,.4);
    glVertex2f(0,.2);

    glVertex2f(-.3,.4);//ухо 1
    glVertex2f(-.225,.4);
    glVertex2f(-.25,.6);

    glVertex2f(.3,.4);//ухо 2
    glVertex2f(.225,.4);
    glVertex2f(.25,.6);

    glColor3f(.0,.0,.9);//глаз 1
    glVertex2f(-.1,.3);
    glVertex2f(-.075,.375);
    glVertex2f(-.05,.3);

    glVertex2f(.1,.3);//глаз 2
    glVertex2f(.075,.375);
    glVertex2f(.05,.3);

    glVertex2f(.02,.3);//нос
    glVertex2f(0,.275);
    glVertex2f(-.02,.3);

    glColor3f(.1,.8,.2);//хвост
    glVertex2f(-.2,-.3);
    glVertex2f(-.5,-.3);
    glVertex2f(-.45,-.25);

    glEnd();

    }

void drawHouse(float x, float y){
    glPushMatrix();
    glTranslatef(x,y,0);
    glScalef(0.5,0.5,1);
    glBegin(GL_TRIANGLES);


    glColor3f(.6,.1,.1); //крыша
    glVertex2f(-.4,-0.3);
    glVertex2f( .4,-0.3);
    glVertex2f( 0,.2);

    glColor3f(.1,.1,.7); //стена
    glVertex2f(-.3,-0.3);
    glVertex2f( .3,-0.3);
    glVertex2f( -.3,-.8);
    glVertex2f(-.3,-.8);
    glVertex2f( 0.3,-0.3);
    glVertex2f( 0.3,-.8);



    glEnd();
    glPopMatrix();
    }

void drawGrafik(){
       glClear(GL_COLOR_BUFFER_BIT);

       glColor3f(0.0,1.0,0.0);
       glBegin(GL_LINES);
       glVertex2f(-550,0);
       glVertex2f(550,0);
       glEnd();

       glBegin(GL_LINES);
       glVertex2f(0,150);
       glVertex2f(0,-150);
       glEnd();

       glBegin(GL_LINE_STRIP);
       glColor3f(1.0,0.0,0.0);
       for(int i = -500; i<=500; i++){
           float y = 100* sin(i*M_PI/180);
           glVertex2f(i,y);
       }
       glEnd();
       glFlush();
       glutSwapBuffers();
}


int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("Lesson - 0, Start");
    glutDisplayFunc(drawGrafik);
    glutMainLoop();
    return 0;
}

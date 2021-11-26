#include <drawLib_Evdokimov.h>;

void drawTreugolnik(){

        glBegin(GL_TRIANGLES);

        glColor3f(1,0,0);
        glVertex2f(0,0.3);
        glVertex2f(-0.3,-0.2);
        glVertex2f(0.3,-0.2);

        glEnd();

        }


void drawFON(){

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

        glColor3f(0.3,0,0);//горы
        glVertex2f(-1,0);
        glVertex2f(-0.7,0);
        glVertex2f(-0.85,0.5);
        glVertex2f(-0.7,0);
        glVertex2f(-0.6,0.4);
        glVertex2f(-0.5,0);

        glColor3f(1,1,1);//снег
        glVertex2f(-0.79,0.3);
        glVertex2f(-0.91,0.3);
        glVertex2f(-0.85,0.5);
        glVertex2f(-0.8,0.27);
        glVertex2f(-0.79,0.3);
        glVertex2f(-0.82,0.3);
        glVertex2f(-0.84,0.26);
        glVertex2f(-0.86,0.3);
        glVertex2f(-0.82,0.3);
        glVertex2f(-0.89,0.27);
        glVertex2f(-0.86,0.3);
        glVertex2f(-0.91,0.3);
        glVertex2f(-0.62,0.32);
        glVertex2f(-0.6,0.4);
        glVertex2f(-0.58,0.32);
        glVertex2f(-0.62,0.32);
        glVertex2f(-0.6,0.32);
        glVertex2f(-0.61,0.3);
        glVertex2f(-0.60,0.32);
        glVertex2f(-0.58,0.32);
        glVertex2f(-0.58,0.29);

        glEnd();

    }

void drawSUN()

        {

        glBegin(GL_TRIANGLES);

        glColor3f(1,1,0);//солнце
        glVertex2f(-0.9,0.85);
        glVertex2f(-0.7,0.85);
        glVertex2f(-0.8,0.7);
        glVertex2f(-0.8,0.9);
        glVertex2f(-0.9,0.75);
        glVertex2f(-0.7,0.75);

        glColor3f(1,1,1);//облако
        glVertex2f(-0.7,0.7);
        glVertex2f(-0.4,0.7);
        glVertex2f(-0.55,0.8);
        glVertex2f(-0.7,0.7);
        glVertex2f(-0.4,0.7);
        glVertex2f(-0.65,0.65);
        glVertex2f(-0.4,0.7);
        glVertex2f(-0.6,0.7);
        glVertex2f(-0.5,0.65);
        glVertex2f(-0.68,0.7);
        glVertex2f(-0.5,0.75);
        glVertex2f(-0.65,0.77);
        glVertex2f(-0.43,0.7);
        glVertex2f(-0.6,0.7);
        glVertex2f(-0.45,0.78);

        glEnd();

    }

 void drawTrees(float a,float b){

        glPushMatrix();
        glTranslatef(a,b,0);
        glBegin(GL_TRIANGLES);

        glColor3f(0,1,0);//елка
        glVertex2f(-0.1,0.3);
        glVertex2f(0.1,0.3);
        glVertex2f(0,0.4);
        glVertex2f(0,0.35);
        glVertex2f(-0.11,0.2);
        glVertex2f(0.11,0.2);
        glVertex2f(0,0.25);
        glVertex2f(-0.13,0.1);
        glVertex2f(0.13,0.1);

        glColor3f(0.7,0.5,0);
        glVertex2f(0.03,0.1);
        glVertex2f(-0.03,0.1);
        glVertex2f(0.03,0);
        glVertex2f(0.03,0);
        glVertex2f(-0.03,0.1);
        glVertex2f(-0.03,0);


        glEnd();
        glPopMatrix();
        }

 void drawAirplane(){

        glBegin(GL_TRIANGLES);

        glColor3f(0.3,0.3,0.3);//
        glVertex2f(0,0);
        glVertex2f(0,0.1);
        glVertex2f(0.3,0);

        glVertex2f(0,0.1);
        glVertex2f(0.3,0);
        glVertex2f(0.3,0.1);

        glVertex2f(0,0);
        glVertex2f(-0.06,0.03);
        glVertex2f(0,0.1);

        glVertex2f(0.3,0);
        glVertex2f(0.3,0.1);
        glVertex2f(0.5,.1);

        glVertex2f(0.5,0.1);
        glVertex2f(0.43,0.1);
        glVertex2f(0.5,.2);

        glVertex2f(0.5,0.1);
        glVertex2f(0.43,0.1);
        glVertex2f(0.5,0.0);

        glVertex2f(0.05,0.05);
        glVertex2f(0.2,0.05);
        glVertex2f(0.2,-0.2);

        glVertex2f(0.10,0.05);
        glVertex2f(0.20,0.05);
        glVertex2f(0.2,0.15);

        glColor3f(0,0.7,1);
        glVertex2f(0.0,0.04);
        glVertex2f(0.0,0.09);
        glVertex2f(-0.05,0.04);

        glEnd();

        }


 void drawCat1(float a,float b,float c,
                  float d,float e, float f,float g,
                  float h,float i, float j,
                  bool isRight){

        glTranslatef(a,b,c);
        glRotatef(d,e,f,g);
        glScalef(h,i,j);
        if (isRight)
        glRotatef(180, 0, 0, 1);

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

 void drawDog(float a,float b,float c,
                  float d,float e, float f,float g,
                  float h,float i, float j){

        glTranslatef(a,b,c);
        glRotatef(d,e,f,g);
        glScalef(h,i,j);

        glBegin(GL_TRIANGLES);

        glColor3f(1,1,1);
        glVertex2f(-0.3,.1);//голова
        glVertex2f(-0.3,0);
        glVertex2f(0,0);
        glVertex2f(0,0);
        glVertex2f(0,0.2);
        glVertex2f(-0.2,0.2);
        glVertex2f(-0.2,0.2);
        glVertex2f(0,0);
        glVertex2f(-0.2,0);
        glVertex2f(-0.3,0.1);
        glVertex2f(0,0);
        glVertex2f(0,0.1);

        glColor3f(0,0,0);
        glVertex2f(-0.02,0.2);//ухо
        glVertex2f(-0.08,0.2);
        glVertex2f(-0.05,0.3);

        glColor3f(0,0,0);
        glVertex2f(-0.13,0.15);//глаз
        glVertex2f(-0.16,0.15);
        glVertex2f(-0.145,0.17);
        glVertex2f(-0.13,0.15);
        glVertex2f(-0.16,0.15);
        glVertex2f(-0.145,0.13);

        glColor3f(0.8,0,0);//рот
        glVertex2f(-0.3,0.03);
        glVertex2f(-0.3,0.06);
        glVertex2f(-0.2,0.045);

        glColor3f(0,0,0);//нос
        glVertex2f(-0.3,0.1);
        glVertex2f(-0.3,0.07);
        glVertex2f(-0.25,0.1);

        glColor3f(1,1,1);//тело
        glVertex2f(0,0.1);
        glVertex2f(0.6,-0.5);
        glVertex2f(0.3,-0.5);
        glVertex2f(0,0.1);
        glVertex2f(0.3,-0.5);
        glVertex2f(-0.1,0);

        glColor3f(0,0,0);//лапы
        glVertex2f(0,-0.1);
        glVertex2f(0,-0.5);
        glVertex2f(-0.06,-0.5);
        glVertex2f(0,-0.1);
        glVertex2f(-0.06,-0.5);
        glVertex2f(0.1,-0.2);

        glColor3f(1,1,1);
        glVertex2f(0.1,-0.45);//задние
        glVertex2f(0.1,-0.5);
        glVertex2f(0.4,-0.5);
        glVertex2f(0.4,-0.5);
        glVertex2f(0.1,-0.45);
        glVertex2f(0.4,-0.4);

        glVertex2f(0.6,-0.5);//хвост
        glVertex2f(0.8,-0.3);
        glVertex2f(0.85,-0.35);
        glVertex2f(0.6,-0.5);
        glVertex2f(0.8,-0.3);
        glVertex2f(0.5,-0.5);

        glColor3f(0,0,0);
        glVertex2f(0.05,-0.05);//пятна
        glVertex2f(0.1,-0.15);
        glVertex2f(0.17,-0.13);
        glVertex2f(0.3,-0.2);
        glVertex2f(0.4,-0.3);
        glVertex2f(0.33,-0.35);
        glVertex2f(0.3,-0.5);
        glVertex2f(0.5,-0.5);
        glVertex2f(0.3,-0.4);


        glEnd();

        }

void drawCat2(float a,float b,float c,
                  float d,float e, float f,float g,
                  float h,float i, float j){

        glTranslatef(a,b,c);
        glRotatef(d,e,f,g);
        glScalef(h,i,j);

        glBegin(GL_TRIANGLES);

        glVertex2f(-.2,-.3);//тело
        glColor3f(.5,.2,.3);
        glVertex2f( .2,-0.3);
        glColor3f(.2,.5,.8);
        glVertex2f( 0,.2);
        glColor3f(.5,.3,.1);

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

        glTranslatef(x,y,0);
        glScalef(0.5,0.5,1);
        glBegin(GL_TRIANGLES);


        glColor3f(.7,0.1,0); //крыша
        glVertex2f(-.4,-0.3);
        glVertex2f( .4,-0.3);
        glVertex2f( 0,.2);

        glColor3f(.6,0.2,0); //стена
        glVertex2f(-.3,-0.3);
        glVertex2f( .3,-0.3);
        glVertex2f( -.3,-.8);
        glVertex2f(-.3,-.8);
        glVertex2f( 0.3,-0.3);
        glVertex2f( 0.3,-.8);

        glColor3f(0,0.7,1);  //окно
        glVertex2f(0.1,-0.4);
        glVertex2f(-0.1,-0.4);
        glVertex2f(0.1,-0.6);
        glVertex2f(0.1,-0.6);
        glVertex2f(-0.1,-0.6);
        glVertex2f(-0.1,-0.4);

        glColor3f(0.4,0.1,0);
        glVertex2f(0.01,-0.4);
        glVertex2f(-0.01,-0.4);
        glVertex2f(0.01,-0.6);
        glVertex2f(0.01,-0.6);
        glVertex2f(-0.01,-0.6);
        glVertex2f(-0.01,-0.4);

        glColor3f(0.4,0.1,0);
        glVertex2f(0.1,-0.49);
        glVertex2f(-0.1,-0.49);
        glVertex2f(0.1,-0.51);
        glVertex2f(0.1,-0.51);
        glVertex2f(-0.1,-0.51);
        glVertex2f(-0.1,-0.49);

        glEnd();

        }

void drawZABOR(float x, float y){

        glPushMatrix();
        glTranslatef(x,y,0);
        glScalef(0.3,0.3,1);
        glBegin(GL_TRIANGLES);


        glColor3f(.6,0.3,0); //забор
        glVertex2f(0,0);
        glVertex2f(0.1,0);
        glVertex2f(0.05,0.1);
        glVertex2f(0,0);
        glVertex2f(0,-0.3);
        glVertex2f(0.1,-0.3);
        glVertex2f(0,0);
        glVertex2f(0.1,0);
        glVertex2f(0.1,-0.3);

        glVertex2f(0.1,0);
        glVertex2f(0.1,-0.1);
        glVertex2f(0.15,0);
        glVertex2f(0.15,0);
        glVertex2f(0.15,-0.1);
        glVertex2f(0.1,-0.1);

        glEnd();
        glPopMatrix();

        }

void drawGrafik(){

       glScalef(0.3,0.3,1);
       glColor3f(1,0,0);

       glBegin(GL_LINES);
       glVertex2f(-10,0);
       glVertex2f(10,0);

       glVertex2f(0,10);
       glVertex2f(0,-10);
       glEnd();

       glBegin(GL_LINE_STRIP);
       glColor3f(1.0,0.0,0.0);

       for(float i = -50; i<=50;i=i+0.01){
      //glVertex2f(i,(exp(i+1))/sin(i*i));
      //glVertex2f(i,i*i+(i+1)*(i+1));
      //glVertex2f(i*i,i-i*i*i);
      //glVertex2f(cos(i)+cos(20*i)*cos(i)*0.4,sin(i)+cos(20*i)*sin(i)*0.4);
      //glVertex2f(i,(2+i)*(2+i)+3*i);
      //glVertex2f(i,sqrt(-(1-3*i)/2)+3*i);
      //glVertex2f(i,-(pow(2+9*i,2))+6*i);
       }
       glEnd();

       }



#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glOrtho(-15,15,-15,15,-15,5);
}

void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0; i<=100; i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}
void circletwo(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0; i<=100; i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}
void sun(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0; i<=100; i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}


void night(){

glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

}
void my_keyboard(unsigned char key, int x, int y)
{

    switch (key)
    {

    case 'd':
        day();
        break;

    case 'n':
        night();
        break;

    default:
        break;
    }
}


void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.0f, 0.0f);
    circle(3,3,0,0);
    glColor3f(0.0f, 0.0f, 0.0f);
    circletwo(3,3,1,1);

    glFlush();
}
void day(){

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
sun(4,4,-8,9);

}
int main(int argc, char** argv)
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(500, 500);
    glutInit(&argc, argv);
    glutCreateWindow("Circle Application");
    init();
    glutDisplayFunc(myDisplay);
    glutKeyboardFunc(my_keyboard);
    glutMainLoop();
    return 0;
}

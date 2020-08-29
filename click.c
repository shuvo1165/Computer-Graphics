#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>


static GLfloat spin = 0.0;
float am=0.0;
int serial=0;

void init(void)
{
    glClearColor (0, 0, 0, 0);
    glOrtho(0, 100.0, 0, 100.0, 0, 100.0);
}
void delay()
{
    for(int i=0; i<100000000; i++);
}

void circle(GLfloat rx, GLfloat ry, GLfloat x, GLfloat y)
{
    int i=0;
    float angle;
    GLfloat PI= 2.0f * 3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for(i=0; i<100; i++)
    {
        angle = 2 * PI * i/100;
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)* ry));
    }
    glEnd();
}
void nightsky()
{

    //NightBackground-UpperHalf with star and moon
    glColor3ub(6, 0, 43);//DarkBlue background
    glBegin(GL_POLYGON);
    glVertex2d(1.0, 66.0);
    glVertex2d(49,74);
    glVertex2d(51,75);
    glVertex2d(99,76);
    glColor3ub(0, 16, 40);
    glVertex2d(99,99);
    glVertex2d(1,99);
    glEnd();

    glColor3ub(251, 252, 234);//OffWhite Moon
    circle(5,9,80,88);
    glColor3ub(0, 16, 40);//OffWhite Moon
    circle(5,9,81,89);

}
void aeroplane()
{
    glColor3f(0,0,0);
    circle(2,0.40,96,90);
    glBegin(GL_POLYGON);
    glVertex2d(98,91);
    glVertex2d(98.3,92);
    glVertex2d(98.5,92);
    glVertex2d(98.2,89.8);
    glEnd();

    glColor3f(1,0,0);
    circle(.1,.1,98.1,89.7);
    glColor3f(1,0,1);
    circle(.1,.1,94,90);

}
void aeroplanemove()
{
    am=am-.7;
    if(am<-100)
        am = 35;
    glutPostRedisplay();
}
void sea()
{
    glColor3ub(36, 51, 94);
    glBegin(GL_POLYGON);
    glVertex2d(99,76);
    glVertex2d(30,69);
    glVertex2d(31,68);
    glVertex2d(70,50);
    glVertex2d(99,45);

    circle(10,5,60,60);
    circle(10,5,65,55);
    circle(8,5,82,51);
    circle(8,5,90,49);
    circle(2,3,50,65);
    circle(5,1,52.8,60);
    circle(5,1.5,43,64);
    circle(4,1,36.5,67);


    circle(10,5,63,68);
    circle(10,5,70,70);
    circle(10,5,80,71);
    circle(10,5,87,71);

    glEnd();

}
void railing_str(float x, float y)
{
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2d(x,y);
    glVertex2d(x+.2,y);
    glVertex2d(x+.2,y-5);
    glVertex2d(x,y-5);
    glEnd();

}

void raling()
{
    //floor
    glColor3ub( 249, 231, 159 );

    glBegin(GL_POLYGON);
    glVertex2d(1,25);
    glVertex2d(65,30);
    glVertex2d(70,1);
    glVertex2d(1,1);
    glEnd();

    //raling
    glColor3f(1,1,1);

    glBegin(GL_POLYGON);
    glVertex2d(1,28);
    glVertex2d(68,35);
    glVertex2d(68,34);
    glVertex2d(1,27);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(68,34);
    glVertex2d(73.7,1);
    glVertex2d(72.7,1);
    glVertex2d(67,34);
    glEnd();

    //stick
    glBegin(GL_POLYGON);
    glVertex2d(1,27);
    glVertex2d(1,24);
    glVertex2d(1.2,24);
    glVertex2d(1.2,27);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(12,29);
    glVertex2d(11.8,25);
    glVertex2d(12,25);
    glVertex2d(12.2,29);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(25,30);
    glVertex2d(24,25);
    glVertex2d(24.2,25);
    glVertex2d(25.2,30);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(40,32);
    glVertex2d(38.2,27);
    glVertex2d(38.4,27);
    glVertex2d(40.2,32);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(55,33);
    glVertex2d(53.5,28);
    glVertex2d(53.7,28);
    glVertex2d(55.2,33);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(67.5,35);
    glVertex2d(65,29);
    glVertex2d(65.2,29);
    glVertex2d(67.7,35);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2d(69,20);
    glVertex2d(69.3,20);
    glVertex2d(67,16.5);
    glVertex2d(67.3,16.5);
    glEnd();
}



void ralingtwo()
{
    glColor3ub( 249, 231, 159 );
    glBegin(GL_POLYGON);
    glVertex2d(100,35.5);
    glVertex2d(75,31);
    glVertex2d(82,1);
    glVertex2d(100,1);
    glEnd();

    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex2d(81,1);
    glVertex2d(74.5,29.5);
    glVertex2d(75,31);
    glVertex2d(82,1);
    glEnd();

    glColor3f(1,1,1);

    glBegin(GL_POLYGON);
    glVertex2d(84,1);
    glVertex2d(76,35.8);
    glVertex2d(77,35.8);
    glVertex2d(84.8,1);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(100,40);
    glVertex2d(77,35.7);
    glVertex2d(77,35);
    glVertex2d(100,39.5);
    glEnd();

    railing_str(80,36);
    railing_str(85,37);
    railing_str(90,38);
    railing_str(95,39);
    railing_str(99,40);
    railing_str(80,18);
    railing_str(76.3,35);
    railing_str(78.4,26);
    railing_str(82,10);
}
void building_str(GLfloat ba,GLfloat bb,GLfloat bc, GLfloat bd)
{


    glBegin(GL_POLYGON);
    glVertex2d(ba,bb);
    glVertex2d(ba,bd);
    glVertex2d(bc,bd);
    glVertex2d(bc,bb);
    glEnd();

}
void star_str(int x, int y)
{
    glColor3ub(244, 247, 247);
    glBegin(GL_QUADS);
    glVertex2d(x,y);
    glVertex2d(x+0.2,y+0.3);
    glVertex2d(x+0.2,y);
    glVertex2d(x+0.3,y-0.2);
    glEnd();
}
void trees(float tlw, float tlh, float trwx, float trwy)
{

    glColor3ub(68, 43, 2);
    glBegin(GL_TRIANGLES);
    glVertex2d(trwx, trwy);//2
    glVertex2d(trwx+1, trwy);//1
    glVertex2d(tlw, tlh);//15
    glEnd();
    glColor3ub(11, 30, 11);
    glBegin(GL_POLYGON);
    glVertex2d(tlw, tlh);//1
    glVertex2d(tlw-2, tlh-10);//2
    glVertex2d(tlw-1, tlh-10);//3
    glVertex2d(tlw-2, tlh-15);//4
    glVertex2d(tlw-1, tlh-15);//5
    glVertex2d(tlw-2, tlh-20);//6
    glVertex2d(tlw-1, tlh-20);//7
    glVertex2d(tlw-2, tlh-25);//8
    glVertex2d(tlw+2, tlh-25);//9
    glVertex2d(tlw+1, tlh-20);//10
    glVertex2d(tlw+2, tlh-20);//11
    glVertex2d(tlw+1, tlh-15);//12
    glVertex2d(tlw+2, tlh-15);//13
    glVertex2d(tlw+1, tlh-10);//14
    glVertex2d(tlw+2, tlh-10);//15
    glEnd();

}
void trees2(float tlw, float tlh, float trwx, float trwy)
{

    glColor3ub(68, 43, 2);
    glBegin(GL_TRIANGLES);
    glVertex2d(trwx, trwy);//2
    glVertex2d(trwx+1, trwy);//1
    glVertex2d(tlw, tlh);//15
    glEnd();
    glColor3ub( 16, 35, 16 );
    glBegin(GL_POLYGON);
    glVertex2d(tlw, tlh);//1
    glVertex2d(tlw-2, tlh-10);//2
    glVertex2d(tlw-1, tlh-10);//3
    glVertex2d(tlw-2, tlh-15);//4
    glVertex2d(tlw-1, tlh-15);//5
    glVertex2d(tlw-2, tlh-20);//6
    glVertex2d(tlw-1, tlh-20);//7
    glVertex2d(tlw-2, tlh-25);//8
    glVertex2d(tlw+2, tlh-25);//9
    glVertex2d(tlw+1, tlh-20);//10
    glVertex2d(tlw+2, tlh-20);//11
    glVertex2d(tlw+1, tlh-15);//12
    glVertex2d(tlw+2, tlh-15);//13
    glVertex2d(tlw+1, tlh-10);//14
    glVertex2d(tlw+2, tlh-10);//15
    glEnd();

}
void starall()
{
    star_str(80,80);
    star_str(78,86);
    star_str(80,79);
    star_str(78,85);
    star_str(88,97);
    star_str(86,87);
    star_str(70,80);
    star_str(70,82);
    star_str(60,95);
    star_str(40,90);
    star_str(50,86);
    star_str(10,95);
    star_str(14,98);
    star_str(11,96);
    star_str(20,97);
    star_str(22,87);
    star_str(57,90);
    star_str(27,91);
    star_str(31,89);
    star_str(90,84);
    star_str(88,93);
    star_str(95,81);

}

void window()
{
    glColor3f(1,1,1);
    building_str(5,67,5.3,67.3);
    building_str(4,77,4.3,77.3);
    building_str(4,80,4.3,80.3);
    building_str(5,90,5.3,90.3);

    building_str(8,70,8.3,70.3);
    building_str(8,75,8.3,75.3);
    building_str(10,85,10.3,85.3);
    building_str(10,88,10.3,88.3);

    building_str(13,75,13.3,75.3);
    building_str(13,70,13.3,70.3);
    building_str(16,80,16.3,80.2);
    building_str(16,77,16.3,77.2);
    building_str(17,75,17.3,75.2);
    building_str(17,70,17.3,70.2);
    building_str(17,84,17.3,84.2);
    building_str(18,82,18.3,82.2);
    building_str(19,70,19.3,70.3);
    building_str(20,72,20.3,72.3);
    building_str(21,74,21.3,74.2);
    building_str(22,68,22.3,68.3);





}
void building()
{
    glColor3ub( 27, 38, 49);
    building_str(1,66,2,85);
    glColor3ub( 66, 73, 73 );
    building_str(3,66,7,95);
    glColor3ub( 27, 38, 49);
    building_str(5,66,9,80);
    building_str(9,66,12,89);
    glColor3ub( 66, 73, 73 );
    building_str(11,66,14,80);
    glColor3ub( 27, 38, 49);
    building_str(13,66,22,77);
    glColor3ub( 66, 73, 73 );
    building_str(15,66,20,85);
    glColor3ub(98, 101, 103);
    building_str(19,66,24,71);
    //building_str(25,66,26,90);

}
void tree_line()
{
    //trees(10,55,11,30);
    trees(6.5,55,5,26);
    trees2(5.5,58,4,29);
    trees(4.5,61,3,32);
    trees2(3.5,64,2,35);
    trees(2.5,67,1,38);
    trees2(1.5,69,0,40);
    trees(0.5,70,0,41);

}
void fire()
{
    glColor3ub(241, 247, 81);
    circle(1.5,1.5,25,38);
    glColor3ub(241, 247, 81);
    glBegin(GL_TRIANGLES);
    glVertex2d(25,38);
    glVertex2d(26.3,38);
    glColor3ub(244, 88, 70);
    glVertex2d(25.8,43);
    glEnd();
    glColor3ub(241, 247, 81);
    glBegin(GL_TRIANGLES);
    glVertex2d(26,38);
    glVertex2d(23.8,38);
    glColor3ub(244, 88, 70);
    glVertex2d(24,42);
    glEnd();
    glColor3ub(241, 247, 81);
    glBegin(GL_TRIANGLES);
    glVertex2d(24,38);
    glVertex2d(26,38);
    glColor3ub(244, 88, 70);
    glVertex2d(25,45);
    glEnd();
}
void umbralla_str(float x, float y)
{
    glColor3ub( 33, 47, 60 );
    circle(2,0.8,x,y);
    glBegin(GL_TRIANGLES);
    glVertex2d(x-2,y);
    glVertex2d(x+2,y);
    glVertex2d(x,y+2);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(x,y);
    glVertex2d(x+.2,y);
    glVertex2d(x+.2,y-5);
    glVertex2d(x,y-5);
    glEnd();


}
void umbralla()
{
    umbralla_str(27,60);
    umbralla_str(30,58);
    umbralla_str(33,56);
    umbralla_str(36,54);
    umbralla_str(39,52);
    umbralla_str(42,50);
    umbralla_str(45,48);
    //umbralla_str(48,50);


}
void banch_str(float x,float y)
{
    glColor3ub( 151, 154, 154 );
    glBegin(GL_POLYGON);
    glVertex2d(x,y);
    glVertex2d(x+.2,y-2.5);
    glVertex2d(x+.4,y-2.3);
    glVertex2d(x+.2,y);

    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(x+.2,y-2.5);
    glVertex2d(x+2.5,y-2.5);
    glVertex2d(x+2.5,y-2.3);
    glVertex2d(x+.4,y-2.3);
    glEnd();
}
void banch()
{

    banch_str(28,58);
    banch_str(31,56);
    banch_str(34,54);
    banch_str(37,52);
    banch_str(40,50);
    banch_str(43,48);
}
void ships_str(int x,int y)
{

    glBegin(GL_POLYGON);
    glVertex2d(x,y);
    glVertex2d(x-7,y);
    glVertex2d(x-9,y+2);
    glVertex2d(x-7,y+2);
    glVertex2d(x-5,y+3);
    glVertex2d(x-4,y+3);
    glVertex2d(x-3,y+4);
    glVertex2d(x-1,y+4);
    glVertex2d(x,y+4);
    glVertex2d(x+1,y+2);
    glEnd();



}
void ships()
{
    ;
    glColor3ub(52, 73, 94);
    ships_str(98,64);
    glColor3ub(57, 77, 99);
    ships_str(94,58);

}


void display()
{

    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    delay();
    nightsky();
    sea();
    ships();
    fire();
    banch();
    umbralla();
    ralingtwo();
    starall();
    aeroplanemove();
    for(int i=0; i<1; i++)
    {
        glPushMatrix();
        glTranslatef(am,0-i,0);
        aeroplane();
        glPopMatrix();
    }
    building();
    tree_line();
    raling();
    window();

    glPopMatrix();
    glFlush();


}
void spinDisplay_left(void)
{
    spin = 5;
    glutPostRedisplay();
    glRotatef(spin, 0.0, 0.0, 1.0);
}

void spinDisplay_right(void)
{
    spin = -5;
    glutPostRedisplay();
    glRotatef(spin, 0.0, 0.0, 1.0);
}


void my_mouse(int button, int state, int x, int y)
{
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay_left);
        else
            glutIdleFunc(NULL);
        break;
    case GLUT_MIDDLE_BUTTON:
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay_right);
        else
            glutIdleFunc(NULL);
        break;
    default:
        break;
    }
}


int main(int argc, char** argv)
{
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1200, 600);
    glutInitWindowPosition (0,0);
    glutInit(&argc, argv);
    glutCreateWindow ("Final Project: Computer Graphics");
    init();

    glutDisplayFunc(display);
    // glutKeyboardFunc(my_keyboard);
    //glutSpecialFunc(spe_key);
    //glutReshapeFunc(my_reshape);
    glutMouseFunc(my_mouse);
    glutMainLoop();
    return 0;   /* ANSI C requires main to return int. */
}

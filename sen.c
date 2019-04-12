#include <GL/freeglut.h>
#include <GL/gl.h>
#include <stdlib.h>
#include <math.h>


void myInit (void)
{
    // making background color black as first
    // 3 arguments all are 0.0
    glClearColor(0.5, 0.6, 0.7, 1.0);

    // making picture color green (in RGB mode), as middle argument is 1.0

    // breadth of picture boundary is 1 pixel
    glPointSize(1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // setting window dimension in X- and Y- direction
    gluOrtho2D(-780, 780, -420, 420);
}

void display (void)
{
    int i, x, y;
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);
    glColor3f(0.3, 0.8, 0.8);

    glVertex2i(-200, -300);
    glVertex2i(200, -300);
    glVertex2i(200, 50);
    glVertex2i(-200, 50);

    glEnd();
    glFlush();




    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);

    glVertex2i(-150, 0);
    glVertex2i(-50, 0);
    glVertex2i(-50, -100);
    glVertex2i(-150, -100);

    glEnd();
    glFlush();



    glBegin(GL_QUADS);
    glColor3f(0.5, 0.2, 0.5);

    glVertex2i(50, -300);
    glVertex2i(150, -300);
    glVertex2i(150, -100);
    glVertex2i(50, -100);

    glEnd();
    glFlush();





    glBegin(GL_TRIANGLES);
    glColor3f(1, 0, 0);

    glVertex2i(-200, 50);
    glVertex2i(200, 50);
    glVertex2i(0, 300);

    glEnd();
    glFlush();


    glBegin(GL_POINTS);
    glColor3f(1, 1, 1);

   for (i = 0; i < 500; i++)
    {
        x = rand() % 1500 - 750;
        y = rand() % 100 + 300;

        glVertex2i(x, y);
        glVertex2i(x+1, y);
        glVertex2i(x+1, y+100);
        glVertex2i(x, y+100);
    }
    glEnd();
    glFlush();
}

int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // giving window size in X- and Y- direction
    glutInitWindowSize(1366, 768);
    glutInitWindowPosition(0, 0);

    // Giving name to window
    glutCreateWindow("House");
    myInit();

    glutDisplayFunc(display);
    glutMainLoop();
}

/*
 * Compile with the followinng command
 * g++ sunny.cpp -lglut -lGL
 */

#include <GL/freeglut.h>
#include <GL/gl.h>
#include <bits/stdc++.h>

#define WIDTH 600
#define HEIGHT 600

using namespace std;

const double PI = 3.14159265358979323;

void scene() {

    glClear(GL_COLOR_BUFFER_BIT);

    // BackGround
    glClearColor(255.0/255.0,247.0/255.0,54.0/255.0, 0.0);

    // Ground
    glBegin(GL_POLYGON);
        glColor3f(1.0/255.0,71.0/255.0,41.0/255);
        glVertex2f(-1.0, -0.8);
        glVertex2f(1.0, -0.8);
        glVertex2f(1.0, -1.0);
        glVertex2f(-1.0, -1.0);
    glEnd();

    /***** House *****/
    // Front wall
    glBegin(GL_POLYGON);
    glColor3f(242.0/255, 207.0/255, 67.0/255);
        glVertex2f(-0.8, -0.8);
        glVertex2f(-0.5, -0.8);
        glVertex2f(-0.5, -0.3);
        glVertex2f(-0.8, -0.3);
    glEnd();

    // Side wall
    glBegin(GL_POLYGON);
    glColor3f(211.0/255, 180.0/255, 57.0/255);
        glVertex2f(-0.5, -0.8);
        glVertex2f(-0.0, -0.8);
        glVertex2f(-0.0, -0.3);
        glVertex2f(-0.5, -0.3);
    glEnd();

    // Front roof
    glBegin(GL_POLYGON);
    glColor3f(181.0/255, 7.0/255, 7.0/255);
        glVertex2f(-0.85, -0.3);
        glVertex2f(-0.45, -0.3);
        glVertex2f(-0.65, -0.0);
    glEnd();

    // Side roof
    glBegin(GL_POLYGON);
    glColor3f(150.0/255, 18.0/255, 18.0/255);
        glVertex2f(-0.45, -0.3);
        glVertex2f(-0.65, -0.0);
        glVertex2f(-0.15, -0.0);
        glVertex2f(0.05, -0.3);
    glEnd();

    // Front door
    glBegin(GL_POLYGON);
    glColor3f(165.0/255, 63.0/255, 4.0/255);
        glVertex2f(-0.71, -0.8);
        glVertex2f(-0.59, -0.8);
        glVertex2f(-0.59, -0.5);
        glVertex2f(-0.71, -0.5);
    glEnd();

    // Side Window
    glBegin(GL_POLYGON);
    glColor3f(0.0/255, 0.0/255, 0.0/255);
        glVertex2f(-0.3, -0.55);
        glVertex2f(-0.1, -0.55);
        glVertex2f(-0.1, -0.35);
        glVertex2f(-0.3, -0.35);
    glEnd();

    /*****************/
    
    // Moon
    glBegin(GL_POLYGON);
        for(int theta=0; theta<360; theta++) {
            double ang = theta * PI / 180;
            double r = 0.10;

            glColor3f(255.0/255, 178.0/255, 0.0/255);
            glVertex2f(0.6 + r * cos(ang), 0.7 + r * sin(ang));
        }
    glEnd();



     glBegin(GL_POLYGON);
        for(int theta=0; theta<360; theta++) {
            double ang = theta * PI / 180;
            double r = 0.08;

            glColor3f(255.0/255, 178.0/255, 0.0/255);
            glVertex2f(-0.6 + r * cos(ang) - 1.5*r, 0.3 + r * sin(ang) + 1.5*r );
        }
    glEnd();

    glBegin(GL_POLYGON);
        for(int theta=0; theta<360; theta++) {
            double ang = theta * PI / 180;
            double r = 0.1;

            glColor3f(255.0/255, 178.0/255, 0.0/255);
            glVertex2f(-0.6 + r * cos(ang), 0.3 + r * sin(ang));
        }
    glEnd();


    glPointSize(5.0);
    glBegin(GL_POINTS);
    	glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.75,0.43);
    glEnd();

    glBegin(GL_TRIANGLES);
    	glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.99+0.18,0.99-0.58);
        glVertex2f(-0.99+0.08+0.18,0.99-0.08-0.58);
        glVertex2f(-0.99+0.18,0.99-0.08-0.58);
    glEnd();

  

    /***** Bus *****/
    // Body
    glBegin(GL_POLYGON);
    glColor3f(0.0/255, 76.0/255, 99.0/255);
        glVertex2f(0.2, -0.7);
        glVertex2f(0.9, -0.7);
        glVertex2f(0.9, -0.35);
        glVertex2f(0.2, -0.35);
    glEnd();

    // Wheels
    glBegin(GL_POLYGON);
        for(int theta=0; theta<360; theta++) {
            glColor3f(239.0/255, 197.0/255, 119.0/255);
            double ang = theta * PI / 180;
            glVertex2f(0.35 + 0.1 * cos(ang), -0.7 + 0.1 * sin(ang));
        }
    glEnd();
    glBegin(GL_POLYGON);
        for(int theta=0; theta<360; theta++) {
            glColor3f(40.0/255, 40.0/255, 40.0/255);
            double ang = theta * PI / 180;
            glVertex2f(0.35 + 0.08 * cos(ang), -0.72 + 0.08 * sin(ang));
        }
    glEnd();
    glBegin(GL_POLYGON);
        for(int theta=0; theta<360; theta++) {
            glColor3f(239.0/255, 197.0/255, 119.0/255);
            double ang = theta * PI / 180;
            glVertex2f(0.75 + 0.1 * cos(ang), -0.7 + 0.1 * sin(ang));
        }
    glEnd();
    glBegin(GL_POLYGON);
        for(int theta=0; theta<360; theta++) {
            glColor3f(40.0/255, 40.0/255, 40.0/255);
            double ang = theta * PI / 180;
            glVertex2f(0.75 + 0.08 * cos(ang), -0.72 + 0.08 * sin(ang));
        }
    glEnd();

    // Windows
    glBegin(GL_POLYGON);
    glColor3f(100.0/255, 100.0/255, 100.0/255);
        glVertex2f(0.2, -0.55);
        glVertex2f(0.25, -0.55);
        glVertex2f(0.25, -0.35);
        glVertex2f(0.2, -0.35);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(150.0/255, 150.0/255, 150.0/255);
        glVertex2f(0.35, -0.50);
        glVertex2f(0.45, -0.50);
        glVertex2f(0.45, -0.40);
        glVertex2f(0.35, -0.40);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(150.0/255, 150.0/255, 150.0/255);
        glVertex2f(0.50, -0.50);
        glVertex2f(0.60, -0.50);
        glVertex2f(0.60, -0.40);
        glVertex2f(0.50, -0.40);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(150.0/255, 150.0/255, 150.0/255);
        glVertex2f(0.65, -0.50);
        glVertex2f(0.75, -0.50);
        glVertex2f(0.75, -0.40);
        glVertex2f(0.65, -0.40);
    glEnd();

    glFlush();
}

void drawScene() {

    scene();
}

int main(int argc, char **argv) {

    srand(time(0));

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Scenery");
    glutDisplayFunc(drawScene);
    glutMainLoop();
}
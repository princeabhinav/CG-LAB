
// C program to demonstrate 
// drawing a circle using 
// OpenGL 
#include<stdio.h> 
#include<GL/glut.h> 
#include<math.h> 
#define pi 3.142857 
  
// function to initialize 
void myInit (void) 
{ 
    // making background color black as first  
    // 3 arguments all are 0.0 
    glClearColor(0.0, 0.0, 0.0, 1.0); 
      
    // making picture color green (in RGB mode), as middle argument is 1.0 
    glColor3f(0.0, 1.0, 0.0); 
      
    // breadth of picture boundary is 1 pixel 
    glPointSize(1.0); 
    glMatrixMode(GL_PROJECTION);  
    glLoadIdentity(); 
      
    // setting window dimension in X- and Y- direction 
    gluOrtho2D(-780, 780, -420, 420); 
} 
  
void display (void)  
{ 
    glClear(GL_COLOR_BUFFER_BIT); 
    glBegin(GL_POLYGON); 
    float x_c=0.0, y_c=0.0, i; 
      
    // iterate y up to 2*pi, i.e., 360 degree 
    // with small increment in angle as 
    // glVertex2i just draws a point on specified co-ordinate 
    for ( i = 0; i < (2 * pi); i += 0.001) 
    { 
        // let 200 is radius of circle and as, 
        // circle is defined as x=r*cos(i) and y=r*sin(i) 
        //x = 200 * cos(i); 
        //y = 200 * sin(i); 
          
        glVertex2i(x_c+(100*cos(i)), y_c+(100*sin(i))); 
    } 
    glEnd(); 
    glFlush(); 
    glBegin(GL_POINTS); 
    float x_e=0.0, y_e=0.0,a=200,b=100;
    for ( i = 0; i < (2 * pi); i += 0.001) 
    { 
        // let 200 is radius of circle and as, 
        // circle is defined as x=r*cos(i) and y=r*sin(i) 
        //x = 200 * cos(i); 
        //y = 200 * sin(i); 
          
        glVertex2i(x_e+(a*cos(i)), y_e+(b*sin(i))); 
    } 
    glEnd(); 
    glFlush(); 
    
    glBegin(GL_POINTS); 
    float m=30,n=100;
    for ( i = 0; i < (2 * pi); i += 0.001) 
    { 
        // let 200 is radius of circle and as, 
        // circle is defined as x=r*cos(i) and y=r*sin(i) 
        //x = 200 * cos(i); 
        //y = 200 * sin(i); 
          
        glVertex2i(x_e+(m*cos(i)), y_e+(n*sin(i))); 
    } 
    glEnd(); 
    glFlush(); 
    
    glBegin(GL_POINTS); 
    float s=30,p=50;
    for ( i = 0; i < (2 * pi); i += 0.001) 
    { 
        // let 200 is radius of circle and as, 
        // circle is defined as x=r*cos(i) and y=r*sin(i) 
        //x = 200 * cos(i); 
        //y = 200 * sin(i); 
          
        glVertex2i(x_e+(s*cos(i)), y_e+(s*sin(i))); 
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
    glutCreateWindow("Circle Drawing"); 
    myInit(); 
      
    glutDisplayFunc(display); 
    glutMainLoop(); 
} 


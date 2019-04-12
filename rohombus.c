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
    float x_c=0.0, y_c=0.0, i; 
      
    // iterate y up to 2*pi, i.e., 360 degree 
    // with small increment in angle as 
    // glVertex2i just draws a point on specified co-ordinate 
        // let 200 is radius of circle and as, 
        // circle is defined as x=r*cos(i) and y=r*sin(i) 
        //x = 200 * cos(i); 
        //y = 200 * sin(i); 
   
    
    
     
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(-150, 30);
    glVertex2i(150, 30);
    glVertex2i(150, -30);
    glVertex2i(-150, -30); 
    glEnd();
    
    
   

    
    
   
    
     glBegin(GL_QUADS);
     glColor3f(1.0, 0.647, 0.0);
    glVertex2i(-150, 90);
    glVertex2i(150, 90);
    glVertex2i(150, 30);
    glVertex2i(-150,30);
    glEnd();
    
     glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2i(-150, -30);
    glVertex2i(150, -30);
    glVertex2i(150, -90);
    glVertex2i(-150, -90); 
    glEnd();

    
    
    
    
    glFlush();
    glBegin(GL_LINES);
    glColor3f(1.0, 0.0, 0.0);
    
    glVertex2i(-150, -90);
    glVertex2i(-150, -360);
    
    glEnd(); 
    glFlush(); 
    
    
     glBegin(GL_LINE_LOOP); 
    float x_e=0.0, y_e=0.0,a=30;
    glColor3f(0.0, 0.0, 1.0); 
    for ( i = 0; i < (2 * pi); i += 0.005) 
    { 
        // let 200 is radius of circle and as, 
        // circle is defined as x=r*cos(i) and y=r*sin(i) 
        //x = 200 * cos(i); 
        //y = 200 * sin(i); 
          
        glVertex2i(x_e+(a*cos(i)),y_e+(a*sin(i))); 
    } 
    glEnd(); 
    glFlush(); 
    
    glBegin(GL_LINES); 
    for ( i = 0; i < (2 * pi); i += (2*pi)/24) 
    { 
        // let 200 is radius of circle and as, 
        // circle is defined as x=r*cos(i) and y=r*sin(i) 
        //x = 200 * cos(i); 
        //y = 200 * sin(i); 
        glVertex2f(x_e+(a*cos(i)),y_e+(a*sin(i)));  
        glVertex2i(0.0,0.0); 
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


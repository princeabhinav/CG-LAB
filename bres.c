#include <GL/glut.h>
#include <stdio.h>

int x1, y1, x2, y2;

void myInit() {
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
    gluOrtho2D(-780, 780, -420, 420); ;
}

void draw_pixel(int x, int y) {
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
}

void draw_line_m_less_than_1(int x1, int x2, int y1, int y2) {
	int dx, dy;
    dx = x2-x1;
    dy = y2-y1;

    int p = 2*dy - dx;

    for(int i = 1; i < dx; i++){
        if(p < 0){
            draw_pixel(x1+1, y1);
            //printf("%d %d ",x1,y1);
            x1++;
            p = p + 2*dy;
        }
        else{
           draw_pixel(x1+1, y1+1);
           printf("%d %d ",x1,y1+1);
           x1++;
           y1++;
           p = p + 2*dy - 2*dx; 
        }
        
       
    }

}

void draw_line_m_greater_than_1(int x1, int x2, int y1, int y2) {
	int dx, dy;
    dx = x2-x1;
    dy = y2-y1;

    int p = 2*dx - dy;

    for(int i = 1; i < dx; i++){
        if(p < 0){
            draw_pixel(x1, y1+1);
            //printf("%d %d ",x1,y1+1);
            y1++;
            p = p + 2*dx;
        }
        else{
           draw_pixel(x1+1, y1+1);
           printf("%d %d ",x1,y1+1);
           x1++;
           y1++;
           p = p + 2*dx - 2*dy; 
        }
        
       
    }

}

void myDisplay() {
    float m = (y2-y1)/(x2-x1);
    m = m > 0 ? m : -m;
    if(m < 1)
	    draw_line_m_less_than_1(x1, x2, y1, y2);
    else
        draw_line_m_greater_than_1(x1, x2, y1, y2);
	glFlush();
}

int main(int argc, char **argv) {

	printf( "Enter (x1, y1, x2, y2)\n");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Bresenham's Line Drawing");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
}

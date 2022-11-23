//CIRCLE MAIL

#include<GL/glut.h>
#include<math.h>
#define PI 3.1416

void display1(void){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    //Circle
    int i;
    GLfloat x = .0f; GLfloat y = .0f; GLfloat radius = .735f;
    int triangleAmount = 40;

    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 87, 51);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++){
        glVertex2f(
                    x + (radius * cos(i * twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                   );
    }
    glEnd();

    //Mail's Rectangle
    glBegin(GL_QUADS);
    glColor3f(0, 0, 1);
    glVertex2f(-0.5, 0.3);
    glVertex2f(0.5, 0.3);
    glVertex2f(0.5, -0.3);
    glVertex2f(-0.5, -0.3);
    glEnd();

    //Mail's Triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0, 1, 0);
    glVertex2f(-0.5, 0.3);
    glVertex2f(0.5, 0.3);
    glVertex2f(0.0, 0.0);
    glEnd();

    glFlush();
}

void init (void){
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutCreateWindow("Jackson's Mail");
    glutInitWindowSize(640, 500);
    glutDisplayFunc(display1);
    glutMainLoop();

    return 0;
}

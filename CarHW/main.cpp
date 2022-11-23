//Car

#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1416

void car(){
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    //glScalef(2.0f, 2.0f, 2.0f); //Here is the scalling

    glBegin(GL_QUADS); //Body
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.7, 0.0);
    glVertex2f(0.7, 0.0);
    glVertex2f(0.7, -0.2);
    glVertex2f(-0.7, -0.2);
    glEnd();

    glBegin(GL_QUADS); //Hud
    glColor3f(0.75, 0.75, 0.75);
    glVertex2f(-0.4, 0.2);
    glVertex2f(0.4, 0.2);
    glVertex2f(0.5, 0.0);
    glVertex2f(-0.5, 0.0);
    glEnd();

    //Wheel 1
    int i;
    GLfloat x = -0.4f; GLfloat y = -0.2f; GLfloat radius = .1f;
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

    //Wheel 2
    x = 0.4f;
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

    glFlush();
}

int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Jackson's Car");
    glutDisplayFunc(car);
    glutMainLoop();

    return 0;
}

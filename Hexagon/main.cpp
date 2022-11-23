//Star

#include <GL/glut.h>
#include <stdlib.h>

void display(){
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    glColor3f(0, 0, 1);
    glVertex2f(-0.5, 0.1);
    glVertex2f(0.5, 0.1);
    glVertex2f(0, -0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0, 0, 1);
    glVertex2f(0, 0.5);
    glVertex2f(0.1, 0.1);
    glVertex2f(-0.1, 0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0, 0, 1);
    glVertex2f(-0.15, -0.15);
    glVertex2f(0, -0.3);
    glVertex2f(-0.2, -0.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0, 0, 1);
    glVertex2f(0, -0.3);
    glVertex2f(0.2, -0.5);
    glVertex2f(0.15, -0.15);
    glEnd();

    glFlush();
}

int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitWindowSize(500, 300);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Jackson's Star");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

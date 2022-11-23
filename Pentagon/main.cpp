//Pentagon

#include <GL/glut.h>
#include <stdlib.h>

void display(){
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    glColor3f(0, 0, 1);
    glVertex2f(0, 0.8);
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, 0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 1);
    glVertex2f(-0.5, 0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(0.2, -0.2);
    glVertex2f(-0.2, -0.2);
    glEnd();

    glFlush();
}

int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitWindowSize(500, 300);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Jackson's Pentagon");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

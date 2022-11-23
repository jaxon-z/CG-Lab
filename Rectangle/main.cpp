//Rectangle + Scalling

#include <GL/glut.h>
#include <stdlib.h>

void display(){
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    glScalef(2.0f, 2.0f, 2.0f); //Here is the scalling
    glBegin(GL_QUADS);
    glColor3f(0, 0, 1);
    glVertex2f(-0.5, 0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(-0.5, -0.5);

    glEnd();
    glFlush();
}

int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitWindowSize(500, 300);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Jackson's Rectangle");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

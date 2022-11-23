//Square + Translation

#include <GL/glut.h>
#include <stdlib.h>

void display(){
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    glTranslatef(0.2f, 0.3f, 0.0f); //Here is the Translation
    glBegin(GL_QUADS);
    glColor3f(0, 0, 1);
    glVertex2f(-0.4, 0.4);
    glVertex2f(0.4, 0.4);
    glVertex2f(0.4, -0.4);
    glVertex2f(-0.4, -0.4);

    glEnd();
    glFlush();
}

int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Jackson's Rectangle");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

//Crosshair
/*
#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1416

void Crosshair(){
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    //Main Crosshair
    glBegin(GL_QUADS);
    glColor3ub(192, 202, 51);
    glVertex2f(-0.5, 0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(-0.5, -0.5);
    glEnd();

    glFlush();
}

void myInit(){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-20, 20, -20, 20);
}

int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Shoot It! Crosshair");
    glutDisplayFunc(Crosshair);
    myInit();
    glutMainLoop();

    return 0;
}
*/



#include <stdlib.h>
#include <GL/glut.h>
#include <iostream>
using namespace std;
float xr = 0, yr = 0;

void specialkey(int key, int x, int y){
    switch(key){
    case GLUT_KEY_UP:
        yr=yr+5;
        cout<<y<<endl;
        glutPostRedisplay();
        break;
    case GLUT_KEY_DOWN:
        yr=yr-5;
        cout<<y<<endl;
        glutPostRedisplay();
        break;
    case GLUT_KEY_LEFT:
        xr=xr-5;
        cout<<x<<endl;
        glutPostRedisplay();
        break;
    case GLUT_KEY_RIGHT:
        xr=xr+5;
        cout<<x<<endl;
        glutPostRedisplay();
        break;
    }
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(192, 202, 51);

    glBegin(GL_QUADS);
    glVertex2f(20+xr,10+10+yr);
    glVertex2f(30+xr,10+10+yr);
    glVertex2f(30+xr,20+10+yr);
    glVertex2f(20+xr,20+10+yr);
    glEnd();

    glFlush();
    glutPostRedisplay();
    glutSwapBuffers();
}

int main(int argc, char** argv){
    printf("use array key");

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(600, 50);
    glutCreateWindow("Crosshair");

    glutDisplayFunc(display);

    glClearColor(0, 0, 0, 0);
    gluOrtho2D(0.0, 400, 0.0, 400);
    glutSpecialFunc(specialkey);

    glutMainLoop();
    return 0;
}

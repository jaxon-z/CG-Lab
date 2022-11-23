/*
////////////Double Circle///////////////
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void render(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0, 0, -30);


    //inner circle
    glPushMatrix();
    glColor3f(0.0, 0.0, 1.0);
    glTranslatef(-1, 0, 10);
    glutSolidSphere(5, 40, 40);
    glPopMatrix();

    // red circle
    glPushMatrix();
    glColor3ub(244, 42, 65);
    glTranslatef(-1, 0, 10);
    glutSolidSphere(5, 50, 50);
    glPopMatrix();



    // green rect
    glColor3ub(0, 106, 77);
    glutSolidCube(25);

    glFlush();
    glutSwapBuffers();
}

void init(void)
{
    glClearColor( 1, 1, 1, 1);
    glClearDepth( 1.0 );
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_COLOR_MATERIAL);
}

void reshape(int w, int h)
{
    float aspectRatio = (float)w/(float)h;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45, aspectRatio, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH );
    glutInitWindowSize(500, 300);
    glutCreateWindow("Flag of Bangladesh");
    init();
    glutReshapeFunc(reshape);
    glutDisplayFunc(render);
    glutMainLoop();
    return 0;
}
*/
//////////Moving Circle////////////
/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void display();
void reshape(int,int);
void timer(int);
/* GLUT callback Handlers */
void init()
{
    glClearColor(0.0,0.0,0.0,1.0);
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(200,100);
    glutInitWindowSize(500,500);



    glutCreateWindow("Animation Windows");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(1000,timer,0);
    init();
    glutMainLoop();
}

float y_position = -10.0;
int state = 1;
 void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    //draw


    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(1.0, y_position);
    glVertex2f(-1.0, y_position);
    glVertex2f(-1.0, y_position+2.0);
    glVertex2f(1.0, y_position+2.0);



    glEnd();
    glutSwapBuffers();

}

void reshape(int w,int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10,10,-10,10);
    glMatrixMode(GL_MODELVIEW);

}
void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);

    switch(state)
    {
    case 1:
        if(y_position<8)
            y_position+=0.5;
    else
        state = -1;
        break;
    case -1:
        if(y_position>-10)
            y_position-=0.3;
        else
            state = 1;
        break;
    }

}

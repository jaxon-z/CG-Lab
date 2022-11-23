//Triangle + Rotation

#include <GL/gl.h>
#include <GL/glut.h>

void display() {

    glClearColor( 0, 0, 0, 1 );
    glClear( GL_COLOR_BUFFER_BIT );

    glRotatef(90, 0.0f, 0.0f, 0.3f); //Here is the rotation, 90 degree
    glBegin(GL_TRIANGLES);
    glColor3f(0, 0, 1);
    glVertex2f( -0.5, -0.5 );
    glColor3f(0, 0, 1);
    glVertex2f( 0.5, -0.5 );
    glColor3f(0, 0, 1);
    glVertex2f( 0, 0.5 );
    glEnd();

    glutSwapBuffers();

}


int main( int argc, char** argv ) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Jackson's Triangle");
    glutDisplayFunc(display);

    glutMainLoop();

    return 0;

}

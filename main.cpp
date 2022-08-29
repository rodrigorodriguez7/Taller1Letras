#include <windows.h>
#include <GL/glut.h>

using namespace std;

void proyeccion(){
    glClearColor(1.0,1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-27,27,-5,5);
}

void dibujar(){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin (GL_LINES);
    glColor3f(0.0,0.0,0.0);

    //LETRA S
    glVertex2d(-22,-1);
    glVertex2i(-22,-3);

    glVertex2d(-22,-3);
    glVertex2i(-21,-4);

    glVertex2d(-21,-4);
    glVertex2i(-19,-4);

    glVertex2d(-19,-4);
    glVertex2i(-18,-3);

    glVertex2d(-18,-3);
    glVertex2i(-18,-1);

    glVertex2d(-18,-1);
    glVertex2i(-21,2);

    glVertex2d(-21,2);
    glVertex2i(-21,3);

    glVertex2d(-21,3);
    glVertex2i(-19,3);

    glVertex2d(-19,3);
    glVertex2i(-19,1);

    glVertex2d(-19,1);
    glVertex2i(-18,1);

    glVertex2d(-18,1);
    glVertex2i(-18,3);

    glVertex2d(-18,3);
    glVertex2i(-19,4);

    glVertex2d(-19,4);
    glVertex2i(-21,4);

    glVertex2d(-21,4);
    glVertex2i(-22,3);

    glVertex2d(-22,3);
    glVertex2i(-22,1);

    glVertex2d(-22,1);
    glVertex2i(-19,-2);

    glVertex2d(-19,-2);
    glVertex2i(-19,-3);

    glVertex2d(-19,-3);
    glVertex2i(-21,-3);

    glVertex2d(-21,-3);
    glVertex2i(-21,-1);

    glVertex2d(-21,-1);
    glVertex2i(-22,-1);

    //LETRA T
    glVertex2d(-16,-4);
    glVertex2i(-14,-4);

    glVertex2d(-14,-4);
    glVertex2i(-14,2);

    glVertex2d(-14,2);
    glVertex2i(-13,2);

    glVertex2d(-13,2);
    glVertex2i(-13,4);

    glVertex2d(-13,4);
    glVertex2i(-17,4);

    glVertex2d(-17,4);
    glVertex2i(-17,2);

    glVertex2d(-17,2);
    glVertex2i(-16,2);

    glVertex2d(-16,2);
    glVertex2i(-16,-4);

    //R
    glVertex2d(-9,2);
    glVertex2i(-7,2);

    glVertex2d(-6,2);
    glVertex2i(-6,-4);
    //A

    //N
    glVertex2d(-2,4);
    glVertex2i(-2,-4);

    glVertex2d(2,4);
    glVertex2i(2,-4);

    glVertex2d(-2,4);
    glVertex2i(-1,4);

    glVertex2d(2,4);
    glVertex2i(1,4);

    glVertex2d(-2,-4);
    glVertex2i(-1,-4);

    glVertex2d(2,-4);
    glVertex2i(1,-4);

    glVertex2d(1,4);
    glVertex2i(1,-1);

    glVertex2d(-1,1);
    glVertex2i(-1,-4);

    glVertex2d(1,4);
    glVertex2i(1,-1);

    glVertex2d(-1,1);
    glVertex2i(-1,-4);

    glVertex2d(-1,4);
    glVertex2i(1,-1);

    glVertex2d(-1,1);
    glVertex2i(1,-4);

    //G
    glVertex2d(5,0);
    glVertex2i(7,0);

    glVertex2d(7,0);
    glVertex2i(7,-3);

    glVertex2d(7,-3);
    glVertex2i(6,-4);

    glVertex2d(6,-4);
    glVertex2i(4,-4);

    glVertex2d(4,-4);
    glVertex2i(3,-3);

    glVertex2d(3,-3);
    glVertex2i(3,3);

    glVertex2d(3,3);
    glVertex2i(4,4);

    glVertex2d(4,4);
    glVertex2i(6,4);

    glVertex2d(6,4);
    glVertex2i(7,3);

    glVertex2d(7,3);
    glVertex2i(7,1);

    glVertex2d(7,1);
    glVertex2i(6,1);

    glVertex2d(6,1);
    glVertex2i(6,2);

    glVertex2d(6,2);
    glVertex2i(5,3);

    glVertex2d(5,3);
    glVertex2i(4,2);

    glVertex2d(4,2);
    glVertex2i(4,-2);

    glVertex2d(4,-2);
    glVertex2i(5,-3);

    glVertex2d(5,-3);
    glVertex2i(6,-2);

    glVertex2d(6,-2);
    glVertex2i(6,-1);

    glVertex2d(6,-1);
    glVertex2i(5,-1);

    glVertex2d(5,-1);
    glVertex2i(5,0);

    //E

    //R

    //S


    glEnd();
    glFlush();
}

int main (int argc, char* argv []){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1400,400);
    glutInitWindowPosition(0,200);
    glutCreateWindow ("STRANGERS");
    proyeccion();
    glutDisplayFunc(dibujar);
    glutMainLoop();
}

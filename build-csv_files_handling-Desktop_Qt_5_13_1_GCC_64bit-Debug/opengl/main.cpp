#include <GL/freeglut.h>
#include <iostream>
using namespace std;
float x = 0;
float y = 0;
float alpha = 0;
float alpha2 = 0;
void segment(float w, float h)
{
    glBegin(GL_POLYGON);
    glVertex2f(0, w / 2);
    glVertex2f(h, w / 2);
    glVertex2f(h, -w / 2);
    glVertex2f(0, -w / 2);
    glEnd();
}
void repaint()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glColor3f(1., 0, 0);
    glTranslatef(x, y, 0);
    glRotated(alpha, 0, 0, 1);
    float h = 0.4;
    segment(0.1, h);
    glTranslatef(h, 0, 0);
    glRotated(alpha2, 0, 0, 1);
    segment(0.1, h);
    //    glBegin(GL_TRIANGLES);
    //    glVertex3f(-0.5, -0.5, 0.0);
    //    glColor3f(0, 1.0, 0);
    //    glVertex3f(0.5, 0.0, 0.0);
    //    glColor3f(0, 0.0, 1.0);
    //    glVertex3f(0.0, 0.5, 0.0);
    //    glEnd();
    glPopMatrix();
    glutSwapBuffers(); //used in case of double FBs configuration in case of  single FB glFlush(); should be used
}
void key(unsigned char _key, int _x, int _y)
{
    switch (_key) {
    case 27: //escape pressed
        exit(0);

    case 'a':
        x += -0.1;
        break;
    case 'd':
        x += 0.1;
        break;
        break;
    case '+':
        alpha += 1;
        break;
    case ']':
        alpha2 += 1;
        break;
    }
    glutPostRedisplay();
    cout << "Key was pressed" << x << endl;
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    //initialize OPENGL double FB mode
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    //Creates window of 320x320 size where left top corner is in 100,100 point
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(620, 620);
    glutCreateWindow("My Opengl Program");

    //Registreing callbacks
    glutDisplayFunc(repaint);
    //    glutReshapeFunc(windowSizeChanged);
    glutKeyboardFunc(key);
    glutMainLoop();
}

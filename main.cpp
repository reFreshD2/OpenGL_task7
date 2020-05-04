#include <GL/glut.h>
#include <math.h> 
#include <time.h>
#include <cstdlib>
#include <iostream>
#define PI 3.14159265


void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLineWidth(0.5);
	glColor3f(0, 1, 0);
	glRotatef(30, 0.5, 0.5, 0.5);
	glutWireCube(0.5);
	//glutWireCone(0.2, 0.5, 50, 1);
	//glutWireTetrahedron();
	//glutWireOctahedron();
	/*GLUquadricObj *quadObj;
	quadObj = gluNewQuadric();
	gluQuadricDrawStyle(quadObj, GLU_LINE);
	gluCylinder(quadObj, 0.4, 0.4, 0.5, 30, 30);
	gluDeleteQuadric(quadObj);*/
	glFlush();
}


int main(int argc, char * argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Ex 7");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
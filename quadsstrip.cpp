#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    glPointSize(60);    
    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f,0.0f,0.0);//color azul
    glVertex3f(-0.0f,-0.5f,0.0f);// primer punto ubicado en el primer cuadrante
     glVertex3f(0.5f,-0.5f,0.0f); // tercer punto ubicado en el tercer cuadrante 
      glVertex3f(-0.5f,0.0f,0.0f);//segundo punto que esta ubicado en el segundo cuadrante
      glVertex3f(0.5f,0.0f,0.0f); //cuarto punto ubicado en el cuarto cuadrante 
       glColor3f(1.0f,1.0f,0.0);//COLOR
      glVertex3f(-0.7f,0.5f,0.0f);
      glVertex3f(0.7f,0.5f,0.0f);
  glColor3f(0.0f,1.0f,0.0);
		glVertex3f(-0.8f,0.8f,0.0f);
		glVertex3f(0.9f,0.8 f,0.0f);
    glEnd();
    glFlush ();
//que mamada
}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
     //glOrtho(0.1, 1.0, 0.0, 1.0, -1.0, 0.5);//vista al primer cuadrante
     // glOrtho(-1.0, 0.1, -0.1, 1.0, -1.0, 0.5);//vista al segundo cuadrante
	//glOrtho(-1.0, 0.1, -1.0, 0.0, -0.5, 1.0);//vista al tercer cuadrante
      //glOrtho(-0.1, 1.0, -1.0, 0.1, -1.0, 1.0);// vista al cuarto cuadrante
      glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);//vista ortogonar  
   
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 450);// funcion para controlar el tamaño de la ventana
    glutInitWindowPosition (420,140);//funcion para ubicar donde aparecera la ventana
    glutCreateWindow ("Ejemplo Puntos");//encabezado que aparece en la parte superior de la ventana
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

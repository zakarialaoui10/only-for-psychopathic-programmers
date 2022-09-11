#include <stdio.h>
struct point{
  int x;
  int y;
};
struct circle{
  float radius;
  struct point center;
} ; 
void pointConstructor(struct point *P,int x,int y)
{
    P->x=x;
    P->y=y;
}
void circleConstructor(struct circle *C,float r,struct point p)
{
    C->radius=r;
    C->center=p;
}
int main() {
    struct point p;
    pointConstructor(&p,11,12);   
    struct circle c;
    circleConstructor(&c,3,p);
    printf("Circle radius is %.2f, center is at (%d, %d)", c.radius, c.center.x, c.center.y);
    return 0;
}

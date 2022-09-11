# programming-for-psychopaths

- [1-Hello World in Matlab](#hello_world_in_matlab)
- [2-Oop in no Oop Languages](#Oop_in_no_Oop_Languages)
- 
                         
### hello_world_in_matlab    

Millions of engineers and scientists use MATLAB in various fields, in industry and academia, including deep learning and machine learning, signal processing and communications, image and video processing, control systems, test and measurement, computational finance, and computational biology but no one of them can print hello world in this language .</br>
Don't worry, Now you can print hello world using MATLAB 

```matlab       
disp("Hello world")  
```  

### Oop_in_no_Oop_Languages

Oop it's just a paradigm ... </br>

Object = Struct + Methodes 

#### Oop_in_C_Lang

```c
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
``` 

#### Oop_in_Go_Lang


### indexing

<table>
<tr>
<th rowspan=2>data</th>
<th>Language</th>
<th>index</th>
<th>syntax</th>
<th>output</th>
</tr>
<tr>
<td rowspan=2>data</td>
<td>Python</td>
<td rowspan=2>1</td>
<td>Python</td>
<th>output</th>
</tr>
</table>

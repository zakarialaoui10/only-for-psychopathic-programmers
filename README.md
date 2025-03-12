<!-- 
change  repo 
ssr in c / asm  
go ?
-->

# programming-for-psychopaths                    

- [1-Hello World in Matlab](#hello_world_in_matlab)
- [2-Oop in No Oop Languages](#oop_in_no_oop_languages)   
- [3-Indexing](#indexing) 
- [4-Loop](#loop)     
### hello_world_in_matlab     
  
Millions of engineers and scientists use MATLAB in various fields, in industry and academia, including deep learning and machine learning, signal processing and communications, image and video processing, control systems, test and measurement, computational finance, and computational biology but no one of them can print hello world in this language .</br>
Don't worry, Now you can print hello world using MATLAB 
  
```matlab       
disp("Hello world")  
```  

### oop_in_no_oop_languages

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
<th>data</th>
<th>Language</th>
<th>index</th>
<th>element</th>
</tr>
<tr>
<td rowspan=6>1<br>2<br>3<br>4<br></td>
<td>Javascript</td>
<td rowspan=6>1</td>
<td>2</td>
</tr>
<tr>
<td>Python</td>
<td>2</td>
</tr>
<tr>
<td>Java</td>
<td>2</td>
</tr>
<tr>
<td>C</td>
<td>2</td>
</tr>
<tr>
<td>C++</td>
<td>2</td>
</tr>
<tr>
<td>Matlab</td>
<td>1</td>
</tr>
</table>

### loop

level 0 

```javascript 
for(i=0;i<10;i++)console.log(i)
```
level 1

```javascript 
i=0;
while(i<10){
console.log(i)
i++;
}
```
level 2

```javascript 
i=0;
for(;;){
if(i==10)break;
console.log(i)
i++
}
```




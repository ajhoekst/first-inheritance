# Description
Coding exercise for FIRST Robotics students - inheritance

# Instructions
A basic class hierarchy has been built for you. There are four levels of difficulty to challenge you:
1. **Basic:** Implement the 2D shape interfaces defined by the following headers:
- [triangle.h](https://github.com/ajhoekst/first-inheritance/blob/master/inc/triangle.h)
- [rectangle.h](https://github.com/ajhoekst/first-inheritance/blob/master/inc/rectangle.h)
- [circle.h](https://github.com/ajhoekst/first-inheritance/blob/master/inc/circle.h)
- [square.h](https://github.com/ajhoekst/first-inheritance/blob/master/inc/square.h)
2. **Intermediate:** Implement the 3D shape interfaces defined by the following headers:
- [box.h](https://github.com/ajhoekst/first-inheritance/blob/master/inc/box.h)
- [cube.h](https://github.com/ajhoekst/first-inheritance/blob/master/inc/cube.h)
- [sphere.h](https://github.com/ajhoekst/first-inheritance/blob/master/inc/sphere.h)
3. **Advanced:** Design the 3D shape interfaces and implement, using the following headers:
- [pyramid.h](https://github.com/ajhoekst/first-inheritance/blob/master/inc/pyramid.h)
- [tetrahedron.h](https://github.com/ajhoekst/first-inheritance/blob/master/inc/tetrahedron.h)
4. **Expert:** How can we compare shapes to determine if they are the same shape? [Hint](http://en.cppreference.com/w/cpp/language/operators)

# Shape Definitions
## Triangle
We will only consider isosceles trianges - triangles with two legs of the same magnitude. The parameter *length* is the base of the triangle and *width* is the distance from the center of the base to the apex - or top - of the triangle. This is roughly diagrammed below.
~~~~
     ^
    /|\
   / | \
  /  |w \
 /_______\
  length
~~~~
The perimeter of this triangle can be calculated as follows:
~~~~
perimeter = length + 2 * sqrt( (length/2)^2 + width^2 )
~~~~
The area of this triangle can be calculated as follows:
~~~~
area = length * width / 2
~~~~
## Rectangle
The parameter *length* is the base of the rectangle and *width* is the height of the rectangle. This is roughly diagrammed below.
~~~~
 -----------
|           |
|           | width
|           |
 -----------
   length
~~~~
The perimeter of this rectangle can be calculated as follows:
~~~~
perimeter = 2 * length + 2 * width
~~~~
The area of this rectangle can be calculated as follows:
~~~~
area = length * width
~~~~
## Circle
The parameters *length* and *width* can used as the diameter of the circle. This is roughly diagrammed below.
~~~~

   -----
 /   |w  \
(---------)
 \l  |   /
   -----

~~~~
The perimeter of this circle can be calculated as follows:
~~~~
perimeter = 2 * pi * length
~~~~
The area of this circle can be calculated as follows:
~~~~
area = pi * (length / 2)^2 / 2
~~~~
## Square
A square is a special case of a rectangle where *length* equals *width*. If you correctly inherit from **Rectangle**, you should not need to implement the *perimeter* or *area* methods.

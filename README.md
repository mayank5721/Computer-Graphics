# Computer-Graphics  

## About Computer Graphics:  
The field of computer graphics is a broad and diverse field that exists cross section between computer science and design. It is interested in the entire process of creating computer generated imagery, from creating digital three-dimensional models, to the process of texturing, rendering, and lighting those models, to the digital display of those renderings on a screen.  

### Definition:  
It is the use of computers to create and manipulate pictures on a display device. It comprises of software techniques to create, store, modify, represents pictures.  

Interactive computer graphics work using the concept of two-way communication between computer users. The computer will receive signals from the input device, and the picture is modified accordingly. Picture will be changed quickly when we apply command.  

## DDA Line Drawing Algorithm    

### About DDA Line Drawing Algorithm:   
DDA stands for Digital Differential Analyser. In this algorithm an incremental method of scan conversion of line takes place. Every succeeding pixel is calculated using the results of its predecessor.  

### Advantages:  
(a) It is a faster method than method of using direct use of line equation.  
(b) This method does not use multiplication theorem.  
(c) Plotting of same point twice is not possible as it allows us to detect the change in the value of x and y.  
(d) This method gives overflow indication when a point is repositioned.  
(e) It is an easy method because each step involves just two additions.  

### Disadvantages:  
(a) It involves floating point additions rounding off is done. Accumulations of round off error cause accumulation of error.  
(b) Rounding off operations and floating point operations consumes a lot of time.  
(c) It is more suitable for generating line using the software. But it is less suited for hardware implementation.  

### Algorithm  
Step 1: Start Algorithm  

Step 2: Declare x1,y1,x2,y2,dx,dy,x,y as integer variables   
        where (x1,y1) -> initial points  
              (x2,y2) -> final points  
              (dx,dy) -> differential change  
              (x,y)   -> plotting points  

Step 3: Enter value of x1,y1,x2,y2.  

Step 4: Calculate dx = x2-x1  

Step 5: Calculate dy = y2-y1  

Step 6: If ABS (dx) > ABS (dy)  
       Then step = abs (dx)  
       Else step = abs (dy)  

Step 7: xinc = dx/step  
        yinc = dy/step  
        assign x = x1  
        assign y = y1  

Step 8: Set pixel (x, y)  

Step 9: x = x + xinc  
        y = y + yinc  
        setpixels (Round (x), Round (y))  

Step 10: Repeat step 9 until x = x2  

Step 11: End Algorithm  


## Bresenham Line Drawing Algorithm    

### About Bresenham Line Drawing Algorithm:   
Bresenham Line Drawing Algorithm is an efficient method because it involves only integer addition, subtractions, and multiplication operations. These operations can be performed very rapidly so lines can be generated quickly.

In this method, next pixel selected is that one who has the least distance from true line.    

### Advantages:  
(a) It involves only integer arithematic, so it is simple.  
(b) It avoids generation of duplicate points.  
(c) It can be implemented using hardware because it does not use multiplication and division.  
(d) It is faster than DDA Line Drawing Algorithm as it does not involves floating point calculations.  

### Disadvantages:  
(a) It is meant for basic line drawing only. Smooth lines cannot be generated.  

### Algorithm  
Step 1: Start Algorithm  

Step 2: Declare variable x1,x2,y1,y2,d,i1,i2,dx,dy  

Step 3: Enter value of x1,y1,x2,y2  
                Where (x1,y1) are coordinates of Starting point    
                 (x2,y2) are coordinates of Ending point  

Step 4: Calculate dx = x2-x1  
                Calculate dy = y2-y1  
                Calculate i1=2\*dy  
                Calculate i2=2\*(dy-dx)  
                Calculate d=i1-dx  

Step 5: Consider (x, y) as starting point and xendas maximum possible value of x.  
                If dx < 0  
                        Then x = x2  
                        y = y2  
                          xend=x1  
                If dx > 0  
                    Then x = x1  
                y = y1  
                        xend=x2  

Step 6: Generate point at (x,y)coordinates.  

Step 7: Check if whole line is generated.  
                If x > = xend  
                Stop.  

Step 8: Calculate co-ordinates of the next pixel  
                If d < 0  
                    Then d = d + i1  
                If d ≥ 0  
          Then d = d + i2  
                Increment y = y + 1  

Step 9: Increment x = x + 1  

Step 10: Draw a point of latest (x, y) coordinates  

Step 11: Go to step 7  

Step 12: End of Algorithm  


## Circle Drawing
It is not easy to display a continuous smooth arc on the computer screen as our computer screen is made of pixels organized in matrix form. So, to draw a circle on a computer screen we should always choose the nearest pixels from a printed pixel so as they could form an arc.

## Mid Point Circle Drawing Algorithm    

### About Mid Point Circle Drawing Algorithm:   
The mid-point circle drawing algorithm is an algorithm used to determine the points needed for rasterizing a circle. 
We use the mid-point algorithm to calculate all the perimeter points of the circle in the first octant and then print them along with their mirror points in the other octants. This will work because a circle is symmetric about it’s centre.  

### Advantages:  
(a) This algorithm is efficient for scan conversion for drawing geometric curves on raster display.  

### Disadvantages:  
(a) Distance between the pixels is not equal so we won’t a smooth circle.  

### Algorithm  

## Bresenham Circle Drawing Algorithm    

### About Bresenham Circle Drawing Algorithm:   
To calculate the next pixel location from a previously known pixel location (x, y). In Bresenham’s algorithm at any point (x, y) we have two option either to choose the next pixel (x+1, y) or (x+1, y-1), which can be decided by using the Decision Parameter (let us assume as 'd') as:  
if d>0, then (x+1, y-1) is chosen else (x+1, y) is chosen.  

### Advantages:  
(a) The Bresenhem’s circle drawing algorithm uses integer arithmetic which makes the implementation less complex.  
(b) Due to its integer arithmetic, it is less time-consuming.  
(c) This algorithm is more accurate than any other circle drawing algorithm as it avoids the use of round off function.  

### Disadvantages:  
(a) This algorithm does not produce smooth results due to its integer arithmetic as it fails to diminish the zigzags completely.  
(b) The Bresenhem’s circle drawing algorithm is not accurate in the case of drawing of complex graphical images.  

### Algorithm  

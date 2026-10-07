# csc 134
# M4T2 - Turtles 
# plymale h
# 10/7/2026


#set up the turtle

import turtle
win = turtle.Screen()
win.bgcolor("lightgrey")

t = turtle.Turtle()
t.color("green")
t.pencolor("blue")
t.shape("turtle")
t.pensize(3)



#Draw the picture
sides = 4
length = 100
angle = 360 / sides    #angles add to 360
t.begin_fill()
for side in range(sides):
    #t.circle(50, steps=6)
    t.forward(length)
    t.right(angle)
t.end_fill()

#ears
t.circle(25, steps=6)
t.forward(100)
t.circle(25, steps =6)

#eyes
t.teleport(25, -45)
t.circle(8)
t.teleport(75, -45)
t.circle(8)

#mouth
t.teleport(40, -70)
t.circle(30, 60)




# draw star
t.teleport(-250, 200)
t.setheading(0)
for i in (1,2,3,4,5):
    # turn the other direction, so the triangle's on the outside
    for j in (1,2,3):
        t.forward(100)
        t.right(120)
    t.forward(100)
    t.left(72)
    
t.teleport(250, 200)
for i in (1,2,3,4,5):
    # turn the other direction, so the triangle's on the outside
    t.right(1)
    for j in (1,2,3):
        t.forward(100)
        t.right(120)
    t.forward(100)
    t.left(72)
    
#last line - keep windown open
win.mainloop()
import turtle

sc = turtle.Screen()
# creating screen

mark = turtle.Turtle()


# creating obj

# Draw sq
def draw():
    for i in range(4):
        mark.forward(30)
        mark.left(90)
    mark.forward(30)


if __name__ == "__main__":
    sc.setup(600, 600)

    # speed
    mark.speed(100)

    # board
    for i in range(8):
        mark.up()
        mark.setpos(0, 30 * i)

        # ready draw
        mark.down()

        # black & white color
        for j in range(8):
            if (i + j) % 2 == 0:
                col = 'blue'
            else:
                col = 'white'

            mark.fillcolor(col)
        # fill color
            mark.begin_fill()

            draw()
        # stop filling
            mark.end_fill()

        mark.hideturtle()

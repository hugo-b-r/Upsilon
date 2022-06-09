#include "script_template.h"

namespace Code {

constexpr ScriptTemplate emptyScriptTemplate(".py", "\x01" R"(from math import *
)");

constexpr ScriptTemplate squaresScriptTemplate("squares.py", "\x01" R"(from math import *
from turtle import *
def squares(angle=0.5):
  reset()
  L=330
  speed(10)
  penup()
  goto(-L/2,-L/2)
  pendown()
  for i in range(660):
    forward(L)
    left(90+angle)
    L=L-L*sin(angle*pi/180)
  hideturtle())");

constexpr ScriptTemplate mandelbrotScriptTemplate("mandelbrot.py", "\x01" R"(# This script draws a Mandelbrot fractal set
# N_iteration: degree of precision
import kandinsky
def mandelbrot(N_iteration):
  for x in range(320):
    for y in range(222):
# Compute the mandelbrot sequence for the point c = (c_r, c_i) with start value z = (z_r, z_i)
      z = complex(0,0)
# Rescale to fit the drawing screen 320x222
      c = complex(3.5*x/319-2.5, -2.5*y/221+1.25)
      i = 0
      while (i < N_iteration) and abs(z) < 2:
        i = i + 1
        z = z*z+c
# Choose the color of the dot from the Mandelbrot sequence
      rgb = int(255*i/N_iteration)
      col = kandinsky.color(int(rgb*0.82),int(rgb*0.13),int(rgb*0.18))
# Draw a pixel colored in 'col' at position (x,y)
      kandinsky.set_pixel(x,y,col))");

constexpr ScriptTemplate polynomialScriptTemplate("polynomial.py", "\x01" R"(from math import *
# roots(a,b,c) computes the solutions of the equation a*x**2+b*x+c=0
def roots(a,b,c):
  delta = b*b-4*a*c
  if delta == 0:
    return -b/(2*a)
  elif delta > 0:
    x_1 = (-b-sqrt(delta))/(2*a)
    x_2 = (-b+sqrt(delta))/(2*a)
    return x_1, x_2
  else:
    return None)");

constexpr ScriptTemplate parabolaScriptTemplate("parabola.py", "\x01" R"(from matplotlib.pyplot import *
from math import *

g=9.81

def x(t,v_0,alpha):
  return v_0*cos(alpha)*t
def y(t,v_0,alpha,h_0):
  return -0.5*g*t**2+v_0*sin(alpha)*t+h_0

def vx(v_0,alpha):
  return v_0*cos(alpha)
def vy(t,v_0,alpha):
  return -g*t+v_0*sin(alpha)

def t_max(v_0,alpha,h_0):
  return (v_0*sin(alpha)+sqrt((v_0**2)*(sin(alpha)**2)+2*g*h_0))/g

def simulation(v_0=15,alpha=pi/4,h_0=2):
  tMax=t_max(v_0,alpha,h_0)
  accuracy=1/10**(floor(log10(tMax))-1)
  T_MAX=floor(tMax*accuracy)+1
  X=[x(t/accuracy,v_0,alpha) for t in range(T_MAX)]
  Y=[y(t/accuracy,v_0,alpha,h_0) for t in range(T_MAX)]
  VX=[vx(v_0,alpha) for t in range(T_MAX)]
  VY=[vy(t/accuracy,v_0,alpha) for t in range(T_MAX)]
  for i in range(T_MAX):
    arrow(X[i],Y[i],VX[i]/accuracy,VY[i]/accuracy)
  grid()
  show())");

constexpr ScriptTemplate snakeScriptTemplate("snake.py", "\x01" R"(from kandinsky import *
from time import sleep
from ion import *
from random import randint

config = {}
# try: from snake_config import config
# except: pass

UP, DOWN, LEFT, RIGHT = 0, 1, 2, 3

def posx(x):
    return 10 * x - 5

def posy(y):
    return 10 * y - 4

class Snake:
  def __init__(self, config, high_score=0):
    self.imported_config = config
    self.high_score = high_score
    self.init_snk()
    self.show_score()
    self.start()

  def set_config(self):
    self.x, self.y = 16, 11
    self.init_len = 3
    self.body = [(self.x, self.y), (self.x, self.y), (self.x, self.y)]
    self.sleep = 0.01
    self.decrement = 0.0003
    self.inc = 1
    self.direction = UP
    self.tdirection = UP

    self.brd_co = (255, 0, 0)
    self.bg_co = (255, 255, 255)
    self.snk_co = (100, 255, 100)
    self.fd_co = (255, 100, 100)

    for key, value in self.imported_config.items():
      setattr(self, key, value)

  def init_snk(self):
    self.set_config()
    self.len = self.init_len
    self.eat = []

    fill_rect(0, 0, 320, 222, self.bg_co)
    fill_rect(0, 0, 320, 6, self.brd_co)
    fill_rect(0 ,0, 5, 222, self.brd_co)
    fill_rect(320 - 5, 0, 5, 222, self.brd_co)
    fill_rect(0, 222 - 6, 320 ,6, self.brd_co)

    for _ in range(3):
      self.spawn_food()    
    
    self.show_score()

  def spawn_food(self):
    while True:      
      x = randint(1, 31)
      y = randint(1, 21)
      if (x, y) not in self.body or (x, y) not in self.eat:
        break
    fill_rect(posx(x), posy(y), 10, 10, self.fd_co)

    self.eat.append((x, y))

  def show_score(self, sx=205, sy=6):
    draw_string("Score : {:0>2}".format(self.len-self.init_len), sx, sy)  

  def start(self):
    def sub_iter(i1, i2):
      return tuple(v1 - v2 for v1, v2 in zip(i1, i2))

    while True:
      if self.len < len(self.body):
        self.body.pop(0)
      x, y = self.body[0]
      x, y = posx(x), posy(y)
      ddir = sub_iter(self.body[0], self.body[1])

      l, h = 10, 10
      if ddir[0] < 0: # RIGHT
        l = self.inc
      if ddir[0] > 0: # LEFT
        l = self.inc
        x += 10 - self.inc
      if ddir[1] < 0: # DOWN
        h = self.inc
      if ddir[1] > 0: # UP
        h = 10
        y += 10 - self.inc

      fill_rect(x, y, l, h, self.bg_co)

      x, y = posx(self.x), posy(self.y)
      ddir = sub_iter(self.body[0], self.body[1])

      l, h = 10, 10
      if self.direction == RIGHT:
        l = self.inc
      if self.direction == LEFT:
        l = self.inc
        x += 10 - self.inc
      if self.direction == DOWN:
        h = self.inc
      if self.direction == UP:
        h = self.inc
        y += 10 - self.inc

      fill_rect(x, y, l, h, self.snk_co)

      sleep(self.sleep)

      if keydown(KEY_EXE):
        while keydown(KEY_EXE): pass
        while not keydown(KEY_EXE): pass
        while keydown(KEY_EXE): pass

      if keydown(KEY_UP) and self.direction != DOWN:
        self.tdirection = UP
      if keydown(KEY_DOWN) and self.direction != UP:
        self.tdirection = DOWN
      if keydown(KEY_RIGHT) and self.direction != LEFT:
        self.tdirection = RIGHT
      if keydown(KEY_LEFT) and self.direction != RIGHT:
        self.tdirection = LEFT

      if self.inc == 10:
        self.inc = 0
        self.direction = self.tdirection
        if self.direction == UP:
          self.y -= 1
        if self.direction == DOWN:
          self.y += 1
        if self.direction == RIGHT:
          self.x += 1
        if self.direction == LEFT:
          self.x -= 1

        self.body.append((self.x, self.y))
        if (self.x, self.y) in self.eat:
          self.len += 1
          del self.eat[self.eat.index((self.x,self.y))]

          self.spawn_food()
          self.show_score()
          if self.sleep > self.decrement:
            self.sleep -= self.decrement


        elif (self.x, self.y) in self.body[1:-1] or not 0 < self.x < 32 or not 0 < self.y < 22:
          fill_rect(5, 6, 310, 210, self.bg_co)
          draw_string("Game Over", 120, 100)
          draw_string("Press EXE to play again", 55, 120)
          draw_string("Press HOME to return home", 55, 137)

          self.high_score = max(self.len - self.init_len, self.high_score)
          draw_string("Highscore : " + str(self.high_score), 80, 190)
  
          self.show_score(120, 170)
          while True:
            if keydown(KEY_EXE):
              break
            sleep(0.01)

          self.init_snk()
          
      self.inc += 1


Snake(config, high_score=74))");

const ScriptTemplate * ScriptTemplate::Empty() {
  return &emptyScriptTemplate;
}

const ScriptTemplate * ScriptTemplate::Squares() {
  return &squaresScriptTemplate;
}

const ScriptTemplate * ScriptTemplate::Mandelbrot() {
  return &mandelbrotScriptTemplate;
}

const ScriptTemplate * ScriptTemplate::Polynomial() {
  return &polynomialScriptTemplate;
}

const ScriptTemplate * ScriptTemplate::Parabola() {
  return &parabolaScriptTemplate;
}

const ScriptTemplate * ScriptTemplate::Snake() {
  return &snakeScriptTemplate;
}

}

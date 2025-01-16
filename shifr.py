#подгружаем нужные модули
import turtle #чтобы можно было рисовать
import random #чтобы можно было использовать датчик случайных чисел
import os #чтобы удалять временные файлы ps
import subprocess #чтобы вызывать внешний конвертер ps2pdf
import tkinter as tk #чтобы создать основу для диалоговых окон
from tkinter import filedialog as fd #чтобы использовать SaveDialog
from tkinter import simpledialog as sd #чтобы запросить у пользователя строку с фразой

matr=[[0] * 10 for i in range(10)] #создаем матрицу из нулей (1 в ней будут на месте кружков)

def my_clear():     #очищаем экран
    tur.color('white')
    tur.up()
    tur.goto(-320,320)
    tur.down()
    tur.begin_fill()
    tur.goto(320,320)
    tur.goto(320,-320)
    tur.goto(-320,-320)
    tur.goto(-320,320)
    tur.end_fill()
    tur.up()

def pole():      #строим клетчатое поле
    my_clear()
    tur.color('lightskyblue')
    tur.pensize(2)
    for i in range(0, 11):
        tur.up()
        tur.goto(-300+i*60,300)
        tur.down()
        tur.goto(-300+i*60,-300)
        tur.up()
        tur.goto(-300,300-i*60)
        tur.down()
        tur.goto(300,300-i*60)
    tur.up()
        
def red_circles(x1,y1):    #рисуем красные окружности
    global matr
    global flag1
    matr=[[0] * 10 for i in range(10)] 
    pole()
    tur.color('red')
    tur.pensize(2)
    tur.up()

    #первый квадрат
    x=random.randint(5,6)
    y=random.randint(5,6)
    matr[y-1][x-1]=1
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    #второй квадрат
    lst=[4,7]
    x=random.choice(lst)
    y=random.choice(lst)
    matr[y-1][x-1]=1
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=4
        y=5
    if k==2:
        x=6
        y=4
    if k==3:
        x=7
        y=6
    if k==4:
        x=5
        y=7
    matr[y-1][x-1]=1
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=4
        y=6
    if k==2:
        x=5
        y=4
    if k==3:
        x=7
        y=5
    if k==4:
        x=6
        y=7
    matr[y-1][x-1]=1
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    #третий квадрат
    lst=[3,8]
    x=random.choice(lst)
    y=random.choice(lst)
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=3
        y=4
    if k==2:
        x=4
        y=8
    if k==3:
        x=7
        y=3
    if k==4:
        x=8
        y=7
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=3
        y=5
    if k==2:
        x=6
        y=3
    if k==3:
        x=8
        y=6
    if k==4:
        x=5
        y=8
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=3
        y=6
    if k==2:
        x=5
        y=3
    if k==3:
        x=8
        y=5
    if k==4:
        x=6
        y=8
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()
    
    k=random.randint(1,4)
    if k==1:
        x=3
        y=7
    if k==2:
        x=4
        y=3
    if k==3:
        x=8
        y=4
    if k==4:
        x=7
        y=8
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    #четвертый квадрат
    lst=[2,9]
    x=random.choice(lst)
    y=random.choice(lst)
    matr[y-1][x-1]=1
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=2
        y=3
    if k==2:
        x=8
        y=2
    if k==3:
        x=9
        y=8
    if k==4:
        x=3
        y=9
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=2
        y=4
    if k==2:
        x=7
        y=2
    if k==3:
        x=9
        y=7
    if k==4:
        x=4
        y=9
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=2
        y=5
    if k==2:
        x=6
        y=2
    if k==3:
        x=9
        y=6
    if k==4:
        x=5
        y=9
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=2
        y=6
    if k==2:
        x=5
        y=2
    if k==3:
        x=9
        y=5
    if k==4:
        x=6
        y=9
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=2
        y=7
    if k==2:
        x=4
        y=2
    if k==3:
        x=9
        y=4
    if k==4:
        x=7
        y=9
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=2
        y=8
    if k==2:
        x=3
        y=2
    if k==3:
        x=9
        y=3
    if k==4:
        x=8
        y=9
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    #пятый квадрат
    lst=[1,10]
    x=random.choice(lst)
    y=random.choice(lst)
    matr[y-1][x-1]=1
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=1
        y=2
    if k==2:
        x=9
        y=1
    if k==3:
        x=10
        y=9
    if k==4:
        x=2
        y=10
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=1
        y=3
    if k==2:
        x=8
        y=1
    if k==3:
        x=10
        y=8
    if k==4:
        x=3
        y=10
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=1
        y=4
    if k==2:
        x=7
        y=1
    if k==3:
        x=10
        y=7
    if k==4:
        x=4
        y=10
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=1
        y=5
    if k==2:
        x=6
        y=1
    if k==3:
        x=10
        y=6
    if k==4:
        x=5
        y=10
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=1
        y=6
    if k==2:
        x=5
        y=1
    if k==3:
        x=10
        y=5
    if k==4:
        x=6
        y=10
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=1
        y=7
    if k==2:
        x=4
        y=1
    if k==3:
        x=10
        y=4
    if k==4:
        x=7
        y=10
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=1
        y=8
    if k==2:
        x=3
        y=1
    if k==3:
        x=10
        y=3
    if k==4:
        x=8
        y=10
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()

    k=random.randint(1,4)
    if k==1:
        x=1
        y=9
    if k==2:
        x=2
        y=1
    if k==3:
        x=10
        y=2
    if k==4:
        x=9
        y=10
    matr[y-1][x-1]=1    
    tur.goto(-329+x*60,307-y*60)
    tur.down()
    tur.circle(22)
    tur.up()
    
    tur.goto(-1000,-1000) #убираем черепаху с видимой части экрана
    screen.update() #выводим нарисованное в оперативной памяти на экран
    flag1=True #новое изображение можно сохранять

def print_phrase():  #печатаем буквы на поле для шифра
    matr1=[[0] * 10 for i in range(10)]
    global matr
    global s1
    tur.color('black')
    lst=random.sample(range(0,99),100-len(s1)) #получаем номера позиций в строке, на которые нужно добавить *, если строка короче 100 символов
    s2=''
    sch=-1
    for i in range(100):
        if i in lst:
            s2=s2+'*' #chr(2766)
        else:
            sch=sch+1
            s2=s2+s1[sch]
    s1=s2
    sch=-1
    for k in range(4):
        if k != 0:      
            for i in range(10): #поворот матрицы
                for j in range(10):
                    matr1[j][9-i]=matr[i][j]
            for i in range(10):
                for j in range(10):
                    matr[i][j]=matr1[i][j]
        for i in range(10):
            for j in range(10):
                if matr[i][j]==1:
                    sch=sch+1
                    tur.goto(-329+(j+1)*60,307-(i+1)*60)
                    tur.write(s1[sch], move=False, align="center", font=("Arial", 40, "normal"))

def soob(f3,f4): #выводим сообщение об успешном сохранении файлов
    my_clear()
    tur.color('black')
    tur.goto(-280,200)
    s='' #получаем короткое имя файла с шифром в нашей папке
    i=len(f4)-1
    flag=True
    while flag:
        if f4[i] !='/':
            s=f4[i]+s
            i=i-1
        else:
            flag=False
    tur.write(('Создан файл с шифром - '+s), move=False, align="left", font=("Arial", 20, "normal"))
    tur.goto(-280,150)
    s='' #получаем короткое имя файла с дешифратором в нашей папке
    i=len(f3)-1
    flag=True
    while flag:
        if f3[i] !='/':
            s=f3[i]+s
            i=i-1
        else:
            flag=False
    tur.write(('Создан файл с дешифратором - '+s), move=False, align="left", font=("Arial", 20, "normal"))
    tur.up()
    
def my_save(x1,y1):   #сохраняем картинки в файлы .eps и конвертируем их в .pdf
    global flag1
    if flag1:
        file_name = fd.asksaveasfilename(
            filetypes=(("PS files", "*.eps"),
                       ("All files", "*.*")))
        screen.getcanvas().postscript(file=file_name)
        pole()
        print_phrase()
        f1=''
        for i in range(len(file_name)):
            if file_name[i] != '.':
                f1=f1+file_name[i]
            else:
                f2=f1+'.eps'
                f3=f1+'.pdf'
                f4=f1+'_text.pdf'
                f1=f1+'_text.'
        screen.getcanvas().postscript(file=f1)
        subprocess.call(['/opt/homebrew/Cellar/ghostscript/10.04.0/bin/ps2pdf',f2,f3])
        subprocess.call(['/opt/homebrew/Cellar/ghostscript/10.04.0/bin/ps2pdf',f1,f4])
        os.remove(f1)
        os.remove(f2)
        soob(f3,f4)
        flag1=False #нельзя сохранять до создания нового изображения
    
#начинаем основную программу
app_w=tk.Tk()
app_w.attributes('-alpha', 0.0)
flag=True
s2=''
while flag:
    try: #если строки нет, или она коротка, или длинна
        s1=sd.askstring("Ввод данных", "Введите, пожалуйста, текст для шифра"+'\n'+"(не менее 10 и не более 100 символов без учёта пробелов)").lower()
        for i2 in range(len(s1)):
            if s1[i2] !=' ':
                s2=s2+s1[i2]
        s1=s2
        if (len(s1)>=10) and (len(s1)<=100): 
            flag=False
    except:
        flag=True

#задаем размер экрана и вид черепахи 
screen=turtle.Screen()
screen.setup(620,620)
tur = turtle.Turtle()
tur.shape('classic')

screen.tracer(0) #будем рисовать в оперативной памяти
red_circles(0,0)
screen.listen()
flag1=True
screen.onclick(red_circles,2)
screen.onclick(my_save,1)
screen.mainloop()

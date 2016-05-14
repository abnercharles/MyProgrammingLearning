from Tkinter import *
import tkFont
class myclass:
    def __init__(self):
        pass
    def init(self):
        self.root = Tk()
        self.canvas = Canvas(self.root, width = 800, height = 800, bg = "white")
        self.canvas.pack()
        self.titleFont = tkFont.Font(size=16)
        self.buttom = Button(self.root,text="Quit", command=self.root.quit)
        self.buttom.pack()
        
        self.root.mainloop()
        self.canvas.create_line((10,750),(780,750), width = 2)

a = myclass()
a.init()

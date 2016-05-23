#import pyglet

#window = pyglet.window.Window()
##image = pyglet.resource.image("C:\\Users\\abnsun\\OneDrive\\Pictures\\Kokia\\kokia.jpg")
#label = pyglet.text.Label("Hello,world",
#                          font_name = "Times New Roman",
#                          font_size = 36,
#                          color = "white",
#                          x = window.width//2, y = window.height//2,
#                          anchor_x = 'center', anchor_y = 'center')
#document = pyglet.text.decode_text('Hello, world.')


#def on_draw():
#    window.clear()
#    label.draw()
##    image.blit(0,0)

#pyglet.app.run()


import cocos
class HelloWorld(cocos.layer.Layer):
    def __init__(self):
        super(HelloWorld, self).__init__()

        label = cocos.text.Label('Hello, world',
                                  font_name='Times New Roman',
                                  font_size=32,
                                  anchor_x='center', anchor_y='center')
        label.position = 320,240
        self.add(label)

cocos.director.director.init()
shit = HelloWorld ()
main_scene = cocos.scene.Scene(shit)
cocos.director.director.run(main_scene)
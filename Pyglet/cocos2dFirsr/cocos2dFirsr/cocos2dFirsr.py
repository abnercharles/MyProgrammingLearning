import pyglet

window = pyglet.window.Window()

pyglet.app.run()

event_loop = pyglet.app.EventLoop()

def on_window_close(window):
    event_loop.exit()
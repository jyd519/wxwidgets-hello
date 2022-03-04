# First things, first. Import the wxPython package.
import wx

# Next, create an application object.
app = wx.App()
from myframe1 import MyFrame1

frm = MyFrame1(None)
frm.title = "hello"
# # Then a frame.
# frm = wx.Frame(None, title="Hello World")

# Show it.
frm.Show()

# Start the event loop.
app.MainLoop()

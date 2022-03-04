# -*- coding: utf-8 -*-

###########################################################################
## Python code generated with wxFormBuilder (version 3.10.1-0-g8feb16b)
## http://www.wxformbuilder.org/
##
## PLEASE DO *NOT* EDIT THIS FILE!
###########################################################################

import wx
import wx.xrc

###########################################################################
## Class MyFrame1
###########################################################################

class MyFrame1 ( wx.Frame ):

	def __init__( self, parent ):
		wx.Frame.__init__ ( self, parent, id = wx.ID_ANY, title = wx.EmptyString, pos = wx.DefaultPosition, size = wx.Size( 500,463 ), style = wx.DEFAULT_FRAME_STYLE|wx.TAB_TRAVERSAL )

		self.SetSizeHints( wx.DefaultSize, wx.DefaultSize )

		bSizer4 = wx.BoxSizer( wx.VERTICAL )

		self.m_button3 = wx.Button( self, wx.ID_ANY, u"MyButton", wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer4.Add( self.m_button3, 0, wx.ALL, 5 )

		self.m_button31 = wx.Button( self, wx.ID_ANY, u"MyButton31")

		bSizer4.Add( self.m_button31, 0, wx.ALL|wx.SHAPED, 5 )

		self.m_button32 = wx.Button( self, wx.ID_ANY, u"MyButton ", wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer4.Add( self.m_button32, 2, wx.ALL|wx.EXPAND, 5 )

		self.m_button321 = wx.Button( self, wx.ID_ANY, u"MyButton ", wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer4.Add( self.m_button321, 0, wx.ALL, 5 )

		self.m_button322 = wx.Button( self, wx.ID_ANY, u"MyButton wxPanel wxPanel wxPanel", wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer4.Add( self.m_button322, 0, wx.ALIGN_RIGHT|wx.ALL, 5 )

		self.m_button4 = wx.Button( self, wx.ID_ANY, u"MyButton", wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer4.Add( self.m_button4, 0, wx.ALL, 5 )


		self.SetSizer( bSizer4 )
		self.Layout()

		self.Centre( wx.BOTH )

	def __del__( self ):
		pass



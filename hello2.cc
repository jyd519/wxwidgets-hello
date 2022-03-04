// wxWidgets "Hello World" Program
// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
class MyApp : public wxApp
{
public:
    virtual bool OnInit();
};
class MyFrame : public wxFrame
{
public:
    MyFrame();
};
enum
{
    ID_Hello = 1
};
wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame();
    frame->Show(true);
    return true;
}
MyFrame::MyFrame()
    : wxFrame(NULL, wxID_ANY, "Hello World")
{
  wxBoxSizer *sizer = new wxBoxSizer(wxVERTICAL);
  // Second button is three times as tall as first button
  sizer->Add(new wxButton(this, -1, "A Really Really Big Button"), 1, 0, 0);
  sizer->Add(new wxButton(this, -1, "Tiny Button"), 3, 0, 0);

  sizer->Add(new wxButton(this, -1, "Tiny Button"), 0, wxEXPAND | wxALL, 5);
  sizer->SetSizeHints(this);
  SetSizer(sizer);
}

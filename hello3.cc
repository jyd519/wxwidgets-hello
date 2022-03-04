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
private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
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
    wxBoxSizer *topsizer = new wxBoxSizer( wxVERTICAL );
    // create text ctrl with minimal size 100x60 that is horizontally and
    // vertically stretchable with a border width of 10
    topsizer->Add(
        new wxTextCtrl( this, -1, "My text.", wxDefaultPosition, wxSize(100,60), wxTE_MULTILINE),
        wxSizerFlags(1).Align(wxVERTICAL).Expand().Border(wxALL, 10));
    wxBoxSizer *button_sizer = new wxBoxSizer( wxHORIZONTAL );
    //create two buttons that are horizontally unstretchable,
    // with an all-around border with a width of 10 and implicit top alignment
    button_sizer->Add(
        new wxButton( this, wxID_OK, "OK" ),
        wxSizerFlags(0).Align(wxVERTICAL).Border(wxALL, 10));
    button_sizer->Add(
        new wxButton( this, wxID_CANCEL, "Cancel" ),
        wxSizerFlags(0).Align(wxVERTICAL).Border(wxALL, 10));
    //create a sizer with no border and centered horizontally
    topsizer->Add(
        button_sizer,
        wxSizerFlags(0).Center() );
    SetSizerAndFit(topsizer); // use the sizer for layout and set size and hints}
}

void MyFrame::OnExit(wxCommandEvent& event)
{
    Close(true);
}
void MyFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox("This is a wxWidgets Hello World example",
                 "About Hello World", wxOK | wxICON_INFORMATION);
}
void MyFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Hello world from wxWidgets!");
}

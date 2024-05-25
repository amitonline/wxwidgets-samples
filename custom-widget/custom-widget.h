#include <wx/wx.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class CustomColor:public wxPanel {
public:
    CustomColor(wxWindow* parent, wxWindowID id, int r, int g, int b);
    void setRed(int r);
    void setGreen(int g);
    void setBlue(int b);
    int getRed();
    int getGreen();
    int getBlue();

private:
    void onScroll(wxCommandEvent& evt);
    void showColor();
    wxSlider *m_sliderRed, *m_sliderGreen, *m_sliderBlue;
    int m_red, m_green, m_blue;

};

#define SLIDER_ID_RED 2001
#define SLIDER_ID_GREEN 2002
#define SLIDER_ID_BLUE 2003


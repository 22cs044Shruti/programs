#include<msoftcon.h>
class Circle{
protected:
    int xCo,yCo;
    int radius;
    color fillcolor;
    fstyle fillstyle;

public:
    void set(int x,int y, int r, color fc,fstyle fs){
    xCo=x;
    yCo=y;
    radius=r;
    fillcolor=fc;
    fillstyle=fs;
    }

    void draw(){
    set_color(fillcolor);
    set_fill_style(fillstyle);
    draw_circle(xCo,yCo,radius);
    }
};

int main(){
    init_graphics();
    circle c1;
    circle c2;
    circle c3;

    c1.set(15, 7, 5 cBLUE, X_FILL);
return 0;
}

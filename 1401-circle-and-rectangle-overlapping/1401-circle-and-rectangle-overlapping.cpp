class Solution {
public:

    bool checkOverlap(int r, int xC, int yC, int x1, int y1, int x2, int y2) {
       int x,y;
       if(xC>x2){
        x=x2;
       }else if(xC<x1){
        x=x1;
       }
       else{
        x=xC;
       }
       if(yC>y2){
        y=y2;
       }else if(yC<y1){
        y=y1;
       }else{
        y=yC;
       }
       x=abs(x-xC);
       x*=x;
       y=abs(y-yC);
       y*=y;
       int d=x+y;
       return (d)<=(r*r);
    }
};
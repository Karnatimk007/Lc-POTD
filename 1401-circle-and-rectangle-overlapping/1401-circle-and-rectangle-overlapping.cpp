class Solution {
public:

    bool checkOverlap(int r, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        if((yCenter==y1&&(xCenter-r)==x1)||(xCenter==x2&&yCenter+r==y2)) return true;
         int closestX = max(x1, min(xCenter, x2));
        int closestY = max(y1, min(yCenter, y2));

        int dx = xCenter - closestX;
        int dy = yCenter - closestY;

        return dx * dx + dy * dy <= r * r;
    }
};
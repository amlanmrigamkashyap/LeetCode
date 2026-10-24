class Solution {
public:
    bool isRectangleOverlap(vector<int>& rect1, vector<int>& rect2) {
        int x1 = rect1[0];
        int y1 = rect1[1];
        int x2 = rect1[2];
        int y2 = rect1[3];
        int x3 = rect2[0];
        int y3 = rect2[1];
        int x4 = rect2[2];
        int y4 = rect2[3];

        // bool c1 = (x3< x2 && x2 <x4) && (y3 < y2 && y2 < y4);
        // bool c2 = (x3< x1 && x1 <x4) && (y3 < y2 && y2 < y4);
        // bool c3 = (x3< x2 && x2 <x4) && (y3 < y1 && y1 < y4);
        // bool c4 = (x3< x1 && x1 <x4) && (y3 < y1 && y1 < y4);

        // bool c6 = (x1< x4 && x4 <x2) && (y1 < y4 && y4 < y2);
        // bool c7 = (x1< x3 && x3 <x2) && (y1 < y4 && y4 < y2);
        // bool c8 = (x1< x4 && x4 <x2) && (y1 < y3 && y3 < y2);
        // bool c5 = (x1< x3 && x3 <x2) && (y1 < y3 && y3 < y2);

        // if(c1 || c2 || c3|| c4 || c5 || c6 || c7 || c8) return true;
        // else return false;

        bool c1 = x2 <= x3;
        bool c2 = y2 <= y3;
        bool c3 = x4 <= x1;
        bool c4 = y4 <= y1;

        if(c1 || c2 || c3 || c4) return false;
        else return true;

    }
};
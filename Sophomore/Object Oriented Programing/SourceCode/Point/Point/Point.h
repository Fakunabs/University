#ifndef Point_h
#define Point_h
class Point {
    int x, y;
    public:
        //Point() { x = y = 0;}
        Point(const Point &p) { x = p.x; y = 0;}
        Point(int xx=0, int yy=0);
        void SetPt(int, int);
        void Display();
        ~Point();
};
#endif
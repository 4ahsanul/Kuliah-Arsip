#ifndef POINT_H
#define POINT_H


class point
{
    public:
        point(int a, int b);
        point();
        ~point();
        int getX() const;
    private:
        int x;
        int y;
};

#endif

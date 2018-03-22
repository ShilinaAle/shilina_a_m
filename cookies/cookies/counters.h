#ifndef COUNTERS_H
#define COUNTERS_H


class Counters
{
public:
    //Counters() = default;
    void defcount(int step);
    void stepminus();
    void cookieplus();
    int getcookie();
    int getsteps();
private:
    int cookie { -1 };
    int steps { -1 };
};

#endif // COUNTERS_H

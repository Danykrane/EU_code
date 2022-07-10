class figure
{
    int a;
    int b;

public:
    void set(int a_, int b_)
    {
        a = a_;
        b = b_;
        if (a < 0)
            a = 0;
        if (b < 0)
            b = 0;
    }

    int get_a()
    {
        return a;
    }
    int get_b()
    {
        return b;
    }
};
class Test
{
private:
    static int mx;
public:
    Test(int x);
    static int GetX()
    {
        return mx;
    }
    ~Test();
};

 int Test::mx=0;

Test::Test(int x)
{
}

Test::~Test()
{
}

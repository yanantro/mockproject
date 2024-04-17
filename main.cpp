#include <iostream>

class Figure 
{
    private:
        std::string name;
    public:
    void setName(std::string n)
    {
        name = n;
    }
    std::string getName()
    {
        return name;
    }
    virtual void info()
    {
        std::cout << "figure" << '\n';
    }
};

int main()
{
 std::cout << "Hello" << std::endl;
}

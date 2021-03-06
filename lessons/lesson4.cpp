#include<string>
#include<iostream>


class Cat
{
    public:
    // this variable is shared between classes
    Cat(auto name)
    {
        this->name = "";
        this->set_name(name);
        // increment shared variable
        num_cats = num_cats + 1;
    }
    void set_name(auto name)
    {
        this->name = name;
    }

    static float num_cats;
    std::string name;
};
float Cat::num_cats = 0.0;
int main()
{
    Cat c1("Pursippany");
    std::cout << c1.name<< " " <<  "says the number of cats is:"<< " " <<  c1.num_cats << std::endl;
    Cat c2("MeowMeow");
    std::cout << c2.name<< " " <<  "says the number of cats is:"<< " " <<  c2.num_cats << std::endl;
}
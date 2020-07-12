#include <iostream>

class text
{
private:
    /* data */
public:

int b;
    text(/* args */);
    ~text();
};

text::text(/* args */)
{
    std::cout << 5;
}

text::~text()
{
    std::cout << 6;
}










int main(){





        /* code */   
        std::cout << "Hello World!\n";

        std::string g;
        //std::cin >> g;
        //std::cout << g;


    text* ptr = new text();
    //delete ptr;    
    


    return 0;
}
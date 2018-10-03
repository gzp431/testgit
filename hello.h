#ifndef HELLO_H_
#define HELLO_H_
class Hello
{
private:
    char message[6];
public:
    Hello();
    ~Hello();
    void print();
};
#endif
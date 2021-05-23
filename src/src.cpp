#include <iostream>
#include <thread>

class State {
public:
    virtual void pattern() {

    }
};

class Credit :public State
{
public:

    void pattern() {
        std::cout << "credit\n";

        std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
    }
};

class Title :public State {
public:
    void pattern() {
        std::cout << "title\n";

        std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
    }
};

class Opening :public State
{
public:

    void pattern() {
        std::cout << "opening\n";

        std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
    }
};

class Demo :public State {
public:
    void pattern() {

        std::cout << "demo\n";

        std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
    }
};
    
class Context {
public:

    void pattern() {
        Credit credit;
        Title title;
        Opening opening;
        Demo demo;

        credit.pattern();
        title.pattern();
        opening.pattern();
        demo.pattern();
    }
};

int main() {

    Context context;

    do {
        context.pattern();

    } while (true);
    
}


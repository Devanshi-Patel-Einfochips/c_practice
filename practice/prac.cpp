#include <iostream>
#include<functional>
using namespace std;

class Worker
{
public:
    void Work(const std::string &artist, uint32_t n){
        cout << "artist: " << artist << endl;
        cout << "val: " << n << endl; 
            }
};

int main()
{
    Worker w;
    // auto f = bind(&Worker::Work, &w,"Madonna", 10);
//     auto f = std::bind( &Worker::Work, &w, std::placeholders::_1,
// std::placeholders::_2 );
// f( "MJ", 20 );
    // f(); // equivalent to pWorker->Work( “Madonna”, 10 );
    auto s = "devanshi";
    auto n = 90;
    auto f = std::bind( &Worker::Work, w, s, n );
Callback<std::string, uint32_t> cb( f );
}
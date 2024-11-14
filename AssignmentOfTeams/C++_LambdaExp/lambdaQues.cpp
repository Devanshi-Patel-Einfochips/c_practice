#include <string>
#include<vector>
#include<iostream>
#include <thread>
#include <functional> // Include this for std::function
using namespace std;
	using namespace std::chrono_literals;


class TaskScheduler
{
    public:

        void createTask(function<void()> task){
            this_thread::sleep_for(100ms);
            task();
        }
         void RunTask(function<void()> task){
            this_thread::sleep_for(300ms);
            task();
        }
         void completeTask(function<void()> task){
            this_thread::sleep_for(400ms);
            task();
        }
};


int main(){

    TaskScheduler ts;
    ts.createTask([](){
        cout <<"TASK CREATED" <<endl;
    });
    ts.RunTask([](){
        cout <<"RUN CREATED" <<endl;
    });
    ts.completeTask([](){
        cout <<"COMPLETE CREATED" <<endl;
    });

}


// class CheckF{
//     public:
//         virtual int dataCheck();
// };
// int CheckF::dataCheck(){
//     cout << "in data check" << endl;
//     return 0;
// }
// int main(){
//     CheckF s;
//     s.dataCheck();
//     return 0;
// }
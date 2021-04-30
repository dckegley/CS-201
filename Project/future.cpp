
/*
The future standard library provides facilities to obtain values that are returned and to catch exceptions that are thrown by asynchronous tasks (i.e. functions launched in separate threads). 
These values are communicated in a shared state, in which the asynchronous task may write its return value or store an exception, and which may be examined, waited for, 
and otherwise manipulated by other threads that hold instances of std::future or std::shared_future that reference that shared state.

promise: Stores a value for asynchronus retrieval 

Packaged_task: Packages a function to store its return value for asynchronous retrieval

future: Waits for a value that is set asyncronously.

shared_future: Waits for a value (possibly referencdd by other futures) that is set asynchronusly

async: runs a function asyncronously and returns a std:future that will hold the result

get: retuns the result

wait: waits for the result to become available
wait_for: waits for the result and returns if it is not available for a specified timeout duration
wait_until: waits and returns if it is not available until specified time point

future_error: reports an error related to futures or promises
future_errc: identifies the future error codes
future_category: identifies the future error category
*/

#include <iostream>
#include <future>
#include <thread>

int ex1main()
{
    // future from a packaged_task
    std::packaged_task<int()> task([] { return 7; }); // wrap the function
    std::future<int> f1 = task.get_future();  // get a future
    std::thread t(std::move(task)); // launch on a thread

    // future from an async()
    std::future<int> f2 = std::async(std::launch::async, [] { return 8; });

    // future from a promise
    std::promise<int> p;
    std::future<int> f3 = p.get_future();
    std::thread([&p] { p.set_value_at_thread_exit(9); }).detach();

    std::cout << "Waiting..." << std::flush;
    f1.wait();
    f2.wait();
    f3.wait();
    std::cout << "Done!\nResults are: "
        << f1.get() << ' ' << f2.get() << ' ' << f3.get() << '\n';
    t.join();
    return 0;
}


// a non-optimized way of checking for prime numbers:
bool is_prime(int x) 
{
    std::cout << "Calculating. Please, wait...\n";
    for (int i = 2; i < x; ++i) if (x % i == 0) return false;
    return true;
}

int main()
{
    // call is_prime(313222313) asynchronously:
    std::future<bool> fut = std::async(is_prime, 313222313);

    std::cout << "Checking whether 313222313 is prime.\n";
    // ...

    bool ret = fut.get();      // waits for is_prime to return

    if (ret) std::cout << "It is prime!\n";
    else std::cout << "It is not prime.\n";

    return 0;
}


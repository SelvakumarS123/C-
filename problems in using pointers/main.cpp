#include <iostream>

using namespace std;

int main()
{
//    1)uninitialized pointer
//    2)memory leak
//            i)delete []p;
//           ii)p=nullptr; [null=0(int), nullptr=0(address)]
//    3)dangling pointer
//        i)main function is having a pointer(p) which is pointing to a specific address in heap,
//       ii)then you declare a function(fun) which takes another pointer(q) as parameter, it is using the memory and at the end of the function you delete[]q,
//       iii)then you call the function(fun) with parameter(p) within the main function,
//         now 'p' is given to 'fun', and 'fun' has a pointer 'q' which is also pointing on the same memory
//         at the end of the function 'fun' you 'delete[]q' and that memory(shared by 'p' and 'q') is gone
//         then you come back to main function and try to access 'p', you cannot access the memory coz you('fun') deleted it biatch.
//
//         'p' is dangling.this will cause runtime error :(


         //this is why java removed pointers .it is a managed language .jvm will take care of these errors
    return 0;
}

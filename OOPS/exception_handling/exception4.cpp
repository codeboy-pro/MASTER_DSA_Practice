// #include <iostream>
// #include <exception> // for std::bad_alloc

// using namespace std;
// class exception{
//   protected:
//   string msg;
//   public:
//   exception(string msg){
//     this->msg=msg;

//   }
//   string what(){
//     return msg;
//   }
// };

// class runtime_error:public exception
// {
// public:
// runtime_error(const string &msg):exception(msg)
// {
    
// }
// };
// int main()
// {
//     try
//     {
//         int *p = new int[100000000000000000000]; // Still very large, but more illustrative
//         cout << "Memory allocation is successful\n";
//         delete  []p;
//     }
//     catch (const bad_alloc &e)
//     {
//         cout << "Memory allocation failed: " << e.what() << endl;
//     }

//     return 0;
// }

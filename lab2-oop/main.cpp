#include <iostream>

using namespace std;
class Stack
{
private:
    int tos;
    int size ;
    int *st;

public:
    Stack(int n=20)
    {
        tos =0;
        size =n;
        st =new int[size];
        count<<"This is constractor of stack object with size" <<n<<end1;
    }
    ~Stack()
    {
        delet []st;
        count<<"This destructor"<<end1;
    }
    void Stack::push(int n)
    {
        if (tos==size)
        {
            count<<"Stack is full"<<end1;
        }
        else
        {
            st[top =n;
            tos++;
        }

    }
  int Stack ::pop()
  {
      int retval;
      if(tos==0)
      {
          count<<"Stack is Empty"<<end1;
          retval =-1;
      }
      else
        { tos--;
      retvalst[top]
        }
  }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

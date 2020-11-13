namespace c_Algorithms_DS
{
    class Stack
    {
        public:
            Stack(int length);
            ~Stack();
            bool stackEmpty();
            bool push(int num);
            int pop();

        private:
            int length;
            int top = -1;
            int* stack;
    };
}
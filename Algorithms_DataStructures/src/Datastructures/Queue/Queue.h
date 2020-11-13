namespace c_Algorithms_DS
{
    class Queue
    {
        public:
            Queue(int length);
            ~Queue();
            bool enqueue(int num);
            int dequeue();
            bool isEmpty();
            bool isFull();

        private:
            int length;
            int* queue;
            int tail;
            int head;
    };
}
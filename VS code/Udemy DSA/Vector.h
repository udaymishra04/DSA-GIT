template<typename T>

class Vector{
    T *arr;
    int ms;
    int cs;

    public:
    Vector()
    {
        arr = new T[1];
        ms = 1;
        cs = 0;
    }
    Vector(const int a)
    {
        arr = new T[a];
        ms = a;
        cs = 0;
    }
    int capacity() const {
        return ms;
    }
    int size() const {
        return cs;
    }
    T at(const int i) const {
        return arr[i];
    }
    void push_back(const int i){
        if(cs == ms)
        {
            T *old = arr;
            ms = ms*2;
            arr = new T[ms];
            for(int i = 0;i<cs;i++)
                arr[i] = old[i];
            delete [] old;
        }
        arr[cs] = i;
        cs++;
    }
    void pop_back(){
        cs--;
    }
    T operator[] (const int i) const {
        return arr[i];
    }
};
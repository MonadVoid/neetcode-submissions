class DynamicArray {
private:
    int capacity;
    int count = 0;
    int *data;
    
    
public:

    DynamicArray(int capacity) {
        this->capacity =  capacity;
        data = new int[capacity];

    }

    int get(int i) {
        if(i < 0 || i > capacity)
        {
            return -1;
        }

        return data[i];

    }

    void set(int i, int n) {
        data[i] = n;

    }

    void pushback(int n) {
        if(count == capacity)
        {
            resize();
        }

        data[count++]  = n;

    }

    int popback() {
        return data[--count];

    }

    void resize() {
        int old_cpac = capacity;
        int old_count = count;
        capacity *= 2;
        int *n_data = new int [capacity];

        
        for(int i = 0; i < old_cpac; i++)
        {
            n_data[i] = data[i];
        }

        count = old_count;
        data = n_data;
        
    }

    int getSize() {
        return count;

    }

    int getCapacity() {
        return capacity;

    }
};

public class JavaVector<T> implements JavaContainer<T> {

    private Object[] data;
    private int size;
    private int capacity;

    public JavaVector() {
        data = new Object[2];
        size = 0;
        capacity = 2;
    }

    public JavaVector(int n) {
        data = new Object[n];
        size = 0;
        capacity = n;
    }

    public JavaVector(JavaVector<T> v) {
        data = new Object[v.capacity];
        size = v.size;
        capacity = v.capacity;
        for (int i = 0; i < size; i++) {
            data[i] = v.data[i];
        }
    }

    public void Add(T n) {
        if (size == capacity) {
            capacity *= 2;
            Object[] newData = new Object[capacity];
            for (int i = 0; i < size; i++) {
                newData[i] = data[i];
            }
            data = newData;
        }
        data[size] = n;
        size++;
    }

    public void Remove(T n) {
        if (size == 0) {
            throw new RuntimeException("Vector is empty");
        }
        if (!isIn(n)) {
            throw new RuntimeException("Element not in vector");
        }
        if (size - 1 <= capacity / 2) {
            capacity /= 2;
        }
        Object[] newData = new Object[capacity];
        int newSize = 0;
        for (int i = 0; i < size; i++) {
            if (!data[i].equals(n)) {
                newData[newSize] = data[i];
                newSize++;
            }
        }
        data = newData;
        size = newSize;
    }

    public boolean isIn(T n) {
        for (int i = 0; i < size; i++) {
            if (data[i].equals(n)) {
                return true;
            }
        }
        return false;
    }

    public int Size() {
        return size;
    }

    public String toString() {
        StringBuilder s = new StringBuilder("[");
        for (int i = 0; i < size; i++) {
            s.append(data[i]);
            if (i != size - 1) {
                s.append(", ");
            }
        }
        s.append("]");
        return String.format("Vector: %s, size: %d, capacity: %d", s.toString(), size, capacity);
    }

    boolean equals(JavaVector<T> v) {
        if (size != v.size) {
            return false;
        }
        for (int i = 0; i < size; i++) {
            if (!data[i].equals(v.data[i])) {
                return false;
            }
        }
        return true;
    }
}

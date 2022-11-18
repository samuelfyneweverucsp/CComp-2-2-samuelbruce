#ifndef __DYNAMICARRAY_H__
#define __DYNAMICARRAY_H__

template <typename Tipo>

class DynamicArray {
        // friend std::ostream& operator<<(std::ostream&, const DynamicArray); // prototipo
    private:
        int size;
        Tipo *data;
        void resize(int new_size) {
            int min_size = (new_size < size ? new_size : size);

        }

    public:
        DynamicArray() {
            this->size = 0;
            data = new Tipo[0];
        }

        DynamicArray(const Tipo arr[], int size) {
            this->size = size;
            data = new Tipo[size];
            for(int i = 0; i < size; i++) {
                data[i] = arr[i];
            }
        };

        DynamicArray(const DynamicArray<Tipo> &o) {
                size = o.size;
                Tipo *data = new Tipo[o.size];
                for(int i = 0; i < size; i++) {
                    o.data[i].print();
                    data[i] = o.data[i];
                    // data[i].setX(o.data[i].getX());
                    // data[i].setY(o.data[i].getY());
                }
        }

        int getSize() const {return size;}

        void print() const {
                std::cout << "[ ";
                for(int i = 0; i < size; i++)
                    std::cout << data[i] << " ";
                std::cout << "]" << std::endl;
        }

        void push_back(Tipo elem) {
            // 1
            Tipo *tmp = new Tipo[size + 1];
            // 2
            for(int i = 0; i < size; i++)
                tmp[i] = data[i];
            // 3
            tmp[size] = elem;
            // 4
            size += 1;
            // 5
            delete [] data;
            // 6
            data = tmp;
        }

        void insert(Tipo elem, int pos) {
                // 1
                Tipo *tmp = new Tipo[size + 1];
                // 2
                for(int i = 0, j = 0; i < size; i++, j++) {
                    if( j == pos) {
                        tmp[pos] = elem;
                        i--;
                    } else {
                        tmp[j] = data[i];
                    }        
                }
                // 3
                size += 1;
                // 4
                delete [] data;
                // 5
                data = tmp;
        }

        void remove(int pos) {
                // 1: reservar datos
                Tipo *tmp = new Tipo[size - 1];
                // 2: copiar datos
                for(int i = 0; i < pos; i++) {
                    tmp[i] = data[i]; 
                }
                // 2: seguir copiando despues de saltar el pos
                for(int j = pos; j < size - 1; j++) {
                    tmp[j] = data[j + 1];
                }
                // 3
                size -= 1;
                // 4
                delete [] data;
                // 5
                data = tmp;
        }

        ~DynamicArray() {delete [] data;}
        
};

#endif

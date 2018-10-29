#include <iostream>

<KeyType, ValueType>
class HashMap {


public:
    HashMap(){
        buckets = new std::pair<KeyTpe, ValueType> [DEFAULT_BUCKET_SIZE]*>
    }

    HashMap(const HashMap &other) {
        this->buckets = new std::pair<KeyType, ValueType>[other.size];
        this->size = other.size;


    }

    ValueType find(const KeyType &key) {
        return this->operator[](key);
    }
    void insert(const KeyType &key, ValueType value){
        //if(this->[key]==null){
            this->operator[](key);
        //}
    }

    ValueType &operator[](const Keytype &key) {
        size_t HashValue = hash(key);
        size_t index = HashValue % size;
        size_t hash = quadprobe(key);
        if(buckets[index]==nullptr) {
            buckets[index] = new std::pair<KeyType, ValueType>;
            //allocating memory
            buckets[index]->first = key;
        }

        return buckets[index]->second;

    }



private:

    size_t hash(const KeyType &key){
        return 1;
    }

    size_t quadprobe(key){
            //boolean test = ((buckets[index]!=null) && (buckets[index]->first !=key) &&  i<size);
            //for(int i=1; test==true; i++) {
            for(size_t i =1; ((buckets[index]!= nullptr]) && (buckets[index]->first != key)) && i<size; i++){
                index = (hash(key) + (c1 * i) + (c2 * (i ^ 2))) % size;
                return index;
            }
    }



}
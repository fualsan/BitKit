#ifndef BIT_KIT_H
#define BIT_KIT_H

template <class T>
class BitKit {
public:
    static void bitSet(T *number, unsigned int bitIndex);
    static void bitClear(T *number, unsigned int bitIndex);
    static void bitToggle(T *number, unsigned int bitIndex);
    static T bitCheck(T *number, unsigned int bitIndex);
    static void bitChange(T *number, unsigned int bitIndex, T bitValue);
    static void printBinary(T x);
};

template <class T>
void BitKit<T>::bitSet(T *number, unsigned int bitIndex){
    if (bitIndex > (sizeof(T) * 8)) {
        std::cout << "[bitSet]: Bit overflow detected!" << std::endl
                  << "Bit index is not valid!" << std::endl;
        exit(-1);
    }

    (*number) |= 1 << (bitIndex-1);
}

template <class T>
void BitKit<T>::bitClear(T *number, unsigned int bitIndex){
    if (bitIndex > (sizeof(T) * 8)) {
        std::cout << "[bitClear]: Bit overflow detected!" << std::endl
                  << "Bit index is not valid!" << std::endl;
        exit(-1);
    }

    (*number) &= ~(1 << (bitIndex-1));
}

template <class T>
void BitKit<T>::bitToggle(T *number, unsigned int bitIndex){
    if (bitIndex > (sizeof(T) * 8)) {
        std::cout << "[bitToggle]: Bit overflow detected!" << std::endl
                  << "Bit index is not valid!" << std::endl;
        exit(-1);
    }

    (*number) ^= 1 << (bitIndex-1);
}

template <class T>
T BitKit<T>::bitCheck(T *number, unsigned int bitIndex){
    if (bitIndex > (sizeof(T) * 8)) {
        std::cout << "[bitCheck]: Bit overflow detected!" << std::endl
                  << "Bit index is not valid!" << std::endl;
        exit(-1);
    }

    T  bit = ((*number) >> (bitIndex-1)) & 1;
    return bit;
}

template <class T>
void BitKit<T>::bitChange(T *number, unsigned int bitIndex, T bitValue){
    if (bitIndex > (sizeof(T) * 8)) {
        std::cout << "[bitChange]: Bit overflow detected!" << std::endl
                  << "Bit index is not valid!" << std::endl;
        exit(-1);
    } else if (bitValue != 0 && bitValue != 1) {
        std::cout << "Bit value is not valid!, Should be either 1 or 0" << std::endl;
        exit(-1);
    }

    (*number) ^= (-bitValue ^ (*number)) & (1 << (bitIndex-1));
}

template <class T>
void BitKit<T>::printBinary(T x) {
    for (int i = sizeof(x) * CHAR_BIT; i--; ) {
        //putchar('0' + ((x >> i) & 1));
        std::cout << (char)('0' + ((x >> i) & 1));
    }
    std::cout << std::endl;
}

#endif

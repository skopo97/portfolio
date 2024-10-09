#include <iostream>


class Box {
private:
    int length, breadth, height;

public:
    Box() : length(0), breadth(0), height(0) {
    }

    Box(int length, int breadth, int height) {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }

    Box(const Box &other) {
        this->length = other.length;
        this->breadth = other.breadth;
        this->height = other.height;
    }

    int getLength() { return length; }
    int getBreadth() { return breadth; }
    int getHeight() { return height; }

    long long CalculateVolume() const {
        return static_cast<long long>(length) * breadth * height;
    }

    bool operator<(Box &b) {
        return this->CalculateVolume() < b.CalculateVolume();
    }

    friend std::ostream &operator<<(std::ostream &out, Box &B);
};

std::ostream &operator<<(std::ostream &out, Box &B) {
    out << B.length << " " << B.breadth << " " << B.height;
    return out;
}

int main() {
    return 0;
}

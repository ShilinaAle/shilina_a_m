#ifndef MYARRAY_H
#define MYARRAY_H

class Myarray
{
public:
    int& operator[](const int index);
    const int& operator[](const int index) const;
    Myarray(); //конструктор без параметров
    ~Myarray();//деструктор
    Myarray(const Myarray& a); //конструктор копирования
    Myarray(int n); //создание массива с заданным размером
    Myarray operator=(const Myarray& a); //оператор присваивания
    void resize(const int newsize);

private:
    int fsize{ 8 };
    int size{ 8 };
    int* pdata{ nullptr };
    void swap(Myarray& lhs, Myarray& rhs);
};


#endif // MYARRAY_H
